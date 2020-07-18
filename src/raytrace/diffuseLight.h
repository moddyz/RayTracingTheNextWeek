#pragma once

/// \file raytrace/diffuseLight.h
///
/// A diffuse emissive material.

#include <raytrace/hitRecord.h>
#include <raytrace/material.h>
#include <raytrace/randomUnitVector.h>
#include <raytrace/texture.h>

RAYTRACE_NS_OPEN

/// \class DiffuseLight
///
/// An emissive
class DiffuseLight : public Material
{
public:
    /// Explicit constructor with an texture input for sampling the emission.
    inline explicit DiffuseLight( const TextureSharedPtr& i_emissive )
        : m_emissive( i_emissive )
    {
    }

    /// This material emits light, but does not scatter any rays.
    ///
    /// \retval false
    inline virtual bool Scatter( const raytrace::Ray& i_ray,
                                 const HitRecord&     i_hitRecord,
                                 gm::Vec3f&           o_attenuation,
                                 raytrace::Ray&       o_scatteredRay ) const override
    {
        return false;
    }

    inline virtual gm::Vec3f Emit( const gm::Vec2f& i_uv, const gm::Vec3f& i_position ) const override
    {
        return m_emissive->Sample( i_uv, i_position );
    }

private:
    TextureSharedPtr m_emissive;
};

RAYTRACE_NS_CLOSE
