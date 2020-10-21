//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file vec4i.h
/// \ingroup gm_types_vector

#include <gm/gm.h>

#include <cmath>
#include <cstring>
#include <sstream>

#include <gm/base/diagnostic.h>

GM_NS_OPEN

/// \class Vec4i
/// \ingroup gm_types_vector
///
/// Class definition of a vector with 4 int elements.
class Vec4i final
{
public:
    /// \typedef ElementType
    ///
    /// Convenience type definition of \ref Vec4i's elements.
    using ElementType = int;

    // --------------------------------------------------------------------- //
    /// \name Construction
    // --------------------------------------------------------------------- //

    /// Default constructor, initializing all of the element values to 0.
    GM_HOST_DEVICE constexpr inline Vec4i() = default;

    /// Element-wise constructor.
    GM_HOST_DEVICE explicit constexpr inline Vec4i( const int& i_element0,
                                                    const int& i_element1,
                                                    const int& i_element2,
                                                    const int& i_element3 )
        : m_elements{i_element0, i_element1, i_element2, i_element3}
    {
    }

    // --------------------------------------------------------------------- //
    /// \name Indexed element access
    // --------------------------------------------------------------------- //

    /// Indexed element write access.
    ///
    /// \param i_index index of the element.
    ///
    /// \pre \p i_index must be less than 4.
    ///
    /// \return mutable element value.
    GM_HOST_DEVICE inline int& operator[]( size_t i_index )
    {
        GM_ASSERT( i_index < 4 );
        return m_elements[ i_index ];
    }

    /// Indexed element read access.
    ///
    /// \param i_index index of the element.
    ///
    /// \pre \p i_index must be less than 4.
    ///
    /// \return immutable element value.
    GM_HOST_DEVICE inline const int& operator[]( size_t i_index ) const
    {
        GM_ASSERT( i_index < 4 );
        return m_elements[ i_index ];
    }

    // --------------------------------------------------------------------- //
    /// \name Named element access.
    // --------------------------------------------------------------------- //

    /// Convenience named const accessor for the element at index 0.
    ///
    /// \return Const reference to the element at index 0.
    GM_HOST_DEVICE inline const int& X() const
    {
        return m_elements[ 0 ];
    }

    /// Convenience named mutable accessor for the element at index
    ///
    /// \return Mutable reference to the element at index 0.
    GM_HOST_DEVICE inline int& X()
    {
        return m_elements[ 0 ];
    }
    /// Convenience named const accessor for the element at index 1.
    ///
    /// \return Const reference to the element at index 1.
    GM_HOST_DEVICE inline const int& Y() const
    {
        return m_elements[ 1 ];
    }

    /// Convenience named mutable accessor for the element at index
    ///
    /// \return Mutable reference to the element at index 1.
    GM_HOST_DEVICE inline int& Y()
    {
        return m_elements[ 1 ];
    }
    /// Convenience named const accessor for the element at index 2.
    ///
    /// \return Const reference to the element at index 2.
    GM_HOST_DEVICE inline const int& Z() const
    {
        return m_elements[ 2 ];
    }

    /// Convenience named mutable accessor for the element at index
    ///
    /// \return Mutable reference to the element at index 2.
    GM_HOST_DEVICE inline int& Z()
    {
        return m_elements[ 2 ];
    }
    /// Convenience named const accessor for the element at index 3.
    ///
    /// \return Const reference to the element at index 3.
    GM_HOST_DEVICE inline const int& W() const
    {
        return m_elements[ 3 ];
    }

    /// Convenience named mutable accessor for the element at index
    ///
    /// \return Mutable reference to the element at index 3.
    GM_HOST_DEVICE inline int& W()
    {
        return m_elements[ 3 ];
    }

    // --------------------------------------------------------------------- //
    /// \name Arithmetic operators
    // --------------------------------------------------------------------- //

    /// Element-wise vector addition.
    ///
    /// Corresponding elements of the current vector and \p i_vector are added to form a new vector.
    ///
    /// \return the new vector.
    GM_HOST_DEVICE inline Vec4i operator+( const Vec4i& i_vector ) const
    {
        return Vec4i( m_elements[ 0 ] + i_vector.m_elements[ 0 ],
                      m_elements[ 1 ] + i_vector.m_elements[ 1 ],
                      m_elements[ 2 ] + i_vector.m_elements[ 2 ],
                      m_elements[ 3 ] + i_vector.m_elements[ 3 ] );
    }

    /// Element-wise vector addition assignment.
    GM_HOST_DEVICE inline Vec4i& operator+=( const Vec4i& i_vector )
    {
        m_elements[ 0 ] += i_vector.m_elements[ 0 ];
        m_elements[ 1 ] += i_vector.m_elements[ 1 ];
        m_elements[ 2 ] += i_vector.m_elements[ 2 ];
        m_elements[ 3 ] += i_vector.m_elements[ 3 ];
        return *this;
    }

    /// Vector subtraction.
    GM_HOST_DEVICE inline Vec4i operator-( const Vec4i& i_vector ) const
    {
        return Vec4i( m_elements[ 0 ] - i_vector.m_elements[ 0 ],
                      m_elements[ 1 ] - i_vector.m_elements[ 1 ],
                      m_elements[ 2 ] - i_vector.m_elements[ 2 ],
                      m_elements[ 3 ] - i_vector.m_elements[ 3 ] );
    }

    /// Vector subtraction assignment.
    GM_HOST_DEVICE inline Vec4i& operator-=( const Vec4i& i_vector )
    {
        m_elements[ 0 ] -= i_vector.m_elements[ 0 ];
        m_elements[ 1 ] -= i_vector.m_elements[ 1 ];
        m_elements[ 2 ] -= i_vector.m_elements[ 2 ];
        m_elements[ 3 ] -= i_vector.m_elements[ 3 ];
        return *this;
    }

    /// Scalar multiplication assignment.
    GM_HOST_DEVICE inline Vec4i& operator*=( const int& i_scalar )
    {
        m_elements[ 0 ] *= i_scalar;
        m_elements[ 1 ] *= i_scalar;
        m_elements[ 2 ] *= i_scalar;
        m_elements[ 3 ] *= i_scalar;
        return *this;
    }

    /// Scalar division.
    GM_HOST_DEVICE inline Vec4i operator/( const int& i_scalar ) const
    {
        GM_ASSERT( i_scalar != 0 );
        return Vec4i( m_elements[ 0 ] / i_scalar,
                      m_elements[ 1 ] / i_scalar,
                      m_elements[ 2 ] / i_scalar,
                      m_elements[ 3 ] / i_scalar );
    }

    /// Scalar division assignment.
    GM_HOST_DEVICE inline Vec4i& operator/=( const int& i_scalar )
    {
        GM_ASSERT( i_scalar != 0 );
        m_elements[ 0 ] /= i_scalar;
        m_elements[ 1 ] /= i_scalar;
        m_elements[ 2 ] /= i_scalar;
        m_elements[ 3 ] /= i_scalar;
        return *this;
    }

    /// Unary negation.
    GM_HOST_DEVICE inline Vec4i operator-() const
    {
        return Vec4i( -m_elements[ 0 ], -m_elements[ 1 ], -m_elements[ 2 ], -m_elements[ 3 ] );
    }

    // --------------------------------------------------------------------- //
    /// \name Comparison operators
    // --------------------------------------------------------------------- //

    /// Comparison operator
    GM_HOST_DEVICE inline bool operator==( const Vec4i& i_vector ) const
    {
        return m_elements[ 0 ] == i_vector.m_elements[ 0 ] && m_elements[ 1 ] == i_vector.m_elements[ 1 ] &&
               m_elements[ 2 ] == i_vector.m_elements[ 2 ] && m_elements[ 3 ] == i_vector.m_elements[ 3 ];
    }

    /// Not equal operator
    GM_HOST_DEVICE inline bool operator!=( const Vec4i& i_vector ) const
    {
        return !( ( *this ) == i_vector );
    }

    // --------------------------------------------------------------------- //
    /// \name Shape
    // --------------------------------------------------------------------- //

    /// Get the number of elements in this vector.
    GM_HOST_DEVICE inline static size_t GetElementSize()
    {
        return 4;
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
        ss << i_classPrefix << "Vec4i( ";
        ss << m_elements[ 0 ];
        ss << ", ";
        ss << m_elements[ 1 ];
        ss << ", ";
        ss << m_elements[ 2 ];
        ss << ", ";
        ss << m_elements[ 3 ];
        ss << " )";
        return ss.str();
    }

private:
    int m_elements[ 4 ] = {0, 0, 0, 0};
};

/// Vector-scalar multiplication.
GM_HOST_DEVICE inline Vec4i operator*( const Vec4i& i_vector, const int& i_scalar )
{
    return Vec4i( i_vector[ 0 ] * i_scalar,
                  i_vector[ 1 ] * i_scalar,
                  i_vector[ 2 ] * i_scalar,
                  i_vector[ 3 ] * i_scalar );
}

/// Scalar-vector multiplication.
GM_HOST_DEVICE inline Vec4i operator*( const int& i_scalar, const Vec4i& i_vector )
{
    return Vec4i( i_vector[ 0 ] * i_scalar,
                  i_vector[ 1 ] * i_scalar,
                  i_vector[ 2 ] * i_scalar,
                  i_vector[ 3 ] * i_scalar );
}

/// Operator overload for << to enable writing the string representation of \p i_vector into an output
/// stream \p o_outputStream.
///
/// \param o_outputStream the output stream to write into.
/// \param i_vector the source vector value type.
///
/// \return the output stream.
inline std::ostream& operator<<( std::ostream& o_outputStream, const Vec4i& i_vector )
{
    o_outputStream << i_vector.GetString();
    return o_outputStream;
}

GM_NS_CLOSE