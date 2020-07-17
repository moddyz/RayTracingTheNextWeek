//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/rayPosition.h
/// \ingroup gm_functions_rayTracing
///
/// Position along a ray.
///
/// Computed as the scalar \em multiplication of a \b direction vector \em added to a point \b origin.
///
/// \ref RayPosition can be used to find the exact intersection points against objects in the scene.
///
/// Equation of a position \f$P\f$ along a ray:
///
/// \f[ O+tD=P                              \f]
/// \f[ O=\textnormal{Ray origin vector}    \f]
/// \f[ t=\textnormal{Magnitude scalar}     \f]
/// \f[ D=\textnormal{Ray direction vector} \f]

#include <gm/gm.h>

#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>

#include <gm/base/almost.h>
#include <gm/functions/length.h>

GM_NS_OPEN

/// Compute the position along a ray by scalar magnitude \p i_magnitude.
/// \ingroup gm_functions_rayTracing
///
/// \pre \p i_direction must be a normalized vector.
///
/// \sa \ref Normalize for vector normalization.
///
/// \param i_origin The origin of the ray.
/// \param i_direction The direction of the ray.
/// \param i_magnitude The magnitude to project the ray.
///
/// \return the position along the curve.
GM_HOST_DEVICE inline Vec2f RayPosition( const Vec2f& i_origin, const Vec2f& i_direction, const float& i_magnitude )
{
    GM_ASSERT_MSG( AlmostEqual( Length( i_direction ), 1.0f ), "Direction i_direction is not normalised!" );
    return i_origin + ( i_direction * i_magnitude );
}

/// Compute the position along a ray by scalar magnitude \p i_magnitude.
/// \ingroup gm_functions_rayTracing
///
/// \pre \p i_direction must be a normalized vector.
///
/// \sa \ref Normalize for vector normalization.
///
/// \param i_origin The origin of the ray.
/// \param i_direction The direction of the ray.
/// \param i_magnitude The magnitude to project the ray.
///
/// \return the position along the curve.
GM_HOST_DEVICE inline Vec3f RayPosition( const Vec3f& i_origin, const Vec3f& i_direction, const float& i_magnitude )
{
    GM_ASSERT_MSG( AlmostEqual( Length( i_direction ), 1.0f ), "Direction i_direction is not normalised!" );
    return i_origin + ( i_direction * i_magnitude );
}

GM_NS_CLOSE