//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/transformAABB.h
/// \ingroup gm_functions_linearAlgebra
///
/// Axis-aligned bounding box (AABB) transformation.
///
/// The 8 points forming the AABB are individually transformed, then a new AABB is expanded
/// based on the 6 points.

#include <gm/gm.h>

#include <gm/types/mat4f.h>
#include <gm/types/vec3fRange.h>

#include <gm/functions/expand.h>
#include <gm/functions/transformPoint.h>

GM_NS_OPEN

/// Transform an axis-aligned bounding box \p i_aabb with the transformation matrix \p i_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_matrix The transformation matrix.
/// \param i_aabb The axis-aligned bounding box to transform.
///
/// \return Transformed axis-aligned bounding box.
GM_HOST_DEVICE inline Vec3fRange TransformAABB( const Mat4f& i_matrix, const Vec3fRange& i_aabb )
{
    Vec3fRange newAABB;
    newAABB = Expand( newAABB, TransformPoint( i_matrix, i_aabb.Min() ) );
    newAABB =
        Expand( newAABB, TransformPoint( i_matrix, Vec3f( i_aabb.Min()[ 0 ], i_aabb.Min()[ 1 ], i_aabb.Max()[ 2 ] ) ) );
    newAABB =
        Expand( newAABB, TransformPoint( i_matrix, Vec3f( i_aabb.Min()[ 0 ], i_aabb.Max()[ 1 ], i_aabb.Min()[ 2 ] ) ) );
    newAABB =
        Expand( newAABB, TransformPoint( i_matrix, Vec3f( i_aabb.Min()[ 0 ], i_aabb.Max()[ 1 ], i_aabb.Max()[ 2 ] ) ) );
    newAABB =
        Expand( newAABB, TransformPoint( i_matrix, Vec3f( i_aabb.Max()[ 0 ], i_aabb.Min()[ 1 ], i_aabb.Min()[ 2 ] ) ) );
    newAABB =
        Expand( newAABB, TransformPoint( i_matrix, Vec3f( i_aabb.Max()[ 0 ], i_aabb.Max()[ 1 ], i_aabb.Min()[ 2 ] ) ) );
    newAABB =
        Expand( newAABB, TransformPoint( i_matrix, Vec3f( i_aabb.Max()[ 0 ], i_aabb.Max()[ 1 ], i_aabb.Max()[ 2 ] ) ) );
    return Expand( newAABB, TransformPoint( i_matrix, i_aabb.Max() ) );
}

GM_NS_CLOSE