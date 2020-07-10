#pragma once

/// \file raytrace/randomUnitVector.h
///
/// Utility for generating a random unit vector.

#include <raytrace/raytrace.h>

#include <gm/base/constants.h>
#include <gm/functions/randomNumber.h>
#include <gm/types/floatRange.h>
#include <gm/types/vec3f.h>

RAYTRACE_NS_OPEN

/// Compute a random 3D unit vector.
///
/// TODO - write a proof for this.
///
/// \return Random unit vector.
inline gm::Vec3f RandomUnitVector()
{
    float angle = gm::RandomNumber( gm::FloatRange( 0.0f, 2.0f * GM_PI ) );
    float z     = gm::RandomNumber( gm::FloatRange( -1.0f, 1.0f ) );
    float r     = sqrt( 1.0f - z * z );
    return gm::Vec3f( r * cos( angle ), r * sin( angle ), z );
}

RAYTRACE_NS_CLOSE
