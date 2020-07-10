#pragma once

/// \file raytrace/imageBuffer.h
///
/// Classes representing in-memory image data.

#include <raytrace/raytrace.h>

#include <gm/types/vec2iRange.h>
#include <gm/types/vec3f.h>

#include <vector>

RAYTRACE_NS_OPEN

/// \file ImageBuffer
///
/// A dynamically resizable in-memory representation of a 2 dimensional image, with compile-time
/// defined value type \p ValueT for each pixel.
///
/// \tparam ValueT the value type of each pixel.
template < typename ValueT >
class ImageBuffer final
{
public:
    /// \typedef ValueType
    ///
    /// Convenience value type definition of each pixel in the image.
    using ValueType = ValueT;

    /// Construct an image with dimensions \p i_width and \p i_height.
    ///
    /// \param i_width width dimension.
    /// \param i_height height dimension.
    explicit inline ImageBuffer( int i_width, int i_height )
    {
        Resize( i_width, i_height );
    }

    /// Get the width dimension of the image.
    ///
    /// \return the width.
    inline int Width() const
    {
        return m_width;
    }

    /// Get the height dimension of the image.
    ///
    /// \return the height.
    inline int Height() const
    {
        return m_height;
    }

    /// Pixel value read access.
    ///
    /// \param i_x the x-coordinate.
    /// \param i_y the y-coordinate.
    ///
    /// \return the value representing the pixel.
    inline const ValueT& operator()( int i_x, int i_y ) const
    {
        return m_buffer[ ( i_y * m_width ) + i_x ];
    }

    /// Pixel value write access.
    ///
    /// \param i_x the x-coordinate.
    /// \param i_y the y-coordinate.
    ///
    /// \return the value representing the pixel.
    inline ValueT& operator()( int i_x, int i_y )
    {
        return m_buffer[ ( i_y * m_width ) + i_x ];
    }

    /// Resize the image buffer.
    ///
    /// If the new dimensions \p i_width and \p i_height are different from the current, the image will be resize.
    /// All existing image data will also be cleared.
    ///
    /// \param i_width new width dimension.
    /// \param i_height new height dimension.
    ///
    /// \return whether the image was resized.
    inline bool Resize( int i_width, int i_height )
    {
        if ( i_width != m_width || i_height != m_height )
        {
            m_width  = i_width;
            m_height = i_height;
            Clear();
            return true;
        }
        else
        {
            return false;
        }
    }

    /// Clear the image buffer, by zero'ing out all the color channels.
    inline void Clear()
    {
        m_buffer.clear();
        m_buffer.resize( m_width * m_height, ValueT() );
    }

    /// Compute the extent of the image.
    ///
    /// The extent of the image is the \em minimum and \em maximum coordinates
    /// of the image plane of which pixel values are valid to read/write from & to.
    ///
    /// \return the extent of the image.
    inline gm::Vec2iRange Extent() const
    {
        return gm::Vec2iRange( gm::Vec2i( 0, 0 ), gm::Vec2i( m_width, m_height ) );
    }

private:
    /// Dimensions of the image.
    int m_width  = 0;
    int m_height = 0;

    /// In-memory storage of image data.
    std::vector< ValueT > m_buffer;
};

/// \typedef RGBImageBuffer
///
/// Type definition for an RGB image buffer with 3 floating-point channels.
using RGBImageBuffer = ImageBuffer< gm::Vec3f >;

RAYTRACE_NS_CLOSE
