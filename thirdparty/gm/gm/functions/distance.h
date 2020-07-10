//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/distance.h
/// \ingroup gm_functions_linearAlgebra
///
/// Compute the \b distance between two points.
///
/// The \b distance is computed by taking the \em length of the the <em>vector difference</em> between the two points.

#include <gm/gm.h>

#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>

#include <gm/functions/length.h>

GM_NS_OPEN

/// Compute the distance of between points \p i_pointA and \p i_pointB.
/// \ingroup gm_functions_linearAlgebra
///
/// \return The distance between the two points.
GM_HOST_DEVICE inline float Distance( const Vec2f& i_pointA, const Vec2f& i_pointB )
{
    return Length( i_pointA - i_pointB );
}

/// Compute the distance of between points \p i_pointA and \p i_pointB.
/// \ingroup gm_functions_linearAlgebra
///
/// \return The distance between the two points.
GM_HOST_DEVICE inline float Distance( const Vec3f& i_pointA, const Vec3f& i_pointB )
{
    return Length( i_pointA - i_pointB );
}

GM_NS_CLOSE