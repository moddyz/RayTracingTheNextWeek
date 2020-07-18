#pragma once

/// \file raytrace/bvh.h
///
/// Bounding volume hierarchy acceleration structure.

#include <raytrace/hitRecord.h>
#include <raytrace/sceneObject.h>

#include <gm/functions/expand.h>
#include <gm/functions/intersection.h>
#include <gm/functions/rayAABBIntersection.h>

#include <iostream>

RAYTRACE_NS_OPEN

/// \class BVHNode
///
/// BVHNode is a single node in the bounding volume hierarchy.
///
/// Constructing a root BVHNode with an array of SceneObject(s) will result in the recursive
/// construction of the BVH tree, with the leaf nodes representing the original SceneObject(s).
///
/// BVH is represented as a binary tree, so each BVHNode has \em left & \em right children.
///
/// This BVH utilizes a spatial partioning strategy, by \em evenly splitting the input volume across
/// its \em longest axis, then partitioning the objects into either of the halves.
///
/// TODO: Needs a re-write from spatial paritioning strategy into sorted object partitioning.
class BVHNode : public SceneObject
{
public:
    /// Explicit construction of a BVH from a collection of SceneObject(s) and time samples.
    ///
    /// \param i_sceneObjects Scene objects to build the BVH for.
    /// \param i_times Time samples to compute extents for.
    inline explicit BVHNode( const SceneObjectPtrs& i_sceneObjects, const std::vector< float >& i_times )
    {
        // Compute extent of all the objects, including the aggregate extent for this node.
        std::vector< gm::Vec3fRange > objectExtents;
        _ComputeExtentForObjects( i_sceneObjects, i_times, m_extent, objectExtents );

        // Special case handling for 0, 1 or 2 scene objects (Recursion termination).
        if ( i_sceneObjects.empty() )
        {
            return;
        }
        else if ( i_sceneObjects.size() == 1 )
        {
            // A single leaf.
            m_left = i_sceneObjects[ 0 ];
            return;
        }
        else if ( i_sceneObjects.size() == 2 )
        {
            // Two leaves.
            m_left  = i_sceneObjects[ 0 ];
            m_right = i_sceneObjects[ 1 ];
            return;
        }

        // Split the extent/volume into even halves, across its longest axis.
        gm::Vec3fRange leftExtent, rightExtent;
        int            longestAxis = _SplitExtentForLongestAxis( m_extent, leftExtent, rightExtent );

        // Partition objects into left & right volumes.
        SceneObjectPtrs leftObjects, rightObjects;
        _PartitionObjectsByVolume( i_sceneObjects, objectExtents, leftExtent, rightExtent, leftObjects, rightObjects );

        // If longest axis partitioning failed, try other axis.
        if ( leftObjects.empty() || rightObjects.empty() )
        {
            for ( int axis = 0; axis < 3; ++axis )
            {
                if ( axis == longestAxis )
                {
                    continue;
                }

                _SplitExtentForAxis( m_extent, axis, leftExtent, rightExtent );
                _PartitionObjectsByVolume( i_sceneObjects,
                                           objectExtents,
                                           leftExtent,
                                           rightExtent,
                                           leftObjects,
                                           rightObjects );

                if ( !leftObjects.empty() && !rightObjects.empty() )
                {
                    break;
                }
            }
        }

        if ( leftObjects.empty() || rightObjects.empty() )
        {
            _PartitionObjectsByIndex( i_sceneObjects, leftObjects, rightObjects );
        }

        // Recursively construct descendents with left & right object partitions.
        m_left  = std::make_shared< BVHNode >( leftObjects, i_times );
        m_right = std::make_shared< BVHNode >( rightObjects, i_times );
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
        bool hitLeft = false;
        if ( m_left )
        {
            hitLeft = m_left->Hit( i_ray, i_magnitudeRange, o_record );
        }

        // Test right node intersection.
        bool hitRight = false;
        if ( m_right )
        {
            gm::FloatRange rightMagnitudeRange = i_magnitudeRange;
            if ( hitLeft )
            {
                rightMagnitudeRange.Max() = o_record.m_magnitude;
            }
            hitRight = m_right->Hit( i_ray, rightMagnitudeRange, o_record );
        }

        return hitLeft || hitRight;
    }

    virtual gm::Vec3fRange Extent( const std::vector< float >& i_times ) const override
    {
        return m_extent;
    }

private:
    // Compute the extent for a collection of scene objects.
    static void _ComputeExtentForObjects( const SceneObjectPtrs&         i_sceneObjects,
                                          const std::vector< float >&    i_times,
                                          gm::Vec3fRange&                o_extent,
                                          std::vector< gm::Vec3fRange >& o_objectExtents )
    {
        o_objectExtents.clear();
        o_objectExtents.reserve( i_sceneObjects.size() );
        for ( SceneObjectPtr obj : i_sceneObjects )
        {
            gm::Vec3fRange objectExtent = obj->Extent( i_times );
            o_extent                    = gm::Expand( o_extent, objectExtent );
            o_objectExtents.push_back( objectExtent );
        }
    }

    // Partition an input extent into left & right extents, by splitting the input
    // across its longest axis.
    static int _SplitExtentForLongestAxis( const gm::Vec3fRange& i_extent,
                                           gm::Vec3fRange&       o_leftExtent,
                                           gm::Vec3fRange&       o_rightExtent )
    {
        // Compute longest axis of the full extent, used to divide the volume.
        int   longestAxis       = -1;
        float longestAxisLength = std::numeric_limits< float >::min();
        for ( int axis = 0; axis < 3; ++axis )
        {
            float axisLength = i_extent.Max()[ axis ] - i_extent.Min()[ axis ];
            GM_ASSERT( axisLength >= 0 );
            if ( axisLength > longestAxisLength )
            {
                longestAxis       = axis;
                longestAxisLength = axisLength;
            }
        }

        _SplitExtentForAxis( i_extent, longestAxis, o_leftExtent, o_rightExtent );
        return longestAxis;
    }

    // Partition an extent in a given axis, into left and right halves.
    static void _SplitExtentForAxis( const gm::Vec3fRange& i_extent,
                                     int                   i_axis,
                                     gm::Vec3fRange&       o_leftExtent,
                                     gm::Vec3fRange&       o_rightExtent )
    {
        // Midpoint coordinate of the longest axis.
        float midAxis = ( i_extent.Min()[ i_axis ] + i_extent.Max()[ i_axis ] ) / 2.0f;

        // Compute new left extent.
        gm::Vec3f leftMax = i_extent.Max();
        leftMax[ i_axis ] = midAxis;
        o_leftExtent      = gm::Vec3fRange( i_extent.Min(), leftMax );

        // Compute new right extent.
        gm::Vec3f rightMin = i_extent.Min();
        rightMin[ i_axis ] = midAxis;
        o_rightExtent      = gm::Vec3fRange( rightMin, i_extent.Max() );
    }

    // Partition objects based on their extents into left & right buckets.
    //
    // TODO: We can make this more memory efficient by freeing the intermediate left & right
    // collections, and performing in-place sort on the input scene object array (would need to make it mutable).
    static void _PartitionObjectsByVolume( const SceneObjectPtrs&               i_sceneObjects,
                                           const std::vector< gm::Vec3fRange >& i_objectExtents,
                                           const gm::Vec3fRange&                i_leftExtent,
                                           const gm::Vec3fRange&                i_rightExtent,
                                           SceneObjectPtrs&                     o_leftObjects,
                                           SceneObjectPtrs&                     o_rightObjects )
    {
        o_leftObjects.clear();
        o_rightObjects.clear();
        o_leftObjects.reserve( i_sceneObjects.size() );
        o_rightObjects.reserve( i_sceneObjects.size() );
        for ( size_t objectIndex = 0; objectIndex < i_sceneObjects.size(); ++objectIndex )
        {
            gm::Vec3fRange leftIntersection  = gm::Intersection( i_leftExtent, i_objectExtents[ objectIndex ] );
            gm::Vec3fRange rightIntersection = gm::Intersection( i_rightExtent, i_objectExtents[ objectIndex ] );

            if ( _Volume( leftIntersection ) > _Volume( rightIntersection ) )
            {
                o_leftObjects.push_back( i_sceneObjects[ objectIndex ] );
            }
            else
            {
                o_rightObjects.push_back( i_sceneObjects[ objectIndex ] );
            }
        }
        o_leftObjects.shrink_to_fit();
        o_rightObjects.shrink_to_fit();
    }

    static void _PartitionObjectsByIndex( const SceneObjectPtrs& i_sceneObjects,
                                          SceneObjectPtrs&       o_leftObjects,
                                          SceneObjectPtrs&       o_rightObjects )
    {
        o_leftObjects.clear();
        o_rightObjects.clear();
        o_leftObjects.reserve( ( i_sceneObjects.size() / 2 ) + 1 );
        o_rightObjects.reserve( ( i_sceneObjects.size() / 2 ) + 1 );
        for ( size_t index = 0; index < i_sceneObjects.size(); ++index )
        {
            if ( index % 2 == 0 )
            {
                o_leftObjects.push_back( i_sceneObjects[ index ] );
            }
            else
            {
                o_rightObjects.push_back( i_sceneObjects[ index ] );
            }
        }
    }

    // Private utility for computing the volume from an 3D extent.
    // TODO: Re-factor into GraphicsMath.  What is the generalized term for volume for N dimensional vectors?
    static float _Volume( const gm::Vec3fRange& i_range )
    {
        if ( i_range.IsEmpty() )
        {
            return 0;
        }

        return ( i_range.Max()[ 0 ] - i_range.Min()[ 0 ] ) * ( i_range.Max()[ 1 ] - i_range.Min()[ 1 ] ) *
               ( i_range.Max()[ 2 ] - i_range.Min()[ 2 ] );
    }

    // Cached extent, encompassing the extent from both left & right nodes.
    gm::Vec3fRange m_extent;

    // Left & right nodes.
    SceneObjectPtr m_left;
    SceneObjectPtr m_right;
};

RAYTRACE_NS_CLOSE
