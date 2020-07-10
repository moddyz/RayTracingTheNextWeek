//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/radians.h
/// \ingroup gm_functions_basic
///
/// Unit conversion from an angle encoded as degrees into radians.

#include <gm/gm.h>

#include <gm/base/constants.h>

GM_NS_OPEN

/// Converts angle \p i_angle from degrees to radians.
/// \ingroup gm_functions_basic
///
/// \param i_angle The input angle in unit of \em degrees.
///
/// \return The angle in units of radians.
GM_HOST_DEVICE inline float Radians( const float& i_angle )
{
    constexpr float degreesToRadiansRatio = GM_PI / 180.0f;
    return i_angle * degreesToRadiansRatio;
}

GM_NS_CLOSE