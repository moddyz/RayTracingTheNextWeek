#pragma once

/// \file raytrace/schlick.h
///
/// Schlick Approxmiation.

#include <raytrace/raytrace.h>

RAYTRACE_NS_OPEN

/// Shlick approximation, um, look at https://en.wikipedia.org/wiki/Schlick%27s_approximation
///
/// \param i_cosine The cosine of the angle formed by the incident ray and surface normal.
/// \param i_refractionIndex The ratio of the refractive indices.
float Schlick( float i_cosine, float i_refractionIndex )
{
    auto r0 = ( 1 - i_refractionIndex ) / ( 1 + i_refractionIndex );
    r0      = r0 * r0;
    return r0 + ( 1 - r0 ) * pow( ( 1 - i_cosine ), 5 );
}

RAYTRACE_NS_CLOSE
