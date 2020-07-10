//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/clamp.h
/// \ingroup gm_functions_basic
///
/// Value clamp.
///
/// Clamp a scalar, or vector into a range such that:
/// - Any value less than the minimum will assume the minimum.
/// - Any value greater than the maximum will assume the maximum.

#include <gm/gm.h>

#include <gm/types/floatRange.h>
#include <gm/types/intRange.h>
#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec2i.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec3i.h>
#include <gm/types/vec4f.h>
#include <gm/types/vec4i.h>

GM_NS_OPEN

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline float Clamp( const float& i_value, const FloatRange& i_range )
{
    if ( i_range.Min() > i_value )
    {
        return i_range.Min();
    }
    else if ( i_range.Max() < i_value )
    {
        return i_range.Max();
    }
    else
    {
        return i_value;
    }
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline int Clamp( const int& i_value, const IntRange& i_range )
{
    if ( i_range.Min() > i_value )
    {
        return i_range.Min();
    }
    else if ( i_range.Max() < i_value )
    {
        return i_range.Max();
    }
    else
    {
        return i_value;
    }
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline Mat3f Clamp( const Mat3f& i_value, const FloatRange& i_range )
{
    return Mat3f( Clamp( i_value[ 0 ], i_range ),
                  Clamp( i_value[ 1 ], i_range ),
                  Clamp( i_value[ 2 ], i_range ),
                  Clamp( i_value[ 3 ], i_range ),
                  Clamp( i_value[ 4 ], i_range ),
                  Clamp( i_value[ 5 ], i_range ),
                  Clamp( i_value[ 6 ], i_range ),
                  Clamp( i_value[ 7 ], i_range ),
                  Clamp( i_value[ 8 ], i_range ) );
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline Mat4f Clamp( const Mat4f& i_value, const FloatRange& i_range )
{
    return Mat4f( Clamp( i_value[ 0 ], i_range ),
                  Clamp( i_value[ 1 ], i_range ),
                  Clamp( i_value[ 2 ], i_range ),
                  Clamp( i_value[ 3 ], i_range ),
                  Clamp( i_value[ 4 ], i_range ),
                  Clamp( i_value[ 5 ], i_range ),
                  Clamp( i_value[ 6 ], i_range ),
                  Clamp( i_value[ 7 ], i_range ),
                  Clamp( i_value[ 8 ], i_range ),
                  Clamp( i_value[ 9 ], i_range ),
                  Clamp( i_value[ 10 ], i_range ),
                  Clamp( i_value[ 11 ], i_range ),
                  Clamp( i_value[ 12 ], i_range ),
                  Clamp( i_value[ 13 ], i_range ),
                  Clamp( i_value[ 14 ], i_range ),
                  Clamp( i_value[ 15 ], i_range ) );
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline Vec2f Clamp( const Vec2f& i_value, const FloatRange& i_range )
{
    return Vec2f( Clamp( i_value[ 0 ], i_range ), Clamp( i_value[ 1 ], i_range ) );
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline Vec3f Clamp( const Vec3f& i_value, const FloatRange& i_range )
{
    return Vec3f( Clamp( i_value[ 0 ], i_range ), Clamp( i_value[ 1 ], i_range ), Clamp( i_value[ 2 ], i_range ) );
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline Vec4f Clamp( const Vec4f& i_value, const FloatRange& i_range )
{
    return Vec4f( Clamp( i_value[ 0 ], i_range ),
                  Clamp( i_value[ 1 ], i_range ),
                  Clamp( i_value[ 2 ], i_range ),
                  Clamp( i_value[ 3 ], i_range ) );
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline Vec2i Clamp( const Vec2i& i_value, const IntRange& i_range )
{
    return Vec2i( Clamp( i_value[ 0 ], i_range ), Clamp( i_value[ 1 ], i_range ) );
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline Vec3i Clamp( const Vec3i& i_value, const IntRange& i_range )
{
    return Vec3i( Clamp( i_value[ 0 ], i_range ), Clamp( i_value[ 1 ], i_range ), Clamp( i_value[ 2 ], i_range ) );
}

/// Clamp the value \p i_value with into the range i_range.
/// \ingroup gm_functions_basic
///
/// \param i_value Value to clamp.
/// \param i_range Range to clamp the value into.
///
/// \return Clamped value.
GM_HOST_DEVICE inline Vec4i Clamp( const Vec4i& i_value, const IntRange& i_range )
{
    return Vec4i( Clamp( i_value[ 0 ], i_range ),
                  Clamp( i_value[ 1 ], i_range ),
                  Clamp( i_value[ 2 ], i_range ),
                  Clamp( i_value[ 3 ], i_range ) );
}

GM_NS_CLOSE