//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/min.h
/// \ingroup gm_functions_basic
///
/// Find the minimum of two input values.
/// If the value type is a vector, the minimum will be computed per-element.

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

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline float Min( const float& i_valueA, const float& i_valueB )
{
    return std::min( i_valueA, i_valueB );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline int Min( const int& i_valueA, const int& i_valueB )
{
    return std::min( i_valueA, i_valueB );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline bool Min( const bool& i_valueA, const bool& i_valueB )
{
    return std::min( i_valueA, i_valueB );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline Mat3f Min( const Mat3f& i_valueA, const Mat3f& i_valueB )
{
    return Mat3f( std::min( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::min( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::min( i_valueA[ 2 ], i_valueB[ 2 ] ),
                  std::min( i_valueA[ 3 ], i_valueB[ 3 ] ),
                  std::min( i_valueA[ 4 ], i_valueB[ 4 ] ),
                  std::min( i_valueA[ 5 ], i_valueB[ 5 ] ),
                  std::min( i_valueA[ 6 ], i_valueB[ 6 ] ),
                  std::min( i_valueA[ 7 ], i_valueB[ 7 ] ),
                  std::min( i_valueA[ 8 ], i_valueB[ 8 ] ) );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline Mat4f Min( const Mat4f& i_valueA, const Mat4f& i_valueB )
{
    return Mat4f( std::min( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::min( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::min( i_valueA[ 2 ], i_valueB[ 2 ] ),
                  std::min( i_valueA[ 3 ], i_valueB[ 3 ] ),
                  std::min( i_valueA[ 4 ], i_valueB[ 4 ] ),
                  std::min( i_valueA[ 5 ], i_valueB[ 5 ] ),
                  std::min( i_valueA[ 6 ], i_valueB[ 6 ] ),
                  std::min( i_valueA[ 7 ], i_valueB[ 7 ] ),
                  std::min( i_valueA[ 8 ], i_valueB[ 8 ] ),
                  std::min( i_valueA[ 9 ], i_valueB[ 9 ] ),
                  std::min( i_valueA[ 10 ], i_valueB[ 10 ] ),
                  std::min( i_valueA[ 11 ], i_valueB[ 11 ] ),
                  std::min( i_valueA[ 12 ], i_valueB[ 12 ] ),
                  std::min( i_valueA[ 13 ], i_valueB[ 13 ] ),
                  std::min( i_valueA[ 14 ], i_valueB[ 14 ] ),
                  std::min( i_valueA[ 15 ], i_valueB[ 15 ] ) );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline Vec2f Min( const Vec2f& i_valueA, const Vec2f& i_valueB )
{
    return Vec2f( std::min( i_valueA[ 0 ], i_valueB[ 0 ] ), std::min( i_valueA[ 1 ], i_valueB[ 1 ] ) );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline Vec3f Min( const Vec3f& i_valueA, const Vec3f& i_valueB )
{
    return Vec3f( std::min( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::min( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::min( i_valueA[ 2 ], i_valueB[ 2 ] ) );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline Vec4f Min( const Vec4f& i_valueA, const Vec4f& i_valueB )
{
    return Vec4f( std::min( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::min( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::min( i_valueA[ 2 ], i_valueB[ 2 ] ),
                  std::min( i_valueA[ 3 ], i_valueB[ 3 ] ) );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline Vec2i Min( const Vec2i& i_valueA, const Vec2i& i_valueB )
{
    return Vec2i( std::min( i_valueA[ 0 ], i_valueB[ 0 ] ), std::min( i_valueA[ 1 ], i_valueB[ 1 ] ) );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline Vec3i Min( const Vec3i& i_valueA, const Vec3i& i_valueB )
{
    return Vec3i( std::min( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::min( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::min( i_valueA[ 2 ], i_valueB[ 2 ] ) );
}

/// Find the minimum from the inputs \p i_valueA and \p i_valueB.
/// \ingroup gm_functions_basic
///
/// \param i_valueA The first value to compare.
/// \param i_valueB The second value to compare.
///
/// \return The minimum of the two inputs.
GM_HOST_DEVICE inline Vec4i Min( const Vec4i& i_valueA, const Vec4i& i_valueB )
{
    return Vec4i( std::min( i_valueA[ 0 ], i_valueB[ 0 ] ),
                  std::min( i_valueA[ 1 ], i_valueB[ 1 ] ),
                  std::min( i_valueA[ 2 ], i_valueB[ 2 ] ),
                  std::min( i_valueA[ 3 ], i_valueB[ 3 ] ) );
}

GM_NS_CLOSE