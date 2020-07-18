#pragma once

/// \file raytrace/sphere.h
///
/// Representation of a box geometry or cuboid.

#include <raytrace/attribute.h>
#include <raytrace/hitRecord.h>
#include <raytrace/material.h>
#include <raytrace/ray.h>
#include <raytrace/sceneObject.h>

#include <gm/base/constants.h>

#include <gm/functions/abs.h>
#include <gm/functions/contains.h>
#include <gm/functions/expand.h>
#include <gm/functions/normalize.h>
#include <gm/functions/rayAABBIntersection.h>
#include <gm/functions/rayPosition.h>

RAYTRACE_NS_OPEN

/// \class Box
///
/// Box is a 3D rectilinear geometric surface with 6 sides.
class Box : public SceneObject
{
public:
    /// Construct a static box with origin and dimensions.
    ///
    /// \param i_origin The origin of the box.
    /// \param i_dimensions The dimension lengths of th box.
    /// \param i_material Optional material assigned to the sphere.
    inline explicit Box( const gm::Vec3f& i_origin, const gm::Vec3f& i_dimensions, MaterialSharedPtr i_material )
        : m_origin( {{0, i_origin}} )
        , m_dimensions( {{0, i_dimensions}} )
        , m_material( i_material )
    {
    }

    /// Construct a box with origin and dimensions.
    ///
    /// \param i_origin The origin of the box.
    /// \param i_dimensions The dimension lengths of th box.
    /// \param i_material Optional material assigned to the sphere.
    inline explicit Box( const Attribute< gm::Vec3f >& i_origin,
                         const Attribute< gm::Vec3f >& i_dimensions,
                         MaterialSharedPtr             i_material )
        : m_origin( i_origin )
        , m_dimensions( i_dimensions )
        , m_material( i_material )
    {
    }

    virtual inline bool
    Hit( const raytrace::Ray& i_ray, const gm::FloatRange& i_magnitudeRange, HitRecord& o_record ) const override
    {
        gm::FloatRange intersections;
        if ( gm::RayAABBIntersection( i_ray.Origin(), i_ray.Direction(), _ComputeAABB( i_ray.Time() ), intersections ) )
        {
            if ( gm::Contains( i_magnitudeRange, intersections.Min() ) )
            {
                _RecordHit( i_ray, intersections.Min(), o_record );
                return true;
            }
            else if ( gm::Contains( i_magnitudeRange, intersections.Max() ) )
            {
                _RecordHit( i_ray, intersections.Max(), o_record );
                return true;
            }
        }

        return false;
    }

    virtual gm::Vec3fRange Extent( const std::vector< float >& i_times ) const override
    {
        gm::Vec3fRange extent;
        for ( float time : i_times )
        {
            extent = gm::Expand( extent, _ComputeAABB( time ) );
        }
        return extent;
    }

private:
    // Compute an axis-aligned bounding box based on box origin and dimensions.
    gm::Vec3fRange _ComputeAABB( float i_time ) const
    {
        gm::Vec3f halfDims = m_dimensions.Value( i_time ) * 0.5f;
        gm::Vec3f origin   = m_origin.Value( i_time );
        return gm::Vec3fRange( origin - halfDims, origin + halfDims );
    }

    // Helper method to record a ray hitting the box.
    inline void _RecordHit( const raytrace::Ray& i_ray, float i_rayMagnitude, HitRecord& o_record ) const
    {
        o_record.m_position = gm::RayPosition( i_ray.Origin(), i_ray.Direction(), i_rayMagnitude );
        _ComputeNormalAndUV( o_record.m_position, i_ray.Time(), o_record.m_normal, o_record.m_uv );
        o_record.m_magnitude = i_rayMagnitude;
        o_record.m_material  = m_material;
    }

    // Helper method to compute the normal of the hit, based on position.
    inline void
    _ComputeNormalAndUV( const gm::Vec3f& i_hitPosition, float i_time, gm::Vec3f& o_normal, gm::Vec2f& o_uv ) const
    {
        gm::Vec3f origin      = m_origin.Value( i_time );
        gm::Vec3f dimensions  = m_dimensions.Value( i_time );
        gm::Vec3f originToHit = i_hitPosition - origin;

        // Divide originToHit by dimensions to remove length bias.
        originToHit.X() /= ( dimensions.X() * 0.5f );
        originToHit.Y() /= ( dimensions.Y() * 0.5f );
        originToHit.Z() /= ( dimensions.Z() * 0.5f );

        // Choose longest axis as normal.
        gm::Vec3f originToHitAbs = gm::Abs( originToHit );
        if ( originToHitAbs.X() > originToHitAbs.Y() && originToHitAbs.X() > originToHitAbs.Z() )
        {
            o_normal = gm::Normalize( gm::Vec3f( originToHit.X(), 0, 0 ) );
            o_uv     = gm::Vec2f( origin.Y(), origin.Z() );
        }
        else if ( originToHitAbs.Y() > originToHitAbs.X() && originToHitAbs.Y() > originToHitAbs.Z() )
        {
            o_normal = gm::Normalize( gm::Vec3f( 0, originToHit.Y(), 0 ) );
            o_uv     = gm::Vec2f( origin.X(), origin.Z() );
        }
        else
        {
            o_normal = gm::Normalize( gm::Vec3f( 0, 0, originToHit.Z() ) );
            o_uv     = gm::Vec2f( origin.X(), origin.Y() );
        }

        if ( o_uv.X() < 0 )
        {
            o_uv.X() = 1.0f - o_uv.X();
        }

        if ( o_uv.Y() < 0 )
        {
            o_uv.Y() = 1.0f - o_uv.Y();
        }
    }

    // Attributes.
    Attribute< gm::Vec3f > m_origin;
    Attribute< gm::Vec3f > m_dimensions;

    // Material assignment.
    MaterialSharedPtr m_material;
};

RAYTRACE_NS_CLOSE
