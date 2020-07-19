#pragma once

/// \file raytrace/objectBVH.h
///
/// Bounding volume hierarchy acceleration structure based on object partioning.

#include <raytrace/hitRecord.h>
#include <raytrace/sceneObject.h>

#include <gm/types/intRange.h>

#include <gm/functions/expand.h>
#include <gm/functions/intersection.h>
#include <gm/functions/rayAABBIntersection.h>

#include <iostream>

RAYTRACE_NS_OPEN

/// Functor for comparing two objects based on their computed extents minima for a
/// specified axis \p axis.
class ObjectExtentComparison
{
public:
    ObjectExtentComparison( int i_axis, const std::vector< float >& i_times )
        : m_axis( i_axis )
        , m_times( i_times )
    {
    }

    bool operator()( const SceneObjectPtr& i_objectA, const SceneObjectPtr& i_objectB )
    {
        return i_objectA->Extent( m_times ).Min()[ m_axis ] < i_objectB->Extent( m_times ).Min()[ m_axis ];
    }

private:
    int                         m_axis = 0;
    const std::vector< float >& m_times;
};

/// \class ObjectBVHNode
///
/// ObjectBVHNode is a single node in the bounding volume hierarchy.
///
/// Constructing a root ObjectBVHNode with an array of SceneObject(s) will result in the recursive
/// construction of the BVH tree, with the leaf nodes representing the original SceneObject(s).
///
/// BVH is represented as a binary tree, so each ObjectBVHNode has \em left & \em right children.
///
/// This BVH utilizes a object-based partioning strategy, by sorting the object range
/// based on their extent minima with respect to a randomly chosen axis then splitting down the middle.
class ObjectBVHNode : public SceneObject
{
public:
    /// Build a BVH tree from from a collection of scene objects.
    ///
    /// \param i_sceneObjects Scene objects to build the BVH for.
    /// \param i_times Time samples to compute extents for.
    static inline SceneObjectPtr Build( const SceneObjectPtrs& i_sceneObjects, const std::vector< float >& i_times )
    {
        // Make a copy for sorting purposes.
        SceneObjectPtrs sceneObjects = i_sceneObjects;
        return std::make_shared< ObjectBVHNode >( i_times, gm::IntRange( 0, sceneObjects.size() ), sceneObjects );
    }

    /// Recursive constructor for building the bounding volume hierarchy.
    inline explicit ObjectBVHNode( const std::vector< float >& i_times,
                                   const gm::IntRange&         i_objectRange,
                                   SceneObjectPtrs&            o_sceneObjects )
    {
        m_extent = _ComputeExtentForObjects( i_objectRange, o_sceneObjects, i_times );

        // Special case handling for 0, 1 or 2 scene objects (Recursion termination).
        size_t objectCount = i_objectRange.Max() - i_objectRange.Min();
        if ( objectCount == 1 )
        {
            m_left = m_right = o_sceneObjects[ i_objectRange.Min() ];
            return;
        }
        else if ( objectCount == 2 )
        {
            // Two leaves.
            m_left  = o_sceneObjects[ i_objectRange.Min() ];
            m_right = o_sceneObjects[ i_objectRange.Min() + 1 ];
            return;
        }

        // Choose a random axis.
        int randomAxis = gm::RandomNumber( gm::IntRange( 0, 3 ) );
        std::sort( o_sceneObjects.begin() + i_objectRange.Min(),
                   o_sceneObjects.begin() + i_objectRange.Max(),
                   ObjectExtentComparison( randomAxis, i_times ) );

        // Split object range into left and right parts.
        int midObjectIndex = i_objectRange.Min() + objectCount / 2;

        // Recursively construct left & right.
        m_left  = std::make_shared< ObjectBVHNode >( i_times,
                                                    gm::IntRange( i_objectRange.Min(), midObjectIndex ),
                                                    o_sceneObjects );
        m_right = std::make_shared< ObjectBVHNode >( i_times,
                                                     gm::IntRange( midObjectIndex, i_objectRange.Max() ),
                                                     o_sceneObjects );
    }

    // Compute the extent containing a collection of scene objects.
    static gm::Vec3fRange _ComputeExtentForObjects( const gm::IntRange&         i_objectRange,
                                                    const SceneObjectPtrs&      i_sceneObjects,
                                                    const std::vector< float >& i_times )
    {
        gm::Vec3fRange extent;
        for ( int objectIndex : i_objectRange )
        {
            gm::Vec3fRange objectExtent = i_sceneObjects[ objectIndex ]->Extent( i_times );
            extent                      = gm::Expand( extent, objectExtent );
        }
        return extent;
    }

    virtual inline bool
    Hit( const raytrace::Ray& i_ray, const gm::FloatRange& i_magnitudeRange, HitRecord& o_record ) const override
    {
        // Test extent intersection.
        gm::FloatRange intersections;
        if ( !gm::RayAABBIntersection( i_ray.Origin(), i_ray.Direction(), m_extent, intersections ) )
        {
            return false;
        }

        // If the nearest intersection is farther than the maximum allowed range, early out.
        if ( intersections.Min() > i_magnitudeRange.Max() )
        {
            return false;
        }

        // Test left node intersection.
        bool hitLeft = m_left->Hit( i_ray, i_magnitudeRange, o_record );

        // Test right node intersection.
        gm::FloatRange rightMagnitudeRange = i_magnitudeRange;
        if ( hitLeft )
        {
            rightMagnitudeRange.Max() = o_record.m_magnitude;
        }
        bool hitRight = m_right->Hit( i_ray, rightMagnitudeRange, o_record );

        return hitLeft || hitRight;
    }

    virtual gm::Vec3fRange Extent( const std::vector< float >& i_times ) const override
    {
        return m_extent;
    }

    // Cached extent, encompassing the extent from both left & right nodes.
    gm::Vec3fRange m_extent;

    // Left & right nodes.
    SceneObjectPtr m_left;
    SceneObjectPtr m_right;
};

RAYTRACE_NS_CLOSE
