#pragma once

/// \file raytrace/ppmImageWriter.h
///
/// Serialization of an image into a PPM file on disk.

#include <gm/types/intRange.h>

#include <raytrace/imageBuffer.h>
#include <raytrace/raytrace.h>

#include <fstream>
#include <iostream>

RAYTRACE_NS_OPEN

/// A simple function for writing an image \p i_image into file location \p i_filePath.
///
/// \param i_image the image buffer to write.
/// \param i_filePath file location to save the PPM image.
///
/// \return success of writing the image.
inline bool WritePPMImage( const RGBImageBuffer& i_image, const std::string& i_filePath )
{
    std::ofstream fileOutput( i_filePath.c_str(), std::ios::out | std::ios::trunc );
    if ( !fileOutput.is_open() )
    {
        fprintf( stderr, "Cannot open file '%s' for writing!\n", i_filePath.c_str() );
        return false;
    }

    // PPM header.
    fileOutput << "P3\n"                                                   // Ascii encoding.
               << i_image.Width() << ' ' << i_image.Height() << "\n255\n"; // Maximum color channel value.

    // PPM body.
    for ( int yCoord = i_image.Height() - 1; yCoord >= 0; yCoord-- )
    {
        for ( int xCoord : gm::IntRange( 0, i_image.Width() ) )
        {
            gm::Vec3f pixel = i_image( xCoord, yCoord );
            int       r     = static_cast< int >( 255.999 * pixel[ 0 ] );
            int       g     = static_cast< int >( 255.999 * pixel[ 1 ] );
            int       b     = static_cast< int >( 255.999 * pixel[ 2 ] );
            fileOutput << r << ' ' << g << ' ' << b << '\n';
        }
    }

    return true;
}

RAYTRACE_NS_CLOSE
