//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/intersection.h
/// \ingroup gm_functions_basic
///
/// Range intersection.
///
/// Computes the intersection, or overlap, of two input ranges.

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
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The range intersection.  An empty range will be returned if there is no overlap.
/// \sa \ref FloatRange::IsEmpty()
GM_HOST_DEVICE inline FloatRange Intersection( const FloatRange& i_lhs, const FloatRange& i_rhs )
{
    return FloatRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The range intersection.  An empty range will be returned if there is no overlap.
/// \sa \ref IntRange::IsEmpty()
GM_HOST_DEVICE inline IntRange Intersection( const IntRange& i_lhs, const IntRange& i_rhs )
{
    return IntRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The range intersection.  An empty range will be returned if there is no overlap.
/// \sa \ref Vec2fRange::IsEmpty()
GM_HOST_DEVICE inline Vec2fRange Intersection( const Vec2fRange& i_lhs, const Vec2fRange& i_rhs )
{
    return Vec2fRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The range intersection.  An empty range will be returned if there is no overlap.
/// \sa \ref Vec3fRange::IsEmpty()
GM_HOST_DEVICE inline Vec3fRange Intersection( const Vec3fRange& i_lhs, const Vec3fRange& i_rhs )
{
    return Vec3fRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The range intersection.  An empty range will be returned if there is no overlap.
/// \sa \ref Vec4fRange::IsEmpty()
GM_HOST_DEVICE inline Vec4fRange Intersection( const Vec4fRange& i_lhs, const Vec4fRange& i_rhs )
{
    return Vec4fRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The range intersection.  An empty range will be returned if there is no overlap.
/// \sa \ref Vec2iRange::IsEmpty()
GM_HOST_DEVICE inline Vec2iRange Intersection( const Vec2iRange& i_lhs, const Vec2iRange& i_rhs )
{
    return Vec2iRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The range intersection.  An empty range will be returned if there is no overlap.
/// \sa \ref Vec3iRange::IsEmpty()
GM_HOST_DEVICE inline Vec3iRange Intersection( const Vec3iRange& i_lhs, const Vec3iRange& i_rhs )
{
    return Vec3iRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

/// Compute the intersecting range of \p i_lhs and \p i_rhs.
///
/// \param i_lhs The first range.
/// \param i_rhs The second range.
///
/// \return The range intersection.  An empty range will be returned if there is no overlap.
/// \sa \ref Vec4iRange::IsEmpty()
GM_HOST_DEVICE inline Vec4iRange Intersection( const Vec4iRange& i_lhs, const Vec4iRange& i_rhs )
{
    return Vec4iRange( Max( i_lhs.Min(), i_rhs.Min() ), Min( i_lhs.Max(), i_rhs.Max() ) );
}

GM_NS_CLOSE