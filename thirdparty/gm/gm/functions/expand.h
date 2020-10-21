//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/expand.h
/// \ingroup gm_functions_basic
///
/// Range expansion.
///
/// The expanded range encompasses both input ranges.

#include <gm/gm.h>

#include <gm/types/floatRange.h>
#include <gm/types/intRange.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec2fRange.h>
#include <gm/types/vec2i.h>
#include <gm/types/vec2iRange.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec3fRange.h>
#include <gm/types/vec3i.h>
#include <gm/types/vec3iRange.h>
#include <gm/types/vec4f.h>
#include <gm/types/vec4fRange.h>
#include <gm/types/vec4i.h>
#include <gm/types/vec4iRange.h>

#include <gm/functions/max.h>
#include <gm/functions/min.h>

GM_NS_OPEN

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline FloatRange Expand( const FloatRange& i_lhs, const FloatRange& i_rhs )
{
    bool leftEmpty  = i_lhs.IsEmpty();
    bool rightEmpty = i_rhs.IsEmpty();
    if ( leftEmpty && rightEmpty )
    {
        return FloatRange();
    }
    else if ( leftEmpty )
    {
        return i_rhs;
    }
    else if ( rightEmpty )
    {
        return i_lhs;
    }

    return FloatRange( Min( i_lhs.Min(), i_rhs.Min() ), Max( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline FloatRange Expand( const FloatRange& i_lhs, const float& i_rhs )
{
    bool leftEmpty = i_lhs.IsEmpty();
    if ( leftEmpty )
    {
        return FloatRange( i_rhs, i_rhs );
    }

    return FloatRange( Min( i_lhs.Min(), i_rhs ), Max( i_lhs.Max(), i_rhs ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline IntRange Expand( const IntRange& i_lhs, const IntRange& i_rhs )
{
    bool leftEmpty  = i_lhs.IsEmpty();
    bool rightEmpty = i_rhs.IsEmpty();
    if ( leftEmpty && rightEmpty )
    {
        return IntRange();
    }
    else if ( leftEmpty )
    {
        return i_rhs;
    }
    else if ( rightEmpty )
    {
        return i_lhs;
    }

    return IntRange( Min( i_lhs.Min(), i_rhs.Min() ), Max( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline IntRange Expand( const IntRange& i_lhs, const int& i_rhs )
{
    bool leftEmpty = i_lhs.IsEmpty();
    if ( leftEmpty )
    {
        return IntRange( i_rhs, i_rhs );
    }

    return IntRange( Min( i_lhs.Min(), i_rhs ), Max( i_lhs.Max(), i_rhs ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec2fRange Expand( const Vec2fRange& i_lhs, const Vec2fRange& i_rhs )
{
    bool leftEmpty  = i_lhs.IsEmpty();
    bool rightEmpty = i_rhs.IsEmpty();
    if ( leftEmpty && rightEmpty )
    {
        return Vec2fRange();
    }
    else if ( leftEmpty )
    {
        return i_rhs;
    }
    else if ( rightEmpty )
    {
        return i_lhs;
    }

    return Vec2fRange( Min( i_lhs.Min(), i_rhs.Min() ), Max( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec2fRange Expand( const Vec2fRange& i_lhs, const Vec2f& i_rhs )
{
    bool leftEmpty = i_lhs.IsEmpty();
    if ( leftEmpty )
    {
        return Vec2fRange( i_rhs, i_rhs );
    }

    return Vec2fRange( Min( i_lhs.Min(), i_rhs ), Max( i_lhs.Max(), i_rhs ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec3fRange Expand( const Vec3fRange& i_lhs, const Vec3fRange& i_rhs )
{
    bool leftEmpty  = i_lhs.IsEmpty();
    bool rightEmpty = i_rhs.IsEmpty();
    if ( leftEmpty && rightEmpty )
    {
        return Vec3fRange();
    }
    else if ( leftEmpty )
    {
        return i_rhs;
    }
    else if ( rightEmpty )
    {
        return i_lhs;
    }

    return Vec3fRange( Min( i_lhs.Min(), i_rhs.Min() ), Max( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec3fRange Expand( const Vec3fRange& i_lhs, const Vec3f& i_rhs )
{
    bool leftEmpty = i_lhs.IsEmpty();
    if ( leftEmpty )
    {
        return Vec3fRange( i_rhs, i_rhs );
    }

    return Vec3fRange( Min( i_lhs.Min(), i_rhs ), Max( i_lhs.Max(), i_rhs ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec4fRange Expand( const Vec4fRange& i_lhs, const Vec4fRange& i_rhs )
{
    bool leftEmpty  = i_lhs.IsEmpty();
    bool rightEmpty = i_rhs.IsEmpty();
    if ( leftEmpty && rightEmpty )
    {
        return Vec4fRange();
    }
    else if ( leftEmpty )
    {
        return i_rhs;
    }
    else if ( rightEmpty )
    {
        return i_lhs;
    }

    return Vec4fRange( Min( i_lhs.Min(), i_rhs.Min() ), Max( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec4fRange Expand( const Vec4fRange& i_lhs, const Vec4f& i_rhs )
{
    bool leftEmpty = i_lhs.IsEmpty();
    if ( leftEmpty )
    {
        return Vec4fRange( i_rhs, i_rhs );
    }

    return Vec4fRange( Min( i_lhs.Min(), i_rhs ), Max( i_lhs.Max(), i_rhs ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec2iRange Expand( const Vec2iRange& i_lhs, const Vec2iRange& i_rhs )
{
    bool leftEmpty  = i_lhs.IsEmpty();
    bool rightEmpty = i_rhs.IsEmpty();
    if ( leftEmpty && rightEmpty )
    {
        return Vec2iRange();
    }
    else if ( leftEmpty )
    {
        return i_rhs;
    }
    else if ( rightEmpty )
    {
        return i_lhs;
    }

    return Vec2iRange( Min( i_lhs.Min(), i_rhs.Min() ), Max( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec2iRange Expand( const Vec2iRange& i_lhs, const Vec2i& i_rhs )
{
    bool leftEmpty = i_lhs.IsEmpty();
    if ( leftEmpty )
    {
        return Vec2iRange( i_rhs, i_rhs );
    }

    return Vec2iRange( Min( i_lhs.Min(), i_rhs ), Max( i_lhs.Max(), i_rhs ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec3iRange Expand( const Vec3iRange& i_lhs, const Vec3iRange& i_rhs )
{
    bool leftEmpty  = i_lhs.IsEmpty();
    bool rightEmpty = i_rhs.IsEmpty();
    if ( leftEmpty && rightEmpty )
    {
        return Vec3iRange();
    }
    else if ( leftEmpty )
    {
        return i_rhs;
    }
    else if ( rightEmpty )
    {
        return i_lhs;
    }

    return Vec3iRange( Min( i_lhs.Min(), i_rhs.Min() ), Max( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec3iRange Expand( const Vec3iRange& i_lhs, const Vec3i& i_rhs )
{
    bool leftEmpty = i_lhs.IsEmpty();
    if ( leftEmpty )
    {
        return Vec3iRange( i_rhs, i_rhs );
    }

    return Vec3iRange( Min( i_lhs.Min(), i_rhs ), Max( i_lhs.Max(), i_rhs ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec4iRange Expand( const Vec4iRange& i_lhs, const Vec4iRange& i_rhs )
{
    bool leftEmpty  = i_lhs.IsEmpty();
    bool rightEmpty = i_rhs.IsEmpty();
    if ( leftEmpty && rightEmpty )
    {
        return Vec4iRange();
    }
    else if ( leftEmpty )
    {
        return i_rhs;
    }
    else if ( rightEmpty )
    {
        return i_lhs;
    }

    return Vec4iRange( Min( i_lhs.Min(), i_rhs.Min() ), Max( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the expanded range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The expanded range.
GM_HOST_DEVICE inline Vec4iRange Expand( const Vec4iRange& i_lhs, const Vec4i& i_rhs )
{
    bool leftEmpty = i_lhs.IsEmpty();
    if ( leftEmpty )
    {
        return Vec4iRange( i_rhs, i_rhs );
    }

    return Vec4iRange( Min( i_lhs.Min(), i_rhs ), Max( i_lhs.Max(), i_rhs ) );
}

GM_NS_CLOSE