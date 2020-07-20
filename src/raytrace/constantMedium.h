#pragma once

/// \file raytrace/constantMedium.h
///
/// Representation of a constant density medium.

#include <raytrace/attribute.h>
#include <raytrace/hitRecord.h>
#include <raytrace/isotropic.h>
#include <raytrace/material.h>
#include <raytrace/ray.h>
#include <raytrace/sceneObject.h>
#include <raytrace/texture.h>

#include <gm/base/constants.h>

#include <gm/functions/contains.h>
#include <gm/functions/rayPosition.h>
#include <gm/functions/raySphereIntersection.h>

RAYTRACE_NS_OPEN

/// \class ConstantMedium
///
/// ConstantMedium transforms an associated geometry into a medium with a specified constant density,
/// such that rays have a probablistic chance to travel through the medium and hit a particulate,
/// after a certain distance.
class ConstantMedium : public SceneObject
{
public:
    /// Construct a static constant medium with associated geometry, density, and volumetric material.
    ///
    /// \param i_geometry The associated geometry to use visualize as a volume.
    /// \param i_density The density (how compact the particles are) of this volume.
    /// \param i_texture The texture associated with this volume.
    inline explicit ConstantMedium( const SceneObjectPtr&   i_geometry,
                                    float                   i_density,
                                    const TextureSharedPtr& i_texture )
        : m_geometry( i_geometry )
        , m_material( std::make_shared< Isotropic >( i_texture ) )
        , m_negInverseDensity( {{0, -1.0f / i_density}} )
    {
    }

    virtual inline bool
    Hit( const raytrace::Ray& i_ray, const gm::FloatRange& i_magnitudeRange, HitRecord& o_record ) const override
    {
        // First hit test.
        HitRecord      firstHit;
        gm::FloatRange infiniteRange( std::numeric_limits< float >::min(), std::numeric_limits< float >::max() );
        if ( !m_geometry->Hit( i_ray, infiniteRange, firstHit ) )
        {
            return false;
        }

        // Second hit test.
        HitRecord      secondHit;
        gm::FloatRange volumeRange( firstHit.m_magnitude + 0.0001, std::numeric_limits< float >::max() );
        if ( !m_geometry->Hit( i_ray, volumeRange, secondHit ) )
        {
            return false;
        }

        // Check if the two hits are within magnitude limits.
        if ( !gm::Contains( i_magnitudeRange, gm::FloatRange( firstHit.m_magnitude, secondHit.m_magnitude ) ) )
        {
            return false;
        }

        GM_ASSERT( firstHit.m_magnitude >= 0 );
        GM_ASSERT( secondHit.m_magnitude >= 0 );

        // Compute distance that the ray travels within the geometry.
        float distanceWithinGeometry =
            ( secondHit.m_magnitude - firstHit.m_magnitude ) * gm::Length( i_ray.Direction() );

        // Compute a random distance, based on probability as a function of the density.
        float randomHitDistance =
            m_negInverseDensity.Value( i_ray.Time() ) * log( gm::RandomNumber( gm::FloatRange( 0, 1 ) ) );

        // Ray does not hit any other particles in this medium.
        if ( randomHitDistance > distanceWithinGeometry )
        {
            return false;
        }

        // Record volume hit.
        o_record.m_magnitude = firstHit.m_magnitude + randomHitDistance * gm::Length( i_ray.Direction() );
        o_record.m_position  = gm::RayPosition( i_ray.Origin(), i_ray.Direction(), o_record.m_magnitude );
        o_record.m_normal    = gm::Vec3f( 0, 1, 0 ); // Arbituary - un-used by current materials.
        o_record.m_material  = m_material;

        return true;
    }

    virtual inline gm::Vec3fRange Extent( const std::vector< float >& i_times ) const override
    {
        return m_geometry->Extent( i_times );
    }

private:
    SceneObjectPtr     m_geometry;
    MaterialSharedPtr  m_material;
    Attribute< float > m_negInverseDensity;
};

RAYTRACE_NS_CLOSE
