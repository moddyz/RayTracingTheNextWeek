//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/intersection.h
/// \ingroup gm_functions_basic
///
/// Range intersection.
///
/// Computes the intersection, or overlapping range from two input ranges.

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

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_range The range to compare against.
///
/// \return The intersecting range.  An empty range will be returned if there is no overlap.
GM_HOST_DEVICE inline FloatRange Intersection( const FloatRange& i_lhs, const FloatRange& i_rhs )
{
    return FloatRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_range The range to compare against.
///
/// \return The intersecting range.  An empty range will be returned if there is no overlap.
GM_HOST_DEVICE inline IntRange Intersection( const IntRange& i_lhs, const IntRange& i_rhs )
{
    return IntRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_range The range to compare against.
///
/// \return The intersecting range.  An empty range will be returned if there is no overlap.
GM_HOST_DEVICE inline Vec2fRange Intersection( const Vec2fRange& i_lhs, const Vec2fRange& i_rhs )
{
    return Vec2fRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_range The range to compare against.
///
/// \return The intersecting range.  An empty range will be returned if there is no overlap.
GM_HOST_DEVICE inline Vec3fRange Intersection( const Vec3fRange& i_lhs, const Vec3fRange& i_rhs )
{
    return Vec3fRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_range The range to compare against.
///
/// \return The intersecting range.  An empty range will be returned if there is no overlap.
GM_HOST_DEVICE inline Vec4fRange Intersection( const Vec4fRange& i_lhs, const Vec4fRange& i_rhs )
{
    return Vec4fRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_range The range to compare against.
///
/// \return The intersecting range.  An empty range will be returned if there is no overlap.
GM_HOST_DEVICE inline Vec2iRange Intersection( const Vec2iRange& i_lhs, const Vec2iRange& i_rhs )
{
    return Vec2iRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_range The range to compare against.
///
/// \return The intersecting range.  An empty range will be returned if there is no overlap.
GM_HOST_DEVICE inline Vec3iRange Intersection( const Vec3iRange& i_lhs, const Vec3iRange& i_rhs )
{
    return Vec3iRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_range The range to compare against.
///
/// \return The intersecting range.  An empty range will be returned if there is no overlap.
GM_HOST_DEVICE inline Vec4iRange Intersection( const Vec4iRange& i_lhs, const Vec4iRange& i_rhs )
{
    return Vec4iRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

GM_NS_CLOSE