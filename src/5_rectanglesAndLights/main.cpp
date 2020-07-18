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

#include <raytrace/box.h>
#include <raytrace/bvh.h>
#include <raytrace/camera.h>
#include <raytrace/constantTexture.h>
#include <raytrace/diffuseLight.h>
#include <raytrace/hitRecord.h>
#include <raytrace/imageBuffer.h>
#include <raytrace/lambert.h>
#include <raytrace/noiseTexture.h>
#include <raytrace/ppmImageWriter.h>
#include <raytrace/randomPointInUnitDisk.h>
#include <raytrace/ray.h>
#include <raytrace/sphere.h>

#include <iostream>

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
/// \param i_ray The incident ray.
/// \param i_numRayBounces The number of "bounces" a ray has left before termination.
/// \param i_rootObject The root object to perform hit tests against.
/// \param i_backgroundColor The color returned when the ray does not hit an object.
/// \param i_printDebug Optional flag to enable printing of debug ray information.
///
/// \return The computed ray color.
static gm::Vec3f ComputeRayColor( const raytrace::Ray&            i_ray,
                                  int                             i_numRayBounces,
                                  const raytrace::SceneObjectPtr& i_rootObject,
                                  const gm::Vec3f&                i_backgroundColor,
                                  bool                            i_printDebug )
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

    // Check if the ray hits any objects in the scene.
    raytrace::HitRecord record;
    gm::FloatRange      magnitudeRange( 0.001f, // Fix for "Shadow acne" by culling hits which are too near.
                                   std::numeric_limits< float >::max() );

    if ( i_rootObject->Hit( i_ray, magnitudeRange, record ) )
    {
        // Hit an object.
        if ( i_printDebug )
        {
            std::cout << c_indent << c_indent << "Hit" << std::endl
                      << c_indent << c_indent << c_indent << "position: " << record.m_position << std::endl
                      << c_indent << c_indent << c_indent << "normal: " << record.m_normal << std::endl;
        }

        // Check for ray emission (lights!).
        gm::Vec3f emission = record.m_material->Emit( record.m_uv, record.m_position );

        // Check for ray scattering.
        raytrace::Ray scatteredRay;
        gm::Vec3f     attenuation;
        if ( record.m_material->Scatter( i_ray, record, attenuation, scatteredRay ) )
        {
            // Material produced a new scattered ray.
            // Continue ray color recursion.
            // To resolve an aggregate color, we take the vector product.
            gm::Vec3f descendentColor =
                ComputeRayColor( scatteredRay, i_numRayBounces - 1, i_rootObject, i_backgroundColor, i_printDebug );

            if ( i_printDebug )
            {
                std::cout << c_indent << c_indent << "Attenuation: " << attenuation << std::endl;
            }

            return emission + gm::Vec3f( attenuation[ 0 ] * descendentColor[ 0 ],
                                         attenuation[ 1 ] * descendentColor[ 1 ],
                                         attenuation[ 2 ] * descendentColor[ 2 ] );
        }
        else
        {
            if ( i_printDebug )
            {
                std::cout << c_indent << c_indent << "No scatter!" << std::endl;
            }

            return emission;
        }
    }
    else
    {
        // Did not hit an object.  Produce background color.

        if ( i_printDebug )
        {
            std::cout << c_indent << c_indent << "Background colour!" << std::endl;
        }

        return i_backgroundColor;
    }
}

/// Shade the specified pixel coordinate \p i_pixelCoord through colors sampled from casted rays.
///
/// \param i_pixelCoord The pixel coordinate to shade.
/// \param i_samplesPerPixel The number of rays casted to sample colors, per pixel.
/// \param i_rayBounceLimit The number of bounces a ray can perform before it is retired.
/// \param i_camera The camera model which rays are cast from.
/// \param i_rootObject The root object to perform hit tests against.
/// \param i_backgroundColor The color returned when the ray does not hit an object.
/// \param o_image The image buffer to write color values into.
/// \param i_printDebug Flag to enable debug printing of shading and ray information.
void ShadePixel( const gm::Vec2i&                i_pixelCoord,
                 int                             i_samplesPerPixel,
                 int                             i_rayBounceLimit,
                 const raytrace::Camera&         i_camera,
                 const raytrace::SceneObjectPtr& i_rootObject,
                 const gm::FloatRange&           i_shutterRange,
                 const gm::Vec3f&                i_backgroundColor,
                 raytrace::RGBImageBuffer&       o_image,
                 bool                            i_printDebug = false )
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

        // Compute lens offset, produces the depth of field effect for those objects not exactly
        // at the focal distance.
        gm::Vec3f randomPointInLens = lensRadius * raytrace::RandomPointInUnitDisk();
        gm::Vec3f lensOffset        = randomPointInLens.X() * i_camera.Right() + randomPointInLens.Y() * i_camera.Up();

        // Construct our ray.
        gm::Vec3f rayDirection = i_camera.ViewportBottomLeft()           // Starting from the viewport bottom left...
                                 + ( u * i_camera.ViewportHorizontal() ) // Horizontal offset.
                                 + ( v * i_camera.ViewportVertical() )   // Vertical offset.
                                 - i_camera.Origin()                     // Get difference vector from camera origin.
                                 - lensOffset; // Since the origin was offset, we must apply the inverse offset to
                                               // the ray direction such that the ray position _at the focal plane_
                                               // is the same as before!
        raytrace::Ray ray( /* origin */ i_camera.Origin() + lensOffset,
                           /* direction */ gm::Normalize( rayDirection ),
                           /* time */ gm::RandomNumber( i_shutterRange ) );

        // Accumulate color.
        gm::Vec3f sampleColor = ComputeRayColor( ray, i_rayBounceLimit, i_rootObject, i_backgroundColor, i_printDebug );
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
void PopulateSceneObjects( const gm::FloatRange& i_shutterRange, raytrace::SceneObjectPtrs& o_sceneObjects )
{
    raytrace::TextureSharedPtr  noiseTexture = std::make_shared< raytrace::NoiseTexture >( 10.0f );
    raytrace::MaterialSharedPtr diffuseLight = std::make_shared< raytrace::DiffuseLight >(
        std::make_shared< raytrace::ConstantTexture >( gm::Vec3f( 4, 4, 4 ) ) );

    // Sphere light.
    o_sceneObjects.push_back( std::make_shared< raytrace::Sphere >( /* origin */ gm::Vec3f( 0, 8, 0 ),
                                                                    /* radius */ 2,
                                                                    /* material */ diffuseLight ) );

    // Box light.
    o_sceneObjects.push_back( std::make_shared< raytrace::Box >( /* origin */ gm::Vec3f( 0, 4, 4 ),
                                                                 /* dimensions */ gm::Vec3f( 4.0f, 4.0f, 0.001f ),
                                                                 /* material */ diffuseLight ) );

    o_sceneObjects.push_back( std::make_shared< raytrace::Sphere >(
        /* origin */ gm::Vec3f( 0, -1000, 0 ),
        /* radius */ 1000,
        /* material */ std::make_shared< raytrace::Lambert >( noiseTexture ) ) );
    o_sceneObjects.push_back(
        std::make_shared< raytrace::Sphere >( /* origin */ gm::Vec3f( 0, 2, 0 ),
                                              /* radius */ 2,
                                              /* material */ std::make_shared< raytrace::Lambert >( noiseTexture ) ) );
}

int main( int i_argc, char** i_argv )
{
    // ------------------------------------------------------------------------
    // Parse command line arguments.
    // ------------------------------------------------------------------------

    cxxopts::Options options( "5_rectanglesAndLights",
                              "Ray tracing program introducing emissive materials to light the scene, as well as a new "
                              "geometric object in the form of a Rectangle." );
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
          cxxopts::value< float >()->default_value( "30" ) ) // Camera param.
        ( "a,aperture",
          "Aperture of the camera (lens diameter).",
          cxxopts::value< float >()->default_value( "0.0" ) ) // Camera param.
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

    // Background color.
    const gm::Vec3f backgroundColor( 0, 0, 0 );

    // ------------------------------------------------------------------------
    // Allocate image buffer & camera.
    // ------------------------------------------------------------------------

    // Allocate the image to write into.
    raytrace::RGBImageBuffer image( imageWidth, imageHeight );

    // Camera model.
    gm::Vec3f        origin = gm::Vec3f( 20, 2, -8 );
    gm::Vec3f        lookAt = gm::Vec3f( 0, 2, 0 );
    raytrace::Camera camera(
        /* origin */ origin,
        /* lookAt */ lookAt,
        /* viewUp */ gm::Vec3f( 0, 1, 0 ),
        /* verticalFov */ verticalFov,
        /* aspectRatio */ ( float ) imageWidth / imageHeight,
        /* aperture */ aperture,
        /* focalDistance */ 10.0 );

    // ------------------------------------------------------------------------
    // Allocate scene objects, and perform transformations.
    // ------------------------------------------------------------------------

    // Populate an array of scene objects.
    raytrace::SceneObjectPtrs sceneObjects;
    PopulateSceneObjects( shutterRange, sceneObjects );

    // Transform the scene objects into a BVH tree.
    std::vector< float >     times      = {shutterRange.Min(), shutterRange.Max()};
    raytrace::SceneObjectPtr rootObject = std::make_shared< raytrace::BVHNode >( sceneObjects, times );

    // ------------------------------------------------------------------------
    // Shade pixels.
    // ------------------------------------------------------------------------

    for ( const gm::Vec2i& pixelCoord : image.Extent() )
    {
        ShadePixel( pixelCoord,
                    samplesPerPixel,
                    rayBounceLimit,
                    camera,
                    rootObject,
                    shutterRange,
                    backgroundColor,
                    image );
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
                    rootObject,
                    shutterRange,
                    backgroundColor,
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
