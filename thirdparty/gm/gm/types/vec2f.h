//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file vec2f.h
/// \ingroup gm_types_vector

#include <gm/gm.h>

#include <cmath>
#include <cstring>
#include <sstream>

#include <gm/base/almost.h>
#include <gm/base/assert.h>

GM_NS_OPEN

/// \class Vec2f
/// \ingroup gm_types_vector
///
/// Class definition of a vector with 2 float elements.
class Vec2f final
{
public:
    /// \typedef ElementType
    ///
    /// Convenience type definition of \ref Vec2f's elements.
    using ElementType = float;

    // --------------------------------------------------------------------- //
    /// \name Construction
    // --------------------------------------------------------------------- //

    /// Default constructor, initializing all of the element values to 0.
    GM_HOST_DEVICE constexpr inline Vec2f() = default;

    /// Element-wise constructor.
    GM_HOST_DEVICE explicit constexpr inline Vec2f( const float& i_element0, const float& i_element1 )
        : m_elements{i_element0, i_element1}
    {
        GM_ASSERT( !HasNans() );
    }

    // --------------------------------------------------------------------- //
    /// \name Indexed element access
    // --------------------------------------------------------------------- //

    /// Indexed element write access.
    ///
    /// \param i_index index of the element.
    ///
    /// \pre \p i_index must be less than 2.
    ///
    /// \return mutable element value.
    GM_HOST_DEVICE inline float& operator[]( size_t i_index )
    {
        GM_ASSERT( !HasNans() );
        GM_ASSERT( i_index < 2 );
        return m_elements[ i_index ];
    }

    /// Indexed element read access.
    ///
    /// \param i_index index of the element.
    ///
    /// \pre \p i_index must be less than 2.
    ///
    /// \return immutable element value.
    GM_HOST_DEVICE inline const float& operator[]( size_t i_index ) const
    {
        GM_ASSERT( !HasNans() );
        GM_ASSERT( i_index < 2 );
        return m_elements[ i_index ];
    }

    // --------------------------------------------------------------------- //
    /// \name Named element access.
    // --------------------------------------------------------------------- //

    /// Convenience named const accessor for the element at index 0.
    ///
    /// \return Const reference to the element at index 0.
    GM_HOST_DEVICE inline const float& X() const
    {
        GM_ASSERT( !HasNans() );
        return m_elements[ 0 ];
    }

    /// Convenience named mutable accessor for the element at index
    ///
    /// \return Mutable reference to the element at index 0.
    GM_HOST_DEVICE inline float& X()
    {
        GM_ASSERT( !HasNans() );
        return m_elements[ 0 ];
    }
    /// Convenience named const accessor for the element at index 1.
    ///
    /// \return Const reference to the element at index 1.
    GM_HOST_DEVICE inline const float& Y() const
    {
        GM_ASSERT( !HasNans() );
        return m_elements[ 1 ];
    }

    /// Convenience named mutable accessor for the element at index
    ///
    /// \return Mutable reference to the element at index 1.
    GM_HOST_DEVICE inline float& Y()
    {
        GM_ASSERT( !HasNans() );
        return m_elements[ 1 ];
    }

    // --------------------------------------------------------------------- //
    /// \name Arithmetic operators
    // --------------------------------------------------------------------- //

    /// Element-wise vector addition.
    ///
    /// Corresponding elements of the current vector and \p i_vector are added to form a new vector.
    ///
    /// \return the new vector.
    GM_HOST_DEVICE inline Vec2f operator+( const Vec2f& i_vector ) const
    {
        GM_ASSERT( !HasNans() );
        return Vec2f( m_elements[ 0 ] + i_vector.m_elements[ 0 ], m_elements[ 1 ] + i_vector.m_elements[ 1 ] );
    }

    /// Element-wise vector addition assignment.
    GM_HOST_DEVICE inline Vec2f& operator+=( const Vec2f& i_vector )
    {
        GM_ASSERT( !HasNans() );
        m_elements[ 0 ] += i_vector.m_elements[ 0 ];
        m_elements[ 1 ] += i_vector.m_elements[ 1 ];
        return *this;
    }

    /// Vector subtraction.
    GM_HOST_DEVICE inline Vec2f operator-( const Vec2f& i_vector ) const
    {
        GM_ASSERT( !HasNans() );
        return Vec2f( m_elements[ 0 ] - i_vector.m_elements[ 0 ], m_elements[ 1 ] - i_vector.m_elements[ 1 ] );
    }

    /// Vector subtraction assignment.
    GM_HOST_DEVICE inline Vec2f& operator-=( const Vec2f& i_vector )
    {
        GM_ASSERT( !HasNans() );
        m_elements[ 0 ] -= i_vector.m_elements[ 0 ];
        m_elements[ 1 ] -= i_vector.m_elements[ 1 ];
        return *this;
    }

    /// Scalar multiplication assignment.
    GM_HOST_DEVICE inline Vec2f& operator*=( const float& i_scalar )
    {
        GM_ASSERT( !HasNans() );
        m_elements[ 0 ] *= i_scalar;
        m_elements[ 1 ] *= i_scalar;
        return *this;
    }

    /// Scalar division.
    GM_HOST_DEVICE inline Vec2f operator/( const float& i_scalar ) const
    {
        GM_ASSERT( !HasNans() );
        GM_ASSERT( i_scalar != 0.0f );
        return Vec2f( m_elements[ 0 ] / i_scalar, m_elements[ 1 ] / i_scalar );
    }

    /// Scalar division assignment.
    GM_HOST_DEVICE inline Vec2f& operator/=( const float& i_scalar )
    {
        GM_ASSERT( !HasNans() );
        GM_ASSERT( i_scalar != 0.0f );
        m_elements[ 0 ] /= i_scalar;
        m_elements[ 1 ] /= i_scalar;
        return *this;
    }

    /// Unary negation.
    GM_HOST_DEVICE inline Vec2f operator-() const
    {
        GM_ASSERT( !HasNans() );
        return Vec2f( -m_elements[ 0 ], -m_elements[ 1 ] );
    }

    // --------------------------------------------------------------------- //
    /// \name Comparison operators
    // --------------------------------------------------------------------- //

    /// Comparison operator
    GM_HOST_DEVICE inline bool operator==( const Vec2f& i_vector ) const
    {
        return AlmostEqual( m_elements[ 0 ], i_vector.m_elements[ 0 ] ) &&
               AlmostEqual( m_elements[ 1 ], i_vector.m_elements[ 1 ] );
    }

    /// Not equal operator
    GM_HOST_DEVICE inline bool operator!=( const Vec2f& i_vector ) const
    {
        return !( ( *this ) == i_vector );
    }

    // --------------------------------------------------------------------- //
    /// \name Shape
    // --------------------------------------------------------------------- //

    /// Get the number of elements in this vector.
    GM_HOST_DEVICE inline static size_t GetElementSize()
    {
        return 2;
    }

    // --------------------------------------------------------------------- //
    /// \name Debug
    // --------------------------------------------------------------------- //

    /// Are any of the element values NaNs?
    GM_HOST_DEVICE inline bool HasNans() const
    {
        return std::isnan( m_elements[ 0 ] ) || std::isnan( m_elements[ 1 ] );
    }

    /// Get the string representation.  For debugging purposes.
    ///
    /// \param i_classPrefix optional string to prefix class tokens.
    ///
    /// \return descriptive string representing this type instance.
    inline std::string GetString( const std::string& i_classPrefix = std::string() ) const
    {
        std::stringstream ss;
        ss << i_classPrefix << "Vec2f( ";
        ss << m_elements[ 0 ];
        ss << ", ";
        ss << m_elements[ 1 ];
        ss << " )";
        return ss.str();
    }

private:
    float m_elements[ 2 ] = {0.0f, 0.0f};
};

/// Vector-scalar multiplication.
GM_HOST_DEVICE inline Vec2f operator*( const Vec2f& i_vector, const float& i_scalar )
{
    GM_ASSERT( !i_vector.HasNans() );
    return Vec2f( i_vector[ 0 ] * i_scalar, i_vector[ 1 ] * i_scalar );
}

/// Scalar-vector multiplication.
GM_HOST_DEVICE inline Vec2f operator*( const float& i_scalar, const Vec2f& i_vector )
{
    GM_ASSERT( !i_vector.HasNans() );
    return Vec2f( i_vector[ 0 ] * i_scalar, i_vector[ 1 ] * i_scalar );
}

/// Operator overload for << to enable writing the string representation of \p i_vector into an output
/// stream \p o_outputStream.
///
/// \param o_outputStream the output stream to write into.
/// \param i_vector the source vector value type.
///
/// \return the output stream.
inline std::ostream& operator<<( std::ostream& o_outputStream, const Vec2f& i_vector )
{
    o_outputStream << i_vector.GetString();
    return o_outputStream;
}

GM_NS_CLOSE