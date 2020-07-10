//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file vec3fRange.h
/// \ingroup gm_types_range

#include <gm/gm.h>

#include <gm/types/vec3f.h>

#include <limits>
#include <sstream>

GM_NS_OPEN

/// \class Vec3fRange
/// \ingroup gm_types_range
///
/// Class definition for a bounded range of Vec3f(s).
class Vec3fRange final
{
public:
    /// \typedef ValueType
    ///
    /// Convenience type definition of \ref Vec3fRange's elemental value type.
    using ValueType = Vec3f;

    // --------------------------------------------------------------------- //
    /// \name Construction
    // --------------------------------------------------------------------- //

    /// Default constructor, initializing an \em empty range.
    ///
    /// An empty range has a min value with max numerical limit, conversely
    /// a max value with min numerical limit.
    GM_HOST_DEVICE constexpr inline Vec3fRange() = default;

    /// Explicit constructor for initializing a minimum maximum range.
    ///
    /// \param i_min Minimum bounds.
    /// \param i_max Maximum bounds.
    GM_HOST_DEVICE constexpr explicit inline Vec3fRange( const Vec3f& i_min, const Vec3f& i_max )
        : m_min( i_min )
        , m_max( i_max )
    {
    }

    // --------------------------------------------------------------------- //
    /// \name Access
    // --------------------------------------------------------------------- //

    /// Read access to the minimum bound of this range.
    ///
    /// \return The minimum bound.
    GM_HOST_DEVICE inline const Vec3f& Min() const
    {
        return m_min;
    }

    /// Write access to the minimum bound of this range.
    ///
    /// \return The minimum bound.
    GM_HOST_DEVICE inline Vec3f& Min()
    {
        return m_min;
    }

    /// Read access to the maximum bound of this range.
    ///
    /// \return The maximum bound.
    GM_HOST_DEVICE inline const Vec3f& Max() const
    {
        return m_max;
    }

    /// Write access to the maximum bound of this range.
    ///
    /// \return The maximum bound.
    GM_HOST_DEVICE inline Vec3f& Max()
    {
        return m_max;
    }

    // --------------------------------------------------------------------- //
    /// \name Debug
    // --------------------------------------------------------------------- //

    /// Get the string representation.  For debugging purposes.
    ///
    /// \param i_classPrefix optional string to prefix class tokens.
    ///
    /// \return descriptive string representing this type instance.
    inline std::string GetString( const std::string& i_classPrefix = std::string() ) const
    {
        std::stringstream ss;
        ss << i_classPrefix << "Vec3fRange( ";
        ss << m_min.GetString( i_classPrefix );
        ss << ", ";
        ss << m_max.GetString( i_classPrefix );
        ss << " )";
        return ss.str();
    }

private:
    // Min bound member.
    Vec3f m_min = Vec3f( std::numeric_limits< float >::max(),
                         std::numeric_limits< float >::max(),
                         std::numeric_limits< float >::max() );

    // Max bound member.
    Vec3f m_max = Vec3f( std::numeric_limits< float >::min(),
                         std::numeric_limits< float >::min(),
                         std::numeric_limits< float >::min() );
};

/// Operator overload for << to enable writing the string representation of \p i_value into an output
/// stream \p o_outputStream.
///
/// \param o_outputStream the output stream to write into.
/// \param i_value the source composite value type.
///
/// \return the output stream.
inline std::ostream& operator<<( std::ostream& o_outputStream, const Vec3fRange& i_value )
{
    o_outputStream << i_value.GetString();
    return o_outputStream;
}

GM_NS_CLOSE