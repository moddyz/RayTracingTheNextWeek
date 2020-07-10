//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/abs.h
/// \ingroup gm_functions_basic
///
/// Find the absolute value of two input values, defined as the magnitude of a real number without its sign.
///
/// If the value type is a vector, the absolute value will be performed on each element.

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <algorithm>

GM_NS_OPEN

/// Find the absolute value of the input \p i_value.
/// \ingroup gm_functions_basic
///
/// \return The absolute value of the input.
GM_HOST_DEVICE inline float Abs( const float& i_value )
{
    return std::abs( i_value );
}

/// Find the absolute value of the input \p i_value.
/// \ingroup gm_functions_basic
///
/// \return The absolute value of the input.
GM_HOST_DEVICE inline Vec2f Abs( const Vec2f& i_value )
{
    return Vec2f( std::abs( i_value[ 0 ] ), std::abs( i_value[ 1 ] ) );
}

/// Find the absolute value of the input \p i_value.
/// \ingroup gm_functions_basic
///
/// \return The absolute value of the input.
GM_HOST_DEVICE inline Vec3f Abs( const Vec3f& i_value )
{
    return Vec3f( std::abs( i_value[ 0 ] ), std::abs( i_value[ 1 ] ), std::abs( i_value[ 2 ] ) );
}

/// Find the absolute value of the input \p i_value.
/// \ingroup gm_functions_basic
///
/// \return The absolute value of the input.
GM_HOST_DEVICE inline Vec4f Abs( const Vec4f& i_value )
{
    return Vec4f( std::abs( i_value[ 0 ] ),
                  std::abs( i_value[ 1 ] ),
                  std::abs( i_value[ 2 ] ),
                  std::abs( i_value[ 3 ] ) );
}

/// Find the absolute value of the input \p i_value.
/// \ingroup gm_functions_basic
///
/// \return The absolute value of the input.
GM_HOST_DEVICE inline Mat3f Abs( const Mat3f& i_value )
{
    return Mat3f( std::abs( i_value[ 0 ] ),
                  std::abs( i_value[ 1 ] ),
                  std::abs( i_value[ 2 ] ),
                  std::abs( i_value[ 3 ] ),
                  std::abs( i_value[ 4 ] ),
                  std::abs( i_value[ 5 ] ),
                  std::abs( i_value[ 6 ] ),
                  std::abs( i_value[ 7 ] ),
                  std::abs( i_value[ 8 ] ) );
}

/// Find the absolute value of the input \p i_value.
/// \ingroup gm_functions_basic
///
/// \return The absolute value of the input.
GM_HOST_DEVICE inline Mat4f Abs( const Mat4f& i_value )
{
    return Mat4f( std::abs( i_value[ 0 ] ),
                  std::abs( i_value[ 1 ] ),
                  std::abs( i_value[ 2 ] ),
                  std::abs( i_value[ 3 ] ),
                  std::abs( i_value[ 4 ] ),
                  std::abs( i_value[ 5 ] ),
                  std::abs( i_value[ 6 ] ),
                  std::abs( i_value[ 7 ] ),
                  std::abs( i_value[ 8 ] ),
                  std::abs( i_value[ 9 ] ),
                  std::abs( i_value[ 10 ] ),
                  std::abs( i_value[ 11 ] ),
                  std::abs( i_value[ 12 ] ),
                  std::abs( i_value[ 13 ] ),
                  std::abs( i_value[ 14 ] ),
                  std::abs( i_value[ 15 ] ) );
}

GM_NS_CLOSE