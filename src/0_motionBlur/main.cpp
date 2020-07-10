/// \page 0_motionBlur Motion Blur
///
/// Ray tracing program which adds motion blur.
///
/// The rays which are cast from the camera now inherit a time value between the shutter begin and close.
///
/// Select spheres in the scene also "move", with different positions set for the shutter begin and close times.

#include <cxxopts.hpp>

#include <gm/base/constants.h>

#include <gm/types/floatRange.h>
#include <gm/types/vec3f.h>

#include <gm/functions/clamp.h>
#include <gm/functions/dotProduct.h>
#include <gm/functions/lengthSquared.h>
#include <gm/functions/linearInterpolation.h>
#include <gm/functions/linearMap.h>
#include <gm/functions/normalize.h>
#include <gm/functions/randomNumber.h>

#include <raytrace/camera.h>
#include <raytrace/dielectric.h>
#include <raytrace/hitRecord.h>
#include <raytrace/imageBuffer.h>
#include <raytrace/lambert.h>
#include <raytrace/metal.h>
#include <raytrace/ppmImageWriter.h>
#include <raytrace/randomPointInUnitDisk.h>
#include <raytrace/ray.h>
#include <raytrace/sphere.h>

#include <iostream>

/// \typedef SceneObjectPtrs
///
/// A collection of scene objects.
using SceneObjectPtrs = std::vector< raytrace::SceneObjectPtr >;

/// \var c_normalizedRange
///
/// Normalized float range between 0 and 1.
constexpr gm::FloatRange c_normalizedRange( 0.0f, 1.0f );

/// \var Indentation
///
/// 4 spaces.
static const char* c_indent = "    ";

/// Compute the ray color.
///
/// The ray is tested for intersection against a collection of scene objects.
/// The color is computed based on the surface outward normal of the nearest intersection.
///
/// In the case where there is no intersection, a background color is interpolated from a top-down gradient.
///
/// \param i_ray The ray.
/// \param i_numRayBounces The number of "bounces" a ray has left before termination.
/// \param i_sceneObjectPtrs The collection of scene objects to test for ray intersection.
///
/// \return The computed ray color.
static gm::Vec3f ComputeRayColor( const raytrace::Ray&   i_ray,
                                  int                    i_numRayBounces,
                                  const SceneObjectPtrs& i_sceneObjectPtrs,
                                  bool                   i_printDebug )
{
    if ( i_printDebug )
    {
        std::cout << c_indent << c_indent << i_ray << std::endl;
        std::cout << c_indent << c_indent << "Num bounces: " << i_numRayBounces << std::endl;
    }

    if ( i_numRayBounces == 0 )
    {
        // No bounces left, terminate ray and do not produce any color (black).
        return gm::Vec3f( 0, 0, 0 );
    }

    // Iterate over all scene objects and test for ray hit(s).
    // We'd like to track the nearest hit and prune out farther objects.
    raytrace::HitRecord record;
    bool                objectHit           = false;
    float               nearestHitMagnitude = std::numeric_limits< float >::max();
    for ( const raytrace::SceneObjectPtr& sceneObjectPtr : i_sceneObjectPtrs )
    {
        gm::FloatRange magnitudeRange( 0.001f, // Fix for "Shadow acne" by culling hits which are too near.
                                       nearestHitMagnitude );
        if ( sceneObjectPtr->Hit( i_ray, magnitudeRange, record ) )
        {
            objectHit           = true;
            nearestHitMagnitude = record.m_magnitude;
        }
    }

    if ( objectHit )
    {
        if ( i_printDebug )
        {
            std::cout << c_indent << c_indent << "Hit" << std::endl
                      << c_indent << c_indent << c_indent << "position: " << record.m_position << std::endl
                      << c_indent << c_indent << c_indent << "normal: " << record.m_normal << std::endl;
        }

        raytrace::Ray scatteredRay;
        gm::Vec3f     attenuation;
        if ( record.m_material->Scatter( i_ray, record, attenuation, scatteredRay ) )
        {
            // Material produced a new scattered ray.
            // Continue ray color recursion.
            // To resolve an aggregate color, we take the vector product.
            gm::Vec3f descendentColor =
                ComputeRayColor( scatteredRay, i_numRayBounces - 1, i_sceneObjectPtrs, i_printDebug );

            if ( i_printDebug )
            {
                std::cout << c_indent << c_indent << "Attenuation: " << attenuation << std::endl;
            }

            return gm::Vec3f( attenuation[ 0 ] * descendentColor[ 0 ],
                              attenuation[ 1 ] * descendentColor[ 1 ],
                              attenuation[ 2 ] * descendentColor[ 2 ] );
        }
        else
        {
            if ( i_printDebug )
            {
                std::cout << c_indent << c_indent << "Absorbed!" << std::endl;
            }
            // Material has completely absorbed the ray, thus return no color.
            return gm::Vec3f( 0, 0, 0 );
        }
    }

    if ( i_printDebug )
    {
        std::cout << c_indent << c_indent << "Background colour!" << std::endl;
    }

    // Compute background color, by interpolating between two colors with the weight as the function of the ray
    // direction.
    float weight = 0.5f * i_ray.Direction().Y() + 1.0;
    return gm::LinearInterpolation( gm::Vec3f( 1.0, 1.0, 1.0 ), gm::Vec3f( 0.5, 0.7, 1.0 ), weight );
}

/// Shade the specified pixel coordinate \p i_pixelCoord through colors sampled from casted rays.
///
/// \param i_pixelCoord The pixel coordinate to shade.
/// \param i_samplesPerPixel The number of rays casted to sample colors, per pixel.
/// \param i_rayBounceLimit The number of bounces a ray can perform before it is retired.
/// \param i_camera The camera model which rays are cast from.
/// \param i_sceneObjects The objects in the scene which the rays can interact with.
/// \param o_image The image buffer to write color values into.
/// \param i_printDebug Flag to enable debug printing of shading and ray information.
void ShadePixel( const gm::Vec2i&          i_pixelCoord,
                 int                       i_samplesPerPixel,
                 int                       i_rayBounceLimit,
                 const raytrace::Camera&   i_camera,
                 const SceneObjectPtrs&    i_sceneObjects,
                 const gm::FloatRange&     i_shutterRange,
                 raytrace::RGBImageBuffer& o_image,
                 bool                      i_printDebug = false )
{
    if ( i_printDebug )
    {
        std::cout << "Pixel " << i_pixelCoord << std::endl;
    }

    // This could be constant over the entire image.  But I don't want to pass in any more function parameters...
    const float lensRadius = i_camera.Aperture() * 0.5f;

    // Accumulate pixel color over multiple samples.
    gm::Vec3f pixelColor;
    for ( int sampleIndex = 0; sampleIndex < i_samplesPerPixel; ++sampleIndex )
    {
        // Compute normalised viewport coordinates (values between 0 and 1).
        float u = ( float( i_pixelCoord.X() ) + gm::RandomNumber( c_normalizedRange ) ) / o_image.Extent().Max().X();
        float v = ( float( i_pixelCoord.Y() ) + gm::RandomNumber( c_normalizedRange ) ) / o_image.Extent().Max().Y();

        gm::Vec3f randomPointInLens = lensRadius * raytrace::RandomPointInUnitDisk();
        gm::Vec3f lensOffset        = randomPointInLens.X() * i_camera.Right() + randomPointInLens.Y() * i_camera.Up();

        gm::Vec3f rayDirection = i_camera.ViewportBottomLeft()           // Starting from the viewport bottom left...
                                 + ( u * i_camera.ViewportHorizontal() ) // Horizontal offset.
                                 + ( v * i_camera.ViewportVertical() )   // Vertical offset.
                                 - i_camera.Origin()                     // Get difference vector from camera origin.
                                 - lensOffset; // Since the origin was offset, we must apply the inverse offset to
                                               // the ray direction such that the ray position _at the focal plane_
                                               // is the same as before!
        raytrace::Ray ray( /* origin */ i_camera.Origin() + lensOffset,
                           /* direction */ rayDirection,
                           /* time */ gm::RandomNumber( i_shutterRange ) );

        // Normalize the direction of the ray.
        ray.Direction() = gm::Normalize( ray.Direction() );

        // Accumulate color.
        gm::Vec3f sampleColor = ComputeRayColor( ray, i_rayBounceLimit, i_sceneObjects, i_printDebug );
        pixelColor += sampleColor;

        if ( i_printDebug )
        {
            std::cout << c_indent << "Sample: " << sampleIndex << std::endl;
            std::cout << c_indent << "Sample color: " << sampleColor << std::endl;
        }
    }

    // Divide by number of samples to produce average color.
    pixelColor /= ( float ) i_samplesPerPixel;

    // Correct for gamma 2, by raising to 1/gamma.
    pixelColor[ 0 ] = sqrt( pixelColor[ 0 ] );
    pixelColor[ 1 ] = sqrt( pixelColor[ 1 ] );
    pixelColor[ 2 ] = sqrt( pixelColor[ 2 ] );

    // Clamp the value down to [0,1).
    pixelColor = gm::Clamp( pixelColor, c_normalizedRange );

    // Assign finalized colour.
    o_image( i_pixelCoord.X(), i_pixelCoord.Y() ) = pixelColor;
}

/// Populate the scene by appending a variety of objects to \p o_sceneObjects.
///
/// \param i_shutterRange The time range where the shutter opens and closes.
/// \param o_sceneObjects Collection to populate with scene objects.
void PopulateSceneObjects( const gm::FloatRange& i_shutterRange, SceneObjectPtrs& o_sceneObjects )
{
    raytrace::MaterialSharedPtr groundMaterial = std::make_shared< raytrace::Lambert >( gm::Vec3f( 0.5, 0.5, 0.5 ) );
    o_sceneObjects.push_back( std::make_unique< raytrace::Sphere >( gm::Vec3f( 0, -1000, 0 ), 1000, groundMaterial ) );

    for ( int a = -11; a < 11; a++ )
    {
        for ( int b = -11; b < 11; b++ )
        {
            gm::Vec3f center( a + 0.9 * gm::RandomNumber( c_normalizedRange ),
                              0.2,
                              b + 0.9 * gm::RandomNumber( c_normalizedRange ) );
            if ( gm::Length( center - gm::Vec3f( 4, 0.2, 0 ) ) > 0.9 )
            {
                float materialChoice = gm::RandomNumber( c_normalizedRange );
                if ( materialChoice < 0.8 )
                {
                    // Diffuse.
                    gm::Vec3f albedo( gm::RandomNumber( c_normalizedRange ),
                                      gm::RandomNumber( c_normalizedRange ),
                                      gm::RandomNumber( c_normalizedRange ) );

                    raytrace::MaterialSharedPtr sphereMaterial = std::make_shared< raytrace::Lambert >( albedo );

                    // Compute a random Y axis translation.
                    gm::Vec3f centerTranslation( 0, gm::RandomNumber( gm::FloatRange( 0, 0.5f ) ), 0 );

                    // Set multiple time samples for the sphere.
                    std::vector< std::pair< float, gm::Vec3f > > timeSamples = {
                        {i_shutterRange.Min(), center},
                        {i_shutterRange.Max(), center + centerTranslation}};

                    o_sceneObjects.push_back(
                        std::make_unique< raytrace::Sphere >( raytrace::Attribute< gm::Vec3f >( timeSamples ),
                                                              0.2,
                                                              sphereMaterial ) );
                }
                else if ( materialChoice < 0.95 )
                {
                    // Metal.
                    gm::Vec3f albedo( gm::RandomNumber( gm::FloatRange( 0.5, 1.0 ) ),
                                      gm::RandomNumber( gm::FloatRange( 0.5, 1.0 ) ),
                                      gm::RandomNumber( gm::FloatRange( 0.5, 1.0 ) ) );
                    float     fuzziness = gm::RandomNumber( gm::FloatRange( 0.0, 0.5 ) );

                    raytrace::MaterialSharedPtr sphereMaterial =
                        std::make_shared< raytrace::Metal >( albedo, fuzziness );

                    o_sceneObjects.push_back( std::make_unique< raytrace::Sphere >( center, 0.2, sphereMaterial ) );
                }
                else
                {
                    // Glass.
                    raytrace::MaterialSharedPtr sphereMaterial = std::make_shared< raytrace::Dielectric >( 1.5 );
                    o_sceneObjects.push_back( std::make_unique< raytrace::Sphere >( center, 0.2, sphereMaterial ) );
                }
            }
        }
    }

    raytrace::MaterialSharedPtr material1 = std::make_shared< raytrace::Dielectric >( 1.5 );
    o_sceneObjects.push_back( std::make_unique< raytrace::Sphere >( gm::Vec3f( 0, 1, 0 ), 1.0, material1 ) );

    raytrace::MaterialSharedPtr material2 = std::make_shared< raytrace::Lambert >( gm::Vec3f( 0.4, 0.2, 0.1 ) );
    o_sceneObjects.push_back( std::make_unique< raytrace::Sphere >( gm::Vec3f( -4, 1, 0 ), 1.0, material2 ) );

    raytrace::MaterialSharedPtr material3 = std::make_shared< raytrace::Metal >( gm::Vec3f( 0.7, 0.6, 0.5 ), 0.0 );
    o_sceneObjects.push_back( std::make_unique< raytrace::Sphere >( gm::Vec3f( 4, 1, 0 ), 1.0, material3 ) );
}

int main( int i_argc, char** i_argv )
{
    // ------------------------------------------------------------------------
    // Parse command line arguments.
    // ------------------------------------------------------------------------

    cxxopts::Options options( "0_motionBlur", "Adding motion blur to the scene objects." );
    options.add_options()                                                                       // Command line options.
        ( "w,width", "Width of the image.", cxxopts::value< int >()->default_value( "384" ) )   // Width
        ( "h,height", "Height of the image.", cxxopts::value< int >()->default_value( "256" ) ) // Height;
        ( "o,output", "Output file", cxxopts::value< std::string >()->default_value( "out.ppm" ) ) // Output file.
        ( "s,samplesPerPixel",
          "Number of samples per-pixel.",
          cxxopts::value< int >()->default_value( "100" ) ) // Number of samples.
        ( "b,rayBounceLimit",
          "Number of bounces possible for a ray until termination.",
          cxxopts::value< int >()->default_value( "50" ) ) // Maximum number of light bounces before termination.
        ( "f,verticalFov",
          "Vertical field of view of the camera, in degrees.",
          cxxopts::value< float >()->default_value( "20" ) ) // Camera param.
        ( "a,aperture",
          "Aperture of the camera (lens diameter).",
          cxxopts::value< float >()->default_value( "0.2" ) ) // Camera param.
        ( "shutterOpen",
          "The time when the shutter is open.",
          cxxopts::value< float >()->default_value( "0.0" ) ) // Motion blur param.
        ( "shutterClose",
          "The time when the shutter is closed.",
          cxxopts::value< float >()->default_value( "1.0" ) )                                    // Motion blur param.
        ( "d,debug", "Turn on debug mode.", cxxopts::value< bool >()->default_value( "false" ) ) // Debug mode.
        ( "x,debugXCoord",
          "The x-coordinate of the pixel in the image to print debug information for.",
          cxxopts::value< int >()->default_value( "0" ) ) // Xcoord.
        ( "y,debugYCoord",
          "The y-coordinate of the pixel in the image to print debug information for.",
          cxxopts::value< int >()->default_value( "0" ) ); // Ycoord.

    auto args = options.parse( i_argc, i_argv );

    // Imaging options.
    int         imageWidth      = args[ "width" ].as< int >();
    int         imageHeight     = args[ "height" ].as< int >();
    int         samplesPerPixel = args[ "samplesPerPixel" ].as< int >();
    int         rayBounceLimit  = args[ "rayBounceLimit" ].as< int >();
    float       verticalFov     = args[ "verticalFov" ].as< float >();
    float       aperture        = args[ "aperture" ].as< float >();
    std::string filePath        = args[ "output" ].as< std::string >();

    // Timing options.
    gm::FloatRange shutterRange( args[ "shutterOpen" ].as< float >(), args[ "shutterClose" ].as< float >() );

    // Debug options.
    bool debug       = args[ "debug" ].as< bool >();
    int  debugXCoord = args[ "debugXCoord" ].as< int >();
    int  debugYCoord = imageHeight - args[ "debugYCoord" ].as< int >();

    // ------------------------------------------------------------------------
    // Allocate image buffer & camera.
    // ------------------------------------------------------------------------

    // Allocate the image to write into.
    raytrace::RGBImageBuffer image( imageWidth, imageHeight );

    // Camera model.
    gm::Vec3f        origin = gm::Vec3f( 13, 2, 3 );
    gm::Vec3f        lookAt = gm::Vec3f( 0, 0, 0 );
    raytrace::Camera camera(
        /* origin */ origin,
        /* lookAt */ lookAt,
        /* viewUp */ gm::Vec3f( 0, 1, 0 ),
        /* verticalFov */ verticalFov,
        /* aspectRatio */ ( float ) imageWidth / imageHeight,
        /* aperture */ aperture,
        /* focalDistance */ 10.0 );

    // ------------------------------------------------------------------------
    // Allocate scene objects.
    // ------------------------------------------------------------------------

    SceneObjectPtrs sceneObjects;
    PopulateSceneObjects( shutterRange, sceneObjects );

    // ------------------------------------------------------------------------
    // Compute ray colors.
    // ------------------------------------------------------------------------

    for ( const gm::Vec2i& pixelCoord : image.Extent() )
    {
        ShadePixel( pixelCoord, samplesPerPixel, rayBounceLimit, camera, sceneObjects, shutterRange, image );
    }

    // ------------------------------------------------------------------------
    // Print debug pixel
    // ------------------------------------------------------------------------

    if ( debug )
    {
        ShadePixel( gm::Vec2i( debugXCoord, debugYCoord ),
                    samplesPerPixel,
                    rayBounceLimit,
                    camera,
                    sceneObjects,
                    shutterRange,
                    image,
                    /* printDebug */ true );
    }

    // ------------------------------------------------------------------------
    // Write out image.
    // ------------------------------------------------------------------------

    if ( !raytrace::WritePPMImage( image, filePath ) )
    {
        return -1;
    }

    return 0;
}
