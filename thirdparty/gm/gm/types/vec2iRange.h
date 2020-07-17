//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file vec2iRange.h
/// \ingroup gm_types_range

#include <gm/gm.h>

#include <gm/types/vec2i.h>

#include <gm/base/almost.h>

#include <cmath>
#include <limits>
#include <sstream>

GM_NS_OPEN

/// \class Vec2iRange
/// \ingroup gm_types_range
///
/// Class definition for a bounded range of Vec2i(s).
class Vec2iRange final
{
public:
    /// \typedef ValueType
    ///
    /// Convenience type definition of \ref Vec2iRange's elemental value type.
    using ValueType = Vec2i;

    // --------------------------------------------------------------------- //
    /// \name Construction
    // --------------------------------------------------------------------- //

    /// Default constructor, initializing an \em empty range.
    ///
    /// An empty range has a min value with max numerical limit, conversely
    /// a max value with min numerical limit.
    GM_HOST_DEVICE constexpr inline Vec2iRange() = default;

    /// Explicit constructor for initializing a minimum maximum range.
    ///
    /// \param i_min Minimum.
    /// \param i_max Maximum.
    GM_HOST_DEVICE constexpr explicit inline Vec2iRange( const Vec2i& i_min, const Vec2i& i_max )
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
    GM_HOST_DEVICE inline const Vec2i& Min() const
    {
        return m_min;
    }

    /// Write access to the minimum bound of this range.
    ///
    /// \return The minimum bound.
    GM_HOST_DEVICE inline Vec2i& Min()
    {
        return m_min;
    }

    /// Read access to the maximum bound of this range.
    ///
    /// \return The maximum bound.
    GM_HOST_DEVICE inline const Vec2i& Max() const
    {
        return m_max;
    }

    /// Write access to the maximum bound of this range.
    ///
    /// \return The maximum bound.
    GM_HOST_DEVICE inline Vec2i& Max()
    {
        return m_max;
    }

    // --------------------------------------------------------------------- //
    /// \name Comparison
    // --------------------------------------------------------------------- //

    /// Equality comparison against \p i_range.
    ///
    /// \param i_range The range to compare against.
    ///
    /// \retval true If this range is equal to \p i_range.
    /// \retval false If this range is not equal to \p i_range.
    GM_HOST_DEVICE inline bool operator==( const Vec2iRange& i_range ) const
    {
        return Min() == i_range.Min() && Max() == i_range.Max();
    }

    /// Non-equality comparison against \p i_range.
    ///
    /// \param i_range The range to compare against.
    ///
    /// \retval true If this range is not equal to \p i_range.
    /// \retval false If this range is equal to \p i_range.
    GM_HOST_DEVICE inline bool operator!=( const Vec2iRange& i_range ) const
    {
        return !( ( *this ) == i_range );
    }

    /// Check if this range is empty.
    ///
    /// A range is empty if any of the components in the minimum is greater
    /// than the maximum.
    ///
    /// \retval true If this range is empty.
    /// \retval false If this range is non-empty.
    GM_HOST_DEVICE inline bool IsEmpty() const
    {
        return Min()[ 0 ] > Max()[ 0 ] || Min()[ 1 ] > Max()[ 1 ];
    }

    // --------------------------------------------------------------------- //
    /// \name Range iteration.
    // --------------------------------------------------------------------- //

    /// \class iterator
    ///
    /// Iterator class for the range Vec2iRange.
    class iterator final
    {
    public:
        /// Iterator construction, with the current position.
        ///
        /// \param i_current The position to initialize this iterator to.
        /// \param i_min the minimum of the range.
        /// \param i_max the maximum of the range.
        inline iterator( const Vec2i& i_current, const Vec2i& i_min, const Vec2i& i_max )
            : m_currentValue( i_current )
            , m_min( i_min )
            , m_max( i_max )
        {
        }

        /// Check if the current position of the iterator matches another.
        inline bool operator!=( const iterator& i_other ) const
        {
            return m_currentValue != i_other.m_currentValue;
        }

        /// De-reference this iterator, returning the value.
        inline const Vec2i& operator*() const
        {
            return m_currentValue;
        }

        /// Increment this iterator forwards.
        inline const iterator& operator++()
        {
            if ( m_currentValue[ 0 ] + 1 < m_max[ 0 ] )
            {
                m_currentValue[ 0 ] += 1;
            }
            else if ( m_currentValue[ 1 ] + 1 < m_max[ 1 ] )
            {
                m_currentValue[ 0 ] = m_min[ 0 ];
                m_currentValue[ 1 ] += 1;
            }
            else
            {
                m_currentValue = m_max;
            }

            return ( *this );
        }

    private:
        Vec2i m_currentValue;
        Vec2i m_min;
        Vec2i m_max;
    };

    /// Get the iterator with the position at the \em beginning of the range.
    inline iterator begin() const
    {
        return iterator( m_min, m_min, m_max );
    }

    /// Get the iterator with the position at the \em end of the range.
    inline iterator end() const
    {
        return iterator( m_max, m_min, m_max );
    }

    // --------------------------------------------------------------------- //
    /// \name Debug
    // --------------------------------------------------------------------- //

    /// Check if the min or max contain NaN values.
    ///
    /// \return If this range has NaN values.
    GM_HOST_DEVICE inline bool HasNans() const
    {
        return Min().HasNans() || Max().HasNans();
    }

    /// Get the string representation.  For debugging purposes.
    ///
    /// \param i_classPrefix optional string to prefix class tokens.
    ///
    /// \return descriptive string representing this type instance.
    inline std::string GetString( const std::string& i_classPrefix = std::string() ) const
    {
        std::stringstream ss;
        ss << i_classPrefix << "Vec2iRange( ";
        ss << m_min.GetString( i_classPrefix );
        ss << ", ";
        ss << m_max.GetString( i_classPrefix );
        ss << " )";
        return ss.str();
    }

private:
    // Min bound member.
    Vec2i m_min = Vec2i( std::numeric_limits< int >::max(), std::numeric_limits< int >::max() );

    // Max bound member.
    Vec2i m_max = Vec2i( std::numeric_limits< int >::min(), std::numeric_limits< int >::min() );
};

/// Operator overload for << to enable writing the string representation of \p i_value into an output
/// stream \p o_outputStream.
///
/// \param o_outputStream the output stream to write into.
/// \param i_value the source composite value type.
///
/// \return the output stream.
inline std::ostream& operator<<( std::ostream& o_outputStream, const Vec2iRange& i_value )
{
    o_outputStream << i_value.GetString();
    return o_outputStream;
}

GM_NS_CLOSE