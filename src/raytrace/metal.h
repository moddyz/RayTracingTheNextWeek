#pragma once

/// \file raytrace/metal.h
///
/// Metal material representation.

#include <gm/types/vec3f.h>

#include <gm/functions/clamp.h>

#include <raytrace/hitRecord.h>
#include <raytrace/material.h>
#include <raytrace/randomUnitVector.h>
#include <raytrace/reflect.h>

RAYTRACE_NS_OPEN

/// \class Metal
///
/// The metal material reflects incoming rays "perfectly".
///
/// Metal has the following parameters:
/// - "albedo" color attribute.
/// - "fuzziness" to impart randomness into the reflectance calcualtion.
class Metal : public Material
{
public:
    /// Explicit constructor with albedo color.
    inline explicit Metal( const gm::Vec3f& i_albedo, float i_fuzziness )
        : m_albedo( i_albedo )
        , m_fuzziness( gm::Clamp( i_fuzziness, gm::FloatRange( 0.0, 1.0 ) ) )
    {
    }

    inline virtual bool Scatter( const raytrace::Ray& i_ray,
                                 const HitRecord&     i_hitRecord,
                                 gm::Vec3f&           o_attenuation,
                                 raytrace::Ray&       o_scatteredRay ) const override
    {
        gm::Vec3f reflectedDirection = Reflect( i_ray.Direction(), i_hitRecord.m_normal );
        reflectedDirection += m_fuzziness * RandomUnitVector();

        // Produce reflected ray.
        o_scatteredRay = raytrace::Ray( /* origin */ i_hitRecord.m_position,
                                        /* direction */ gm::Normalize( reflectedDirection ),
                                        /* time */ i_ray.Time() );

        // Apply albedo.
        o_attenuation = m_albedo;

        // Produce scattered ray if the scattered ray is not orthogonal to the normal.
        return ( gm::DotProduct( o_scatteredRay.Direction(), i_hitRecord.m_normal ) > 0 );
    }

private:
    gm::Vec3f m_albedo;
    float     m_fuzziness;
};

RAYTRACE_NS_CLOSE
