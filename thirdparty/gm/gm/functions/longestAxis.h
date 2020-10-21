//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/longestAxis.h
/// \ingroup gm_functions_basic
///
/// Longest axis of a range.

#include <gm/gm.h>

#include <gm/base/diagnostic.h>

#include <gm/types/vec2fRange.h>
#include <gm/types/vec2iRange.h>
#include <gm/types/vec3fRange.h>
#include <gm/types/vec3iRange.h>
#include <gm/types/vec4fRange.h>
#include <gm/types/vec4iRange.h>

GM_NS_OPEN

/// Compute the longest axis of a multi-dimensional range.
///
/// \param i_range The first i_range.
///
/// \return The longest axis of i_range.
GM_HOST_DEVICE inline int LongestAxis( const Vec2fRange& i_range )
{
    GM_ASSERT( !i_range.IsEmpty() );
    Vec2f diagonal          = i_range.Max() - i_range.Min();
    int   longestAxis       = 0;
    float longestAxisLength = diagonal[ 0 ];

    if ( diagonal[ 1 ] > longestAxisLength )
    {
        longestAxis = 1;
    }

    return longestAxis;
}

/// Compute the longest axis of a multi-dimensional range.
///
/// \param i_range The first i_range.
///
/// \return The longest axis of i_range.
GM_HOST_DEVICE inline int LongestAxis( const Vec3fRange& i_range )
{
    GM_ASSERT( !i_range.IsEmpty() );
    Vec3f diagonal          = i_range.Max() - i_range.Min();
    int   longestAxis       = 0;
    float longestAxisLength = diagonal[ 0 ];

    if ( diagonal[ 1 ] > longestAxisLength )
    {
        longestAxisLength = diagonal[ 1 ];
        longestAxis       = 1;
    }

    if ( diagonal[ 2 ] > longestAxisLength )
    {
        longestAxis = 2;
    }

    return longestAxis;
}

/// Compute the longest axis of a multi-dimensional range.
///
/// \param i_range The first i_range.
///
/// \return The longest axis of i_range.
GM_HOST_DEVICE inline int LongestAxis( const Vec4fRange& i_range )
{
    GM_ASSERT( !i_range.IsEmpty() );
    Vec4f diagonal          = i_range.Max() - i_range.Min();
    int   longestAxis       = 0;
    float longestAxisLength = diagonal[ 0 ];

    if ( diagonal[ 1 ] > longestAxisLength )
    {
        longestAxisLength = diagonal[ 1 ];
        longestAxis       = 1;
    }

    if ( diagonal[ 2 ] > longestAxisLength )
    {
        longestAxisLength = diagonal[ 2 ];
        longestAxis       = 2;
    }

    if ( diagonal[ 3 ] > longestAxisLength )
    {
        longestAxis = 3;
    }

    return longestAxis;
}

/// Compute the longest axis of a multi-dimensional range.
///
/// \param i_range The first i_range.
///
/// \return The longest axis of i_range.
GM_HOST_DEVICE inline int LongestAxis( const Vec2iRange& i_range )
{
    GM_ASSERT( !i_range.IsEmpty() );
    Vec2i diagonal          = i_range.Max() - i_range.Min();
    int   longestAxis       = 0;
    int   longestAxisLength = diagonal[ 0 ];

    if ( diagonal[ 1 ] > longestAxisLength )
    {
        longestAxis = 1;
    }

    return longestAxis;
}

/// Compute the longest axis of a multi-dimensional range.
///
/// \param i_range The first i_range.
///
/// \return The longest axis of i_range.
GM_HOST_DEVICE inline int LongestAxis( const Vec3iRange& i_range )
{
    GM_ASSERT( !i_range.IsEmpty() );
    Vec3i diagonal          = i_range.Max() - i_range.Min();
    int   longestAxis       = 0;
    int   longestAxisLength = diagonal[ 0 ];

    if ( diagonal[ 1 ] > longestAxisLength )
    {
        longestAxisLength = diagonal[ 1 ];
        longestAxis       = 1;
    }

    if ( diagonal[ 2 ] > longestAxisLength )
    {
        longestAxis = 2;
    }

    return longestAxis;
}

/// Compute the longest axis of a multi-dimensional range.
///
/// \param i_range The first i_range.
///
/// \return The longest axis of i_range.
GM_HOST_DEVICE inline int LongestAxis( const Vec4iRange& i_range )
{
    GM_ASSERT( !i_range.IsEmpty() );
    Vec4i diagonal          = i_range.Max() - i_range.Min();
    int   longestAxis       = 0;
    int   longestAxisLength = diagonal[ 0 ];

    if ( diagonal[ 1 ] > longestAxisLength )
    {
        longestAxisLength = diagonal[ 1 ];
        longestAxis       = 1;
    }

    if ( diagonal[ 2 ] > longestAxisLength )
    {
        longestAxisLength = diagonal[ 2 ];
        longestAxis       = 2;
    }

    if ( diagonal[ 3 ] > longestAxisLength )
    {
        longestAxis = 3;
    }

    return longestAxis;
}

GM_NS_CLOSE