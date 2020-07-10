#pragma once

/// \file schlick.h
///
/// Schlick Approxmiation.

#include <raytrace/raytrace.h>

RAYTRACE_NS_OPEN

float Schlick( float i_cosine, float i_refractionIndex )
{
    auto r0 = ( 1 - i_refractionIndex ) / ( 1 + i_refractionIndex );
    r0      = r0 * r0;
    return r0 + ( 1 - r0 ) * pow( ( 1 - i_cosine ), 5 );
}

RAYTRACE_NS_CLOSE
