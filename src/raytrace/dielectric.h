#pragma once

/// \file raytrace/metal.h
///
/// Dielectric material representation for glass, diamond, and other material which
/// refract light.

#include <gm/types/vec3f.h>

#include <gm/functions/clamp.h>
#include <gm/functions/min.h>

#include <raytrace/hitRecord.h>
#include <raytrace/material.h>
#include <raytrace/reflect.h>
#include <raytrace/refract.h>
#include <raytrace/shlick.h>

#include <iostream>

RAYTRACE_NS_OPEN

/// \var c_airRefractiveIndex
///
/// The refractive index of air.
constexpr float c_airRefractiveIndex = 1.0f;

/// \class Dielectric
///
/// The dielectric material refracts incoming rays.
///
/// Properties:
/// - "refractiveIndex" which describes the refractive index of the material.
class Dielectric : public Material
{
public:
    /// Explicit constructor with the refractive index of the material.
    inline explicit Dielectric( float i_refractiveIndex )
        : m_refractiveIndex( i_refractiveIndex )
    {
    }

    inline virtual bool Scatter( const raytrace::Ray& i_ray,
                                 const HitRecord&     i_hitRecord,
                                 gm::Vec3f&           o_attenuation,
                                 raytrace::Ray&       o_scatteredRay ) const override
    {
        // Fixed attenuation color
        o_attenuation = gm::Vec3f( 1.0f, 1.0f, 1.0f );

        // Check if the incident ray is traveling in from the outside towards the surface,
        // or traveling within the surface towards the outside.
        float     incidentIndex, refractedIndex;
        gm::Vec3f incidentNormal;
        if ( gm::DotProduct( i_ray.Direction(), i_hitRecord.m_normal ) < 0 )
        {
            // The incident ray and the normal are opposing, thus the incident ray is outside and
            // heading into the geometric surface.
            incidentIndex  = c_airRefractiveIndex;
            refractedIndex = m_refractiveIndex;
            incidentNormal = i_hitRecord.m_normal;
        }
        else
        {
            // The incident ray and the normal form an acute angle, thus the incident ray is within the geometric
            // surface and heading outwards.
            incidentIndex  = m_refractiveIndex;
            refractedIndex = c_airRefractiveIndex;
            incidentNormal = -i_hitRecord.m_normal;
        }

        gm::Vec3f normRayDir = gm::Normalize( i_ray.Direction() );

        // Check for total internal reflection (when the ray is inside a material with
        // higher frefractive index.
        double cosTheta = gm::Min( gm::DotProduct( -normRayDir, incidentNormal ), 1.0f );
        double sinTheta = sqrt( 1.0 - cosTheta * cosTheta );
        if ( ( incidentIndex / refractedIndex ) * sinTheta > 1.0 )
        {
            gm::Vec3f reflectedDirection = Reflect( normRayDir, incidentNormal );
            o_scatteredRay               = raytrace::Ray( i_hitRecord.m_position, reflectedDirection );
            return true;
        }

        // Schlick approximation for reflections produced when the ray is at a steep angle to
        // to the geometric surface normal.
        if ( gm::RandomNumber( gm::FloatRange( 0.0f, 1.0f ) ) < Schlick( cosTheta, incidentIndex / refractedIndex ) )
        {
            gm::Vec3f reflectedDirection = Reflect( normRayDir, incidentNormal );
            o_scatteredRay               = raytrace::Ray( i_hitRecord.m_position, reflectedDirection );
            return true;
        }

        // Compute new refracted direction.
        gm::Vec3f refractedDirection = Refract( normRayDir, incidentNormal, incidentIndex, refractedIndex );

        // Assemble ray.
        o_scatteredRay = raytrace::Ray( i_hitRecord.m_position, refractedDirection );

        return true;
    }

private:
    float m_refractiveIndex = 1.0f;
};

RAYTRACE_NS_CLOSE
