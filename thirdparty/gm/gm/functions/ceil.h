//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/ceil.h
/// \ingroup gm_functions_basic
///
/// Ceil the input value, by rounding upwards to the nearest integral value.
/// If the value type is a vector, the ceil will be performed element-wise.

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <cmath>

GM_NS_OPEN

/// Ceil the input \ref float \p i_value,
/// rounding upwards to the nearest integral value.
/// \ingroup gm_functions_basic
///
/// \return The upward rounded input value.
GM_HOST_DEVICE inline float Ceil( const float& i_value )
{
    return std::ceil( i_value );
}

/// Ceil the input \ref Vec2f \p i_value,
/// rounding upwards to the nearest integral value.
/// \ingroup gm_functions_basic
///
/// \return The upward rounded input value.
GM_HOST_DEVICE inline Vec2f Ceil( const Vec2f& i_value )
{
    return Vec2f( std::ceil( i_value[ 0 ] ), std::ceil( i_value[ 1 ] ) );
}

/// Ceil the input \ref Vec3f \p i_value,
/// rounding upwards to the nearest integral value.
/// \ingroup gm_functions_basic
///
/// \return The upward rounded input value.
GM_HOST_DEVICE inline Vec3f Ceil( const Vec3f& i_value )
{
    return Vec3f( std::ceil( i_value[ 0 ] ), std::ceil( i_value[ 1 ] ), std::ceil( i_value[ 2 ] ) );
}

/// Ceil the input \ref Vec4f \p i_value,
/// rounding upwards to the nearest integral value.
/// \ingroup gm_functions_basic
///
/// \return The upward rounded input value.
GM_HOST_DEVICE inline Vec4f Ceil( const Vec4f& i_value )
{
    return Vec4f( std::ceil( i_value[ 0 ] ),
                  std::ceil( i_value[ 1 ] ),
                  std::ceil( i_value[ 2 ] ),
                  std::ceil( i_value[ 3 ] ) );
}

/// Ceil the input \ref Mat3f \p i_value,
/// rounding upwards to the nearest integral value.
/// \ingroup gm_functions_basic
///
/// \return The upward rounded input value.
GM_HOST_DEVICE inline Mat3f Ceil( const Mat3f& i_value )
{
    return Mat3f( std::ceil( i_value[ 0 ] ),
                  std::ceil( i_value[ 1 ] ),
                  std::ceil( i_value[ 2 ] ),
                  std::ceil( i_value[ 3 ] ),
                  std::ceil( i_value[ 4 ] ),
                  std::ceil( i_value[ 5 ] ),
                  std::ceil( i_value[ 6 ] ),
                  std::ceil( i_value[ 7 ] ),
                  std::ceil( i_value[ 8 ] ) );
}

/// Ceil the input \ref Mat4f \p i_value,
/// rounding upwards to the nearest integral value.
/// \ingroup gm_functions_basic
///
/// \return The upward rounded input value.
GM_HOST_DEVICE inline Mat4f Ceil( const Mat4f& i_value )
{
    return Mat4f( std::ceil( i_value[ 0 ] ),
                  std::ceil( i_value[ 1 ] ),
                  std::ceil( i_value[ 2 ] ),
                  std::ceil( i_value[ 3 ] ),
                  std::ceil( i_value[ 4 ] ),
                  std::ceil( i_value[ 5 ] ),
                  std::ceil( i_value[ 6 ] ),
                  std::ceil( i_value[ 7 ] ),
                  std::ceil( i_value[ 8 ] ),
                  std::ceil( i_value[ 9 ] ),
                  std::ceil( i_value[ 10 ] ),
                  std::ceil( i_value[ 11 ] ),
                  std::ceil( i_value[ 12 ] ),
                  std::ceil( i_value[ 13 ] ),
                  std::ceil( i_value[ 14 ] ),
                  std::ceil( i_value[ 15 ] ) );
}

GM_NS_CLOSE