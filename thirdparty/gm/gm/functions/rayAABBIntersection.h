//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/rayAABBIntersection.h
/// \ingroup gm_functions_rayTracing
///
/// Ray axis-aligned bounding box (AABB) intersection test.
///
/// \section gm_section_rayABBIntersection1DProof Solving Ray AABB intersection in one dimension
///
/// Any position \f$P\f$ along a ray is defined by the following function:
///
/// \f$(1)\f$ \f$P(t)=O+tD\f$
///
/// such that \f$O\f$ is the ray origin, \f$D\f$ the ray direction, \f$t\f$ is a zero or positive ray magnitude.
///
/// An one-dimensional AABB could be thought of as a line segment with minimum and maximum endpoints \f$(X_0,X_1)\f$.
///
/// The ray AABB intersections are the ray positions such that \f$P(t)\in{X_0,X_1}\f$.
///
/// Both unknown \f$t\f$ can be computed in the following equations:
///
/// \f$X_0=O+t_0D\f$, thus \f$t_0=\frac{X_0-O}{D}\f$
///
/// \f$X_1=O+t_1D\f$, thus \f$t_1=\frac{X_1-O}{D}\f$
///
/// If both \f$t_0\f$ and \f$t_1\f$ equates to \f$0\f$ negative numbers, then there is no intersection.
///
/// Substituting either \f$t\f$ into \f$(1)\f$ should produced the associated endpoint.
///
/// \section gm_section_rayABBIntersectionExtension Solving Ray AABB intersection in N dimensions
///
/// By using the applying 1D solution in each axis, we obtain the min and max ray magnitudes
/// which intersects the AABB on its respective axis.
///
/// For the ray to intersect the AABB in N dimensions, each of the axis intersections much overlap
/// with one another.

#include <gm/gm.h>

#include <gm/types/floatRange.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec2fRange.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec3fRange.h>
#include <gm/types/vec4f.h>
#include <gm/types/vec4fRange.h>

#include <gm/base/diagnostic.h>
#ifdef GM_DEBUG
#include <gm/base/almost.h>
#include <gm/functions/length.h>
#endif
#include <gm/functions/intersection.h>
#include <gm/functions/max.h>
#include <gm/functions/min.h>
#include <gm/functions/rayPosition.h>

GM_NS_OPEN

/// Check if a ray intersects a axis-aligned bounding box (AABB).
///
/// \param i_rayOrigin The origin of the ray.
/// \param i_rayDirection The direction of the ray.
/// \param i_aabb The axis-aligned bounding box.
/// \param o_intersections The output ray magnitudes intersecting the AABB.
/// If there are no intersections, then o_intersections will be undefined.
///
/// \retval true The ray intersects the AABB.
/// \retval false The ray does not intersect the AABB.
GM_HOST_DEVICE inline bool RayAABBIntersection( const Vec2f&      i_rayOrigin,
                                                const Vec2f&      i_rayDirection,
                                                const Vec2fRange& i_aabb,
                                                FloatRange&       o_intersections )
{
    GM_ASSERT_MSG( AlmostEqual( Length( i_rayDirection ), 1.0f ), "Direction i_rayDirection is not normalised!" );

    // Initialize intersection magnitudes to ray limits.
    o_intersections.Min() = 0.0f;
    o_intersections.Max() = std::numeric_limits< float >::max();

    // Compute local minimum & maximum magnitudes for axis 0, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 0 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 0 ] - i_rayOrigin[ 0 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 0 ] - i_rayOrigin[ 0 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    // Compute local minimum & maximum magnitudes for axis 1, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 1 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 1 ] - i_rayOrigin[ 1 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 1 ] - i_rayOrigin[ 1 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    return true;
}

/// Check if a ray intersects a axis-aligned bounding box (AABB).
///
/// \param i_rayOrigin The origin of the ray.
/// \param i_rayDirection The direction of the ray.
/// \param i_aabb The axis-aligned bounding box.
/// \param o_intersections The output ray magnitudes intersecting the AABB.
/// If there are no intersections, then o_intersections will be undefined.
///
/// \retval true The ray intersects the AABB.
/// \retval false The ray does not intersect the AABB.
GM_HOST_DEVICE inline bool RayAABBIntersection( const Vec3f&      i_rayOrigin,
                                                const Vec3f&      i_rayDirection,
                                                const Vec3fRange& i_aabb,
                                                FloatRange&       o_intersections )
{
    GM_ASSERT_MSG( AlmostEqual( Length( i_rayDirection ), 1.0f ), "Direction i_rayDirection is not normalised!" );

    // Initialize intersection magnitudes to ray limits.
    o_intersections.Min() = 0.0f;
    o_intersections.Max() = std::numeric_limits< float >::max();

    // Compute local minimum & maximum magnitudes for axis 0, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 0 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 0 ] - i_rayOrigin[ 0 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 0 ] - i_rayOrigin[ 0 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    // Compute local minimum & maximum magnitudes for axis 1, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 1 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 1 ] - i_rayOrigin[ 1 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 1 ] - i_rayOrigin[ 1 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    // Compute local minimum & maximum magnitudes for axis 2, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 2 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 2 ] - i_rayOrigin[ 2 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 2 ] - i_rayOrigin[ 2 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    return true;
}

/// Check if a ray intersects a axis-aligned bounding box (AABB).
///
/// \param i_rayOrigin The origin of the ray.
/// \param i_rayDirection The direction of the ray.
/// \param i_aabb The axis-aligned bounding box.
/// \param o_intersections The output ray magnitudes intersecting the AABB.
/// If there are no intersections, then o_intersections will be undefined.
///
/// \retval true The ray intersects the AABB.
/// \retval false The ray does not intersect the AABB.
GM_HOST_DEVICE inline bool RayAABBIntersection( const Vec4f&      i_rayOrigin,
                                                const Vec4f&      i_rayDirection,
                                                const Vec4fRange& i_aabb,
                                                FloatRange&       o_intersections )
{
    GM_ASSERT_MSG( AlmostEqual( Length( i_rayDirection ), 1.0f ), "Direction i_rayDirection is not normalised!" );

    // Initialize intersection magnitudes to ray limits.
    o_intersections.Min() = 0.0f;
    o_intersections.Max() = std::numeric_limits< float >::max();

    // Compute local minimum & maximum magnitudes for axis 0, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 0 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 0 ] - i_rayOrigin[ 0 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 0 ] - i_rayOrigin[ 0 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    // Compute local minimum & maximum magnitudes for axis 1, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 1 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 1 ] - i_rayOrigin[ 1 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 1 ] - i_rayOrigin[ 1 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    // Compute local minimum & maximum magnitudes for axis 2, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 2 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 2 ] - i_rayOrigin[ 2 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 2 ] - i_rayOrigin[ 2 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    // Compute local minimum & maximum magnitudes for axis 3, to intersect (find overlap)
    // against other axis.
    {
        float inverseAxisDir = 1.0f / i_rayDirection[ 3 ];

        gm::FloatRange axisIntersections( ( i_aabb.Min()[ 3 ] - i_rayOrigin[ 3 ] ) * inverseAxisDir,
                                          ( i_aabb.Max()[ 3 ] - i_rayOrigin[ 3 ] ) * inverseAxisDir );

        // Handle negative ray direction on this particular axis.
        if ( inverseAxisDir < 0.0f )
        {
            std::swap( axisIntersections.Min(), axisIntersections.Max() );
        }

        // Find the intersection of the local axis and global magnitudes.  This "narrows" the bounded region.
        o_intersections = gm::Intersection( o_intersections, axisIntersections );

        // If there is no overlap, then intersections will be empty.
        if ( o_intersections.IsEmpty() )
        {
            return false;
        }
    }

    return true;
}

GM_NS_CLOSE