//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/content.h
/// \ingroup gm_functions_basic
///
/// Content for an N-dimensional range.
///
/// Content is the generalized term for "length" (1D), "area" (2D), or "volume" (3D).

#include <gm/gm.h>

#include <gm/types/floatRange.h>
#include <gm/types/intRange.h>
#include <gm/types/vec2fRange.h>
#include <gm/types/vec2iRange.h>
#include <gm/types/vec3fRange.h>
#include <gm/types/vec3iRange.h>
#include <gm/types/vec4fRange.h>
#include <gm/types/vec4iRange.h>

#include <gm/functions/max.h>
#include <gm/functions/min.h>

GM_NS_OPEN

/// Compute the content of the range \p i_range.
///
/// \param i_range The range to compute the content for.
///
/// \return The content quantity.
GM_HOST_DEVICE inline float Content( const FloatRange& i_range )
{
    return i_range.Max() - i_range.Min();
}

/// Compute the content of the range \p i_range.
///
/// \param i_range The range to compute the content for.
///
/// \return The content quantity.
GM_HOST_DEVICE inline int Content( const IntRange& i_range )
{
    return i_range.Max() - i_range.Min();
}

/// Compute the content of the range \p i_range.
///
/// \param i_range The range to compute the content for.
///
/// \return The content quantity.
GM_HOST_DEVICE inline float Content( const Vec2fRange& i_range )
{
    return ( i_range.Max()[ 0 ] - i_range.Min()[ 0 ] ) * ( i_range.Max()[ 1 ] - i_range.Min()[ 1 ] );
}

/// Compute the content of the range \p i_range.
///
/// \param i_range The range to compute the content for.
///
/// \return The content quantity.
GM_HOST_DEVICE inline float Content( const Vec3fRange& i_range )
{
    return ( i_range.Max()[ 0 ] - i_range.Min()[ 0 ] ) * ( i_range.Max()[ 1 ] - i_range.Min()[ 1 ] ) *
           ( i_range.Max()[ 2 ] - i_range.Min()[ 2 ] );
}

/// Compute the content of the range \p i_range.
///
/// \param i_range The range to compute the content for.
///
/// \return The content quantity.
GM_HOST_DEVICE inline float Content( const Vec4fRange& i_range )
{
    return ( i_range.Max()[ 0 ] - i_range.Min()[ 0 ] ) * ( i_range.Max()[ 1 ] - i_range.Min()[ 1 ] ) *
           ( i_range.Max()[ 2 ] - i_range.Min()[ 2 ] ) * ( i_range.Max()[ 3 ] - i_range.Min()[ 3 ] );
}

/// Compute the content of the range \p i_range.
///
/// \param i_range The range to compute the content for.
///
/// \return The content quantity.
GM_HOST_DEVICE inline int Content( const Vec2iRange& i_range )
{
    return ( i_range.Max()[ 0 ] - i_range.Min()[ 0 ] ) * ( i_range.Max()[ 1 ] - i_range.Min()[ 1 ] );
}

/// Compute the content of the range \p i_range.
///
/// \param i_range The range to compute the content for.
///
/// \return The content quantity.
GM_HOST_DEVICE inline int Content( const Vec3iRange& i_range )
{
    return ( i_range.Max()[ 0 ] - i_range.Min()[ 0 ] ) * ( i_range.Max()[ 1 ] - i_range.Min()[ 1 ] ) *
           ( i_range.Max()[ 2 ] - i_range.Min()[ 2 ] );
}

/// Compute the content of the range \p i_range.
///
/// \param i_range The range to compute the content for.
///
/// \return The content quantity.
GM_HOST_DEVICE inline int Content( const Vec4iRange& i_range )
{
    return ( i_range.Max()[ 0 ] - i_range.Min()[ 0 ] ) * ( i_range.Max()[ 1 ] - i_range.Min()[ 1 ] ) *
           ( i_range.Max()[ 2 ] - i_range.Min()[ 2 ] ) * ( i_range.Max()[ 3 ] - i_range.Min()[ 3 ] );
}

GM_NS_CLOSE