#pragma once

/// \file raytrace/noiseTexture.h
///
/// An image file-based texture.

#include <raytrace/texture.h>

#include <gm/types/floatRange.h>
#include <gm/types/intRange.h>
#include <gm/types/vec2i.h>
#include <gm/types/vec3f.h>

#include <gm/functions/clamp.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

RAYTRACE_NS_OPEN

/// \class ImageTexture
///
/// ImageTexture loads the specified image file from disk into a texture map which can be sampled from.
class ImageTexture : public Texture
{
public:
    /// Explicit constructor with an file path to an image to load as the texture.
    ///
    /// \param i_imageFilePath The file path to the image.
    explicit ImageTexture( const char* i_imageFilePath )
    {
        // Load the image from disk.
        int componentsPerPixel = c_bytesPerPixel;
        m_imageData =
            stbi_load( i_imageFilePath, &m_imageDim[ 0 ], &m_imageDim[ 1 ], &componentsPerPixel, componentsPerPixel );
        if ( m_imageData == nullptr )
        {
            std::cerr << "ERROR: Failed to load image file as texture: " << i_imageFilePath << std::endl;
            m_imageDim = gm::Vec2i();
        }

        m_bytesPerRow = c_bytesPerPixel * m_imageDim.X();
    }

    virtual ~ImageTexture()
    {
        if ( m_imageData != nullptr )
        {
            delete m_imageData;
        }
    }

    inline virtual gm::Vec3f Sample( const gm::Vec2f& i_uvCoord, const gm::Vec3f& i_position ) const override
    {
        if ( m_imageData == nullptr )
        {
            // Image file failed to load, use cyan to indicate error.
            return gm::Vec3f( 0, 1, 1 );
        }

        // Clamp input texture coordinates to (0, 1]
        gm::Vec2f uvCoord = gm::Clamp( i_uvCoord, gm::FloatRange( 0, 1 ) );

        // Flip the vertical component to align with image coordinates.
        uvCoord[ 1 ] = 1.0 - uvCoord[ 1 ];

        // Scale normalised UV coordinates into image pixel coordinates.
        gm::Vec2i imageCoord( ( int ) ( uvCoord.X() * m_imageDim.X() ), ( int ) ( uvCoord.Y() * m_imageDim.Y() ) );

        // Clamp image coordinates.
        imageCoord[ 0 ] = gm::Clamp( imageCoord.X(), gm::IntRange( 0, m_imageDim.X() - 1 ) );
        imageCoord[ 1 ] = gm::Clamp( imageCoord.Y(), gm::IntRange( 0, m_imageDim.Y() - 1 ) );

        // Factor which scales a color encoded as a byte into a normalised floating point in the range [0,1].
        constexpr float colorScale = 1.0f / 255.0f;

        // Get the starting address of the pixel, by offsetting the imageData pointer.
        unsigned char* pixelData = m_imageData +
                                   /* Row offset */ imageCoord.Y() * m_bytesPerRow +
                                   /* Column offset */ imageCoord.X() * c_bytesPerPixel;

        return gm::Vec3f( /* red */ colorScale * pixelData[ 0 ],
                          /* green */ colorScale * pixelData[ 1 ],
                          /* blue */ colorScale * pixelData[ 2 ] );
    }

private:
    unsigned char* m_imageData = nullptr;
    gm::Vec2i      m_imageDim;
    int            m_bytesPerRow = 0;

    // Number of bytes to allocate per pixel.
    static constexpr int c_bytesPerPixel = 3;
};

RAYTRACE_NS_CLOSE
