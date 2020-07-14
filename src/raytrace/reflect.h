#pragma once

/// \file raytrace/reflect.h
///
/// Utility for reflecting a vector across a normal.

#include <raytrace/raytrace.h>

#include <gm/functions/dotProduct.h>
#include <gm/types/vec3f.h>

RAYTRACE_NS_OPEN

/// Reflect an incident ray direction \p i_rayDirection, across \p i_normal.
///
/// \param i_rayDirection The incident ray direction.
/// \param i_normal The normal of the geometric surface.  This vector is assumed to be of unit length.
///
/// \return The newly reflected ray direction.
inline gm::Vec3f Reflect( const gm::Vec3f& i_rayDirection, const gm::Vec3f& i_normal )
{
    // Compute the scalar projection of ray direction, onto the normal. (Am I using the right terminology here?)
    // We're inverting this projection to match the direction of the normal.
    gm::Vec3f rayNormalProjection = -gm::DotProduct( i_rayDirection, i_normal ) * i_normal;

    // Multiply the projection by a factor of 2 and add to the ray.  Adding only one factor produces a vector
    // that is orthogonal to the normal vector (is this true?).
    return i_rayDirection + 2 * rayNormalProjection;
}

RAYTRACE_NS_CLOSE
