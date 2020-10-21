//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/contains.h
/// \ingroup gm_functions_basic
///
/// Check if a container, such as a range contains a specified element or range of elements.

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

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const FloatRange& i_container, const float& i_containee )
{
    return i_containee >= i_container.Min() && i_containee <= i_container.Max();
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const FloatRange& i_container, const FloatRange& i_containee )
{
    return Contains( i_container, i_containee.Min() ) && Contains( i_container, i_containee.Max() );
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const IntRange& i_container, const int& i_containee )
{
    return i_containee >= i_container.Min() && i_containee <= i_container.Max();
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const IntRange& i_container, const IntRange& i_containee )
{
    return Contains( i_container, i_containee.Min() ) && Contains( i_container, i_containee.Max() );
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec2fRange& i_container, const Vec2f& i_containee )
{
    return i_containee[ 0 ] >= i_container.Min()[ 0 ] && i_containee[ 0 ] <= i_container.Max()[ 0 ] &&
           i_containee[ 1 ] >= i_container.Min()[ 1 ] && i_containee[ 1 ] <= i_container.Max()[ 1 ];
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec2fRange& i_container, const Vec2fRange& i_containee )
{
    return Contains( i_container, i_containee.Min() ) && Contains( i_container, i_containee.Max() );
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec3fRange& i_container, const Vec3f& i_containee )
{
    return i_containee[ 0 ] >= i_container.Min()[ 0 ] && i_containee[ 0 ] <= i_container.Max()[ 0 ] &&
           i_containee[ 1 ] >= i_container.Min()[ 1 ] && i_containee[ 1 ] <= i_container.Max()[ 1 ] &&
           i_containee[ 2 ] >= i_container.Min()[ 2 ] && i_containee[ 2 ] <= i_container.Max()[ 2 ];
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec3fRange& i_container, const Vec3fRange& i_containee )
{
    return Contains( i_container, i_containee.Min() ) && Contains( i_container, i_containee.Max() );
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec4fRange& i_container, const Vec4f& i_containee )
{
    return i_containee[ 0 ] >= i_container.Min()[ 0 ] && i_containee[ 0 ] <= i_container.Max()[ 0 ] &&
           i_containee[ 1 ] >= i_container.Min()[ 1 ] && i_containee[ 1 ] <= i_container.Max()[ 1 ] &&
           i_containee[ 2 ] >= i_container.Min()[ 2 ] && i_containee[ 2 ] <= i_container.Max()[ 2 ] &&
           i_containee[ 3 ] >= i_container.Min()[ 3 ] && i_containee[ 3 ] <= i_container.Max()[ 3 ];
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec4fRange& i_container, const Vec4fRange& i_containee )
{
    return Contains( i_container, i_containee.Min() ) && Contains( i_container, i_containee.Max() );
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec2iRange& i_container, const Vec2i& i_containee )
{
    return i_containee[ 0 ] >= i_container.Min()[ 0 ] && i_containee[ 0 ] <= i_container.Max()[ 0 ] &&
           i_containee[ 1 ] >= i_container.Min()[ 1 ] && i_containee[ 1 ] <= i_container.Max()[ 1 ];
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec2iRange& i_container, const Vec2iRange& i_containee )
{
    return Contains( i_container, i_containee.Min() ) && Contains( i_container, i_containee.Max() );
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec3iRange& i_container, const Vec3i& i_containee )
{
    return i_containee[ 0 ] >= i_container.Min()[ 0 ] && i_containee[ 0 ] <= i_container.Max()[ 0 ] &&
           i_containee[ 1 ] >= i_container.Min()[ 1 ] && i_containee[ 1 ] <= i_container.Max()[ 1 ] &&
           i_containee[ 2 ] >= i_container.Min()[ 2 ] && i_containee[ 2 ] <= i_container.Max()[ 2 ];
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec3iRange& i_container, const Vec3iRange& i_containee )
{
    return Contains( i_container, i_containee.Min() ) && Contains( i_container, i_containee.Max() );
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec4iRange& i_container, const Vec4i& i_containee )
{
    return i_containee[ 0 ] >= i_container.Min()[ 0 ] && i_containee[ 0 ] <= i_container.Max()[ 0 ] &&
           i_containee[ 1 ] >= i_container.Min()[ 1 ] && i_containee[ 1 ] <= i_container.Max()[ 1 ] &&
           i_containee[ 2 ] >= i_container.Min()[ 2 ] && i_containee[ 2 ] <= i_container.Max()[ 2 ] &&
           i_containee[ 3 ] >= i_container.Min()[ 3 ] && i_containee[ 3 ] <= i_container.Max()[ 3 ];
}

/// Check if the range \p i_container completely contains \p i_containee.
///
/// \param i_container The range container.
/// \param i_containee The i_containee.
///
/// \retval true If \p i_containee is completely contained within i_container.
/// \retval false If \p i_containee is not completely contained within i_container.
GM_HOST_DEVICE inline bool Contains( const Vec4iRange& i_container, const Vec4iRange& i_containee )
{
    return Contains( i_container, i_containee.Min() ) && Contains( i_container, i_containee.Max() );
}

GM_NS_CLOSE