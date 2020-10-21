//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/max.h
/// \ingroup gm_functions_basic
///
/// Find the maximum of two input values.
///
/// If the value type is a vector, the operation will be performed on the corresponding elements.

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec2i.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec3i.h>
#include <gm/types/vec4f.h>
#include <gm/types/vec4i.h>

#include <algorithm>

GM_NS_OPEN

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline float Max( const float& i_valueA, const float& i_valueB )
{
    return std::max( i_valueA, i_valueB );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline int Max( const int& i_valueA, const int& i_valueB )
{
    return std::max( i_valueA, i_valueB );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline bool Max( const bool& i_valueA, const bool& i_valueB )
{
    return std::max( i_valueA, i_valueB );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline Vec2f Max( const Vec2f& i_valueA, const Vec2f& i_valueB )
{
    return Vec2f( std::max( i_valueA[ 0 ], i_valueB[ 0 ] ), std::max( i_valueA[ 1 ], i_valueB[ 1 ] ) );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline Vec3f Max( const Vec3f& i_valueA, const Vec3f& i_valueB )
{
    return Vec3f( std::max( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::max( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::max( i_valueA[ 2 ], i_valueB[ 2 ] ) );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline Vec4f Max( const Vec4f& i_valueA, const Vec4f& i_valueB )
{
    return Vec4f( std::max( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::max( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::max( i_valueA[ 2 ], i_valueB[ 2 ] ),
                  std::max( i_valueA[ 3 ], i_valueB[ 3 ] ) );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline Vec2i Max( const Vec2i& i_valueA, const Vec2i& i_valueB )
{
    return Vec2i( std::max( i_valueA[ 0 ], i_valueB[ 0 ] ), std::max( i_valueA[ 1 ], i_valueB[ 1 ] ) );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline Vec3i Max( const Vec3i& i_valueA, const Vec3i& i_valueB )
{
    return Vec3i( std::max( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::max( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::max( i_valueA[ 2 ], i_valueB[ 2 ] ) );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline Vec4i Max( const Vec4i& i_valueA, const Vec4i& i_valueB )
{
    return Vec4i( std::max( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::max( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::max( i_valueA[ 2 ], i_valueB[ 2 ] ),
                  std::max( i_valueA[ 3 ], i_valueB[ 3 ] ) );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline Mat3f Max( const Mat3f& i_valueA, const Mat3f& i_valueB )
{
    return Mat3f( std::max( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::max( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::max( i_valueA[ 2 ], i_valueB[ 2 ] ),
                  std::max( i_valueA[ 3 ], i_valueB[ 3 ] ),
                  std::max( i_valueA[ 4 ], i_valueB[ 4 ] ),
                  std::max( i_valueA[ 5 ], i_valueB[ 5 ] ),
                  std::max( i_valueA[ 6 ], i_valueB[ 6 ] ),
                  std::max( i_valueA[ 7 ], i_valueB[ 7 ] ),
                  std::max( i_valueA[ 8 ], i_valueB[ 8 ] ) );
}

/// Find the maximum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The maximum of the two inputs.
GM_HOST_DEVICE inline Mat4f Max( const Mat4f& i_valueA, const Mat4f& i_valueB )
{
    return Mat4f( std::max( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::max( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::max( i_valueA[ 2 ], i_valueB[ 2 ] ),
                  std::max( i_valueA[ 3 ], i_valueB[ 3 ] ),
                  std::max( i_valueA[ 4 ], i_valueB[ 4 ] ),
                  std::max( i_valueA[ 5 ], i_valueB[ 5 ] ),
                  std::max( i_valueA[ 6 ], i_valueB[ 6 ] ),
                  std::max( i_valueA[ 7 ], i_valueB[ 7 ] ),
                  std::max( i_valueA[ 8 ], i_valueB[ 8 ] ),
                  std::max( i_valueA[ 9 ], i_valueB[ 9 ] ),
                  std::max( i_valueA[ 10 ], i_valueB[ 10 ] ),
                  std::max( i_valueA[ 11 ], i_valueB[ 11 ] ),
                  std::max( i_valueA[ 12 ], i_valueB[ 12 ] ),
                  std::max( i_valueA[ 13 ], i_valueB[ 13 ] ),
                  std::max( i_valueA[ 14 ], i_valueB[ 14 ] ),
                  std::max( i_valueA[ 15 ], i_valueB[ 15 ] ) );
}

GM_NS_CLOSE