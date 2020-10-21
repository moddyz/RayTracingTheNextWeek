#pragma once

/// \file raytrace/randomPointInUnitDisk.h
///
/// Utility for generating a random point within a unit disk (circle) in 3D space.
///
/// The disk models the lens of a camera, and the randomness introduces a blurred effect
/// objects which are not at the focal distance.

#include <raytrace/raytrace.h>

#include <gm/base/constants.h>
#include <gm/functions/randomNumber.h>
#include <gm/types/floatRange.h>
#include <gm/types/vec3f.h>

RAYTRACE_NS_OPEN

/// Generate an random point in a unit disk.
///
/// \return Random point in the unit disk.
inline gm::Vec3f RandomPointInUnitDisk()
{
    // Random angle & magnitude
    float angle     = gm::RandomNumber( gm::FloatRange( 0.0f, 2.0f * gm::Pi ) );
    float magnitude = gm::RandomNumber( gm::FloatRange( 0.0f, 1.0f ) );

    // Compute the cosine and sine for the x & y coordinates based on the random angle,
    // scaled by the random magintude.
    // TODO: Check if this actually produces uniform random-ness?
    return gm::Vec3f( cos( angle ) * magnitude, sin( angle ) * magnitude, 0.0f );
}

RAYTRACE_NS_CLOSE
