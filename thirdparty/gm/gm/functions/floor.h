//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/floor.h
/// \ingroup gm_functions_basic
///
/// Floor the input value, by rounding downwards, returning the largest integral number less than the input.
/// If the value type is a vector, the floor will be performed element-wise.

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <cmath>

GM_NS_OPEN

/// Floor the input \ref float \p i_value and return it.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to floor.
///
/// \return Floored input value.
GM_HOST_DEVICE inline float Floor( const float& i_value )
{
    return std::floor( i_value );
}

/// Floor the input \ref Vec2f \p i_value and return it.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to floor.
///
/// \return Floored input value.
GM_HOST_DEVICE inline Vec2f Floor( const Vec2f& i_value )
{
    return Vec2f( std::floor( i_value[ 0 ] ), std::floor( i_value[ 1 ] ) );
}

/// Floor the input \ref Vec3f \p i_value and return it.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to floor.
///
/// \return Floored input value.
GM_HOST_DEVICE inline Vec3f Floor( const Vec3f& i_value )
{
    return Vec3f( std::floor( i_value[ 0 ] ), std::floor( i_value[ 1 ] ), std::floor( i_value[ 2 ] ) );
}

/// Floor the input \ref Vec4f \p i_value and return it.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to floor.
///
/// \return Floored input value.
GM_HOST_DEVICE inline Vec4f Floor( const Vec4f& i_value )
{
    return Vec4f( std::floor( i_value[ 0 ] ),
                  std::floor( i_value[ 1 ] ),
                  std::floor( i_value[ 2 ] ),
                  std::floor( i_value[ 3 ] ) );
}

/// Floor the input \ref Mat3f \p i_value and return it.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to floor.
///
/// \return Floored input value.
GM_HOST_DEVICE inline Mat3f Floor( const Mat3f& i_value )
{
    return Mat3f( std::floor( i_value[ 0 ] ),
                  std::floor( i_value[ 1 ] ),
                  std::floor( i_value[ 2 ] ),
                  std::floor( i_value[ 3 ] ),
                  std::floor( i_value[ 4 ] ),
                  std::floor( i_value[ 5 ] ),
                  std::floor( i_value[ 6 ] ),
                  std::floor( i_value[ 7 ] ),
                  std::floor( i_value[ 8 ] ) );
}

/// Floor the input \ref Mat4f \p i_value and return it.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to floor.
///
/// \return Floored input value.
GM_HOST_DEVICE inline Mat4f Floor( const Mat4f& i_value )
{
    return Mat4f( std::floor( i_value[ 0 ] ),
                  std::floor( i_value[ 1 ] ),
                  std::floor( i_value[ 2 ] ),
                  std::floor( i_value[ 3 ] ),
                  std::floor( i_value[ 4 ] ),
                  std::floor( i_value[ 5 ] ),
                  std::floor( i_value[ 6 ] ),
                  std::floor( i_value[ 7 ] ),
                  std::floor( i_value[ 8 ] ),
                  std::floor( i_value[ 9 ] ),
                  std::floor( i_value[ 10 ] ),
                  std::floor( i_value[ 11 ] ),
                  std::floor( i_value[ 12 ] ),
                  std::floor( i_value[ 13 ] ),
                  std::floor( i_value[ 14 ] ),
                  std::floor( i_value[ 15 ] ) );
}

GM_NS_CLOSE