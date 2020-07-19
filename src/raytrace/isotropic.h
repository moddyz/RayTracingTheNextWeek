#pragma once

/// \file raytrace/isotropic.h
///
/// Isotropic material representation.

#include <gm/types/vec3f.h>

#include <raytrace/hitRecord.h>
#include <raytrace/material.h>
#include <raytrace/randomUnitVector.h>
#include <raytrace/texture.h>

RAYTRACE_NS_OPEN

/// \class Isotropic
///
/// A material which scatters a ray in a random unit direction.
class Isotropic : public Material
{
public:
    /// Explicit constructor with an albedo texture.
    ///
    /// \param i_albedo The texture associated with the color of this material.
    inline explicit Isotropic( const TextureSharedPtr& i_albedo )
        : m_albedo( i_albedo )
    {
    }

    inline virtual bool Scatter( const raytrace::Ray& i_ray,
                                 const HitRecord&     i_hitRecord,
                                 gm::Vec3f&           o_attenuation,
                                 raytrace::Ray&       o_scatteredRay ) const override
    {
        // Scatter the ray in a random direction.
        o_scatteredRay = raytrace::Ray( /* origin */ i_hitRecord.m_position,
                                        /* direction */ RandomUnitVector(),
                                        /* time */ i_ray.Time() );

        // Accumulate attenuation from albedo sample.
        o_attenuation = m_albedo->Sample( i_hitRecord.m_uv, i_hitRecord.m_position );
        return true;
    }

private:
    TextureSharedPtr m_albedo;
};

RAYTRACE_NS_CLOSE
