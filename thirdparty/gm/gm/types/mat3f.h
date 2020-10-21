//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file mat3f.h
/// \ingroup gm_types_vector

#include <gm/gm.h>

#include <cmath>
#include <cstring>
#include <sstream>

#include <gm/base/almost.h>
#include <gm/base/diagnostic.h>

GM_NS_OPEN

/// \class Mat3f
/// \ingroup gm_types_vector
///
/// Class definition of a matrix with 9 float elements.
class Mat3f final
{
public:
    /// \typedef ElementType
    ///
    /// Convenience type definition of \ref Mat3f's elements.
    using ElementType = float;

    // --------------------------------------------------------------------- //
    /// \name Construction
    // --------------------------------------------------------------------- //

    /// Default constructor, initializing all of the element values to 0.
    GM_HOST_DEVICE constexpr inline Mat3f() = default;

    /// Element-wise constructor.
    GM_HOST_DEVICE explicit constexpr inline Mat3f( const float& i_element0,
                                                    const float& i_element1,
                                                    const float& i_element2,
                                                    const float& i_element3,
                                                    const float& i_element4,
                                                    const float& i_element5,
                                                    const float& i_element6,
                                                    const float& i_element7,
                                                    const float& i_element8 )
        : m_elements{i_element0,
                     i_element1,
                     i_element2,
                     i_element3,
                     i_element4,
                     i_element5,
                     i_element6,
                     i_element7,
                     i_element8}
    {
        GM_ASSERT( !HasNaNs() );
    }

    // --------------------------------------------------------------------- //
    /// \name Indexed element access
    // --------------------------------------------------------------------- //

    /// Indexed element write access.
    ///
    /// \param i_index index of the element.
    ///
    /// \pre \p i_index must be less than 9.
    ///
    /// \return mutable element value.
    GM_HOST_DEVICE inline float& operator[]( size_t i_index )
    {
        GM_ASSERT( !HasNaNs() );
        GM_ASSERT( i_index < 9 );
        return m_elements[ i_index ];
    }

    /// Indexed element read access.
    ///
    /// \param i_index index of the element.
    ///
    /// \pre \p i_index must be less than 9.
    ///
    /// \return immutable element value.
    GM_HOST_DEVICE inline const float& operator[]( size_t i_index ) const
    {
        GM_ASSERT( !HasNaNs() );
        GM_ASSERT( i_index < 9 );
        return m_elements[ i_index ];
    }

    // --------------------------------------------------------------------- //
    /// \name Matrix row column indexed element access
    // --------------------------------------------------------------------- //

    /// Matrix element read-access.
    ///
    /// \param i_row Row index.
    /// \param i_column Column index.
    ///
    /// \pre \p i_row must be less than 3.
    /// \pre \p i_column must be less than 3.
    ///
    /// \return Element value.
    GM_HOST_DEVICE inline const float& operator()( size_t i_row, size_t i_column ) const
    {
        GM_ASSERT( !HasNaNs() );
        GM_ASSERT( i_row < 3 );
        GM_ASSERT( i_column < 3 );
        return m_elements[ i_row * 3 + i_column ];
    }

    /// Matrix element write-access.
    ///
    /// \param i_row Row index.
    /// \param i_column Column index.
    ///
    /// \pre \p i_row must be less than 3.
    /// \pre \p i_column must be less than 3.
    ///
    /// \return Element value.
    GM_HOST_DEVICE inline float& operator()( size_t i_row, size_t i_column )
    {
        GM_ASSERT( !HasNaNs() );
        GM_ASSERT( i_row < 3 );
        GM_ASSERT( i_column < 3 );
        return m_elements[ i_row * 3 + i_column ];
    }

    // --------------------------------------------------------------------- //
    /// \name Matrix identity element
    // --------------------------------------------------------------------- //

    /// Get the identity element for this matrix type.
    ///
    /// \return The identity element.
    GM_HOST_DEVICE static constexpr inline Mat3f Identity()
    {
        return Mat3f( 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f );
    }

    // --------------------------------------------------------------------- //
    /// \name Arithmetic operators
    // --------------------------------------------------------------------- //

    /// Element-wise vector addition.
    ///
    /// Corresponding elements of the current vector and \p i_vector are added to form a new vector.
    ///
    /// \return the new vector.
    GM_HOST_DEVICE inline Mat3f operator+( const Mat3f& i_vector ) const
    {
        GM_ASSERT( !HasNaNs() );
        return Mat3f( m_elements[ 0 ] + i_vector.m_elements[ 0 ],
                      m_elements[ 1 ] + i_vector.m_elements[ 1 ],
                      m_elements[ 2 ] + i_vector.m_elements[ 2 ],
                      m_elements[ 3 ] + i_vector.m_elements[ 3 ],
                      m_elements[ 4 ] + i_vector.m_elements[ 4 ],
                      m_elements[ 5 ] + i_vector.m_elements[ 5 ],
                      m_elements[ 6 ] + i_vector.m_elements[ 6 ],
                      m_elements[ 7 ] + i_vector.m_elements[ 7 ],
                      m_elements[ 8 ] + i_vector.m_elements[ 8 ] );
    }

    /// Element-wise vector addition assignment.
    GM_HOST_DEVICE inline Mat3f& operator+=( const Mat3f& i_vector )
    {
        GM_ASSERT( !HasNaNs() );
        m_elements[ 0 ] += i_vector.m_elements[ 0 ];
        m_elements[ 1 ] += i_vector.m_elements[ 1 ];
        m_elements[ 2 ] += i_vector.m_elements[ 2 ];
        m_elements[ 3 ] += i_vector.m_elements[ 3 ];
        m_elements[ 4 ] += i_vector.m_elements[ 4 ];
        m_elements[ 5 ] += i_vector.m_elements[ 5 ];
        m_elements[ 6 ] += i_vector.m_elements[ 6 ];
        m_elements[ 7 ] += i_vector.m_elements[ 7 ];
        m_elements[ 8 ] += i_vector.m_elements[ 8 ];
        return *this;
    }

    /// Vector subtraction.
    GM_HOST_DEVICE inline Mat3f operator-( const Mat3f& i_vector ) const
    {
        GM_ASSERT( !HasNaNs() );
        return Mat3f( m_elements[ 0 ] - i_vector.m_elements[ 0 ],
                      m_elements[ 1 ] - i_vector.m_elements[ 1 ],
                      m_elements[ 2 ] - i_vector.m_elements[ 2 ],
                      m_elements[ 3 ] - i_vector.m_elements[ 3 ],
                      m_elements[ 4 ] - i_vector.m_elements[ 4 ],
                      m_elements[ 5 ] - i_vector.m_elements[ 5 ],
                      m_elements[ 6 ] - i_vector.m_elements[ 6 ],
                      m_elements[ 7 ] - i_vector.m_elements[ 7 ],
                      m_elements[ 8 ] - i_vector.m_elements[ 8 ] );
    }

    /// Vector subtraction assignment.
    GM_HOST_DEVICE inline Mat3f& operator-=( const Mat3f& i_vector )
    {
        GM_ASSERT( !HasNaNs() );
        m_elements[ 0 ] -= i_vector.m_elements[ 0 ];
        m_elements[ 1 ] -= i_vector.m_elements[ 1 ];
        m_elements[ 2 ] -= i_vector.m_elements[ 2 ];
        m_elements[ 3 ] -= i_vector.m_elements[ 3 ];
        m_elements[ 4 ] -= i_vector.m_elements[ 4 ];
        m_elements[ 5 ] -= i_vector.m_elements[ 5 ];
        m_elements[ 6 ] -= i_vector.m_elements[ 6 ];
        m_elements[ 7 ] -= i_vector.m_elements[ 7 ];
        m_elements[ 8 ] -= i_vector.m_elements[ 8 ];
        return *this;
    }

    /// Scalar multiplication assignment.
    GM_HOST_DEVICE inline Mat3f& operator*=( const float& i_scalar )
    {
        GM_ASSERT( !HasNaNs() );
        m_elements[ 0 ] *= i_scalar;
        m_elements[ 1 ] *= i_scalar;
        m_elements[ 2 ] *= i_scalar;
        m_elements[ 3 ] *= i_scalar;
        m_elements[ 4 ] *= i_scalar;
        m_elements[ 5 ] *= i_scalar;
        m_elements[ 6 ] *= i_scalar;
        m_elements[ 7 ] *= i_scalar;
        m_elements[ 8 ] *= i_scalar;
        return *this;
    }

    /// Scalar division.
    GM_HOST_DEVICE inline Mat3f operator/( const float& i_scalar ) const
    {
        GM_ASSERT( !HasNaNs() );
        GM_ASSERT( i_scalar != 0.0f );
        float reciprocal = 1.0f / i_scalar;
        return Mat3f( m_elements[ 0 ] * reciprocal,
                      m_elements[ 1 ] * reciprocal,
                      m_elements[ 2 ] * reciprocal,
                      m_elements[ 3 ] * reciprocal,
                      m_elements[ 4 ] * reciprocal,
                      m_elements[ 5 ] * reciprocal,
                      m_elements[ 6 ] * reciprocal,
                      m_elements[ 7 ] * reciprocal,
                      m_elements[ 8 ] * reciprocal );
    }

    /// Scalar division assignment.
    GM_HOST_DEVICE inline Mat3f& operator/=( const float& i_scalar )
    {
        GM_ASSERT( !HasNaNs() );
        GM_ASSERT( i_scalar != 0.0f );
        float reciprocal = 1.0f / i_scalar;
        m_elements[ 0 ] *= reciprocal;
        m_elements[ 1 ] *= reciprocal;
        m_elements[ 2 ] *= reciprocal;
        m_elements[ 3 ] *= reciprocal;
        m_elements[ 4 ] *= reciprocal;
        m_elements[ 5 ] *= reciprocal;
        m_elements[ 6 ] *= reciprocal;
        m_elements[ 7 ] *= reciprocal;
        m_elements[ 8 ] *= reciprocal;
        return *this;
    }

    /// Unary negation.
    GM_HOST_DEVICE inline Mat3f operator-() const
    {
        GM_ASSERT( !HasNaNs() );
        return Mat3f( -m_elements[ 0 ],
                      -m_elements[ 1 ],
                      -m_elements[ 2 ],
                      -m_elements[ 3 ],
                      -m_elements[ 4 ],
                      -m_elements[ 5 ],
                      -m_elements[ 6 ],
                      -m_elements[ 7 ],
                      -m_elements[ 8 ] );
    }

    // --------------------------------------------------------------------- //
    /// \name Comparison operators
    // --------------------------------------------------------------------- //

    /// Comparison operator
    GM_HOST_DEVICE inline bool operator==( const Mat3f& i_vector ) const
    {
        return AlmostEqual( m_elements[ 0 ], i_vector.m_elements[ 0 ] ) &&
               AlmostEqual( m_elements[ 1 ], i_vector.m_elements[ 1 ] ) &&
               AlmostEqual( m_elements[ 2 ], i_vector.m_elements[ 2 ] ) &&
               AlmostEqual( m_elements[ 3 ], i_vector.m_elements[ 3 ] ) &&
               AlmostEqual( m_elements[ 4 ], i_vector.m_elements[ 4 ] ) &&
               AlmostEqual( m_elements[ 5 ], i_vector.m_elements[ 5 ] ) &&
               AlmostEqual( m_elements[ 6 ], i_vector.m_elements[ 6 ] ) &&
               AlmostEqual( m_elements[ 7 ], i_vector.m_elements[ 7 ] ) &&
               AlmostEqual( m_elements[ 8 ], i_vector.m_elements[ 8 ] );
    }

    /// Not equal operator
    GM_HOST_DEVICE inline bool operator!=( const Mat3f& i_vector ) const
    {
        return !( ( *this ) == i_vector );
    }

    // --------------------------------------------------------------------- //
    /// \name Shape
    // --------------------------------------------------------------------- //

    /// Get the number of elements in this vector.
    GM_HOST_DEVICE inline static size_t GetElementSize()
    {
        return 9;
    }

    // --------------------------------------------------------------------- //
    /// \name Debug
    // --------------------------------------------------------------------- //

    /// Are any of the element values NaNs?
    GM_HOST_DEVICE inline bool HasNaNs() const
    {
        return std::isnan( m_elements[ 0 ] ) || std::isnan( m_elements[ 1 ] ) || std::isnan( m_elements[ 2 ] ) ||
               std::isnan( m_elements[ 3 ] ) || std::isnan( m_elements[ 4 ] ) || std::isnan( m_elements[ 5 ] ) ||
               std::isnan( m_elements[ 6 ] ) || std::isnan( m_elements[ 7 ] ) || std::isnan( m_elements[ 8 ] );
    }

    /// Get the string representation.  For debugging purposes.
    ///
    /// \param i_classPrefix optional string to prefix class tokens.
    ///
    /// \return descriptive string representing this type instance.
    inline std::string GetString( const std::string& i_classPrefix = std::string() ) const
    {
        std::stringstream ss;
        ss << i_classPrefix << "Mat3f( ";
        ss << "\n    ";
        ss << m_elements[ 0 ];
        ss << ", ";
        ss << m_elements[ 1 ];
        ss << ", ";
        ss << m_elements[ 2 ];
        ss << ", ";
        ss << "\n    ";
        ss << m_elements[ 3 ];
        ss << ", ";
        ss << m_elements[ 4 ];
        ss << ", ";
        ss << m_elements[ 5 ];
        ss << ", ";
        ss << "\n    ";
        ss << m_elements[ 6 ];
        ss << ", ";
        ss << m_elements[ 7 ];
        ss << ", ";
        ss << m_elements[ 8 ];
        ss << "\n)";
        return ss.str();
    }

private:
    float m_elements[ 9 ] = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f};
};

/// Vector-scalar multiplication.
GM_HOST_DEVICE inline Mat3f operator*( const Mat3f& i_vector, const float& i_scalar )
{
    GM_ASSERT( !i_vector.HasNaNs() );
    return Mat3f( i_vector[ 0 ] * i_scalar,
                  i_vector[ 1 ] * i_scalar,
                  i_vector[ 2 ] * i_scalar,
                  i_vector[ 3 ] * i_scalar,
                  i_vector[ 4 ] * i_scalar,
                  i_vector[ 5 ] * i_scalar,
                  i_vector[ 6 ] * i_scalar,
                  i_vector[ 7 ] * i_scalar,
                  i_vector[ 8 ] * i_scalar );
}

/// Scalar-vector multiplication.
GM_HOST_DEVICE inline Mat3f operator*( const float& i_scalar, const Mat3f& i_vector )
{
    GM_ASSERT( !i_vector.HasNaNs() );
    return Mat3f( i_vector[ 0 ] * i_scalar,
                  i_vector[ 1 ] * i_scalar,
                  i_vector[ 2 ] * i_scalar,
                  i_vector[ 3 ] * i_scalar,
                  i_vector[ 4 ] * i_scalar,
                  i_vector[ 5 ] * i_scalar,
                  i_vector[ 6 ] * i_scalar,
                  i_vector[ 7 ] * i_scalar,
                  i_vector[ 8 ] * i_scalar );
}

/// Operator overload for << to enable writing the string representation of \p i_vector into an output
/// stream \p o_outputStream.
///
/// \param o_outputStream the output stream to write into.
/// \param i_vector the source vector value type.
///
/// \return the output stream.
inline std::ostream& operator<<( std::ostream& o_outputStream, const Mat3f& i_vector )
{
    o_outputStream << i_vector.GetString();
    return o_outputStream;
}

GM_NS_CLOSE