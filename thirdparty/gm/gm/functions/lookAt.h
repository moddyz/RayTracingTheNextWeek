//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/lookAt.h
/// \ingroup gm_functions_linearAlgebra
///
/// Look-at transformation, for a left-handed coordinate system.

#include <gm/gm.h>

#include <gm/types/mat4f.h>
#include <gm/types/vec3f.h>

#include <gm/base/diagnostic.h>
#include <gm/functions/crossProduct.h>
#include <gm/functions/inverse.h>
#include <gm/functions/normalize.h>

GM_NS_OPEN

/// Construct a transformation for placing a camera in a scene provided a
/// position, look at point, and up vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_position Position of the camera.
/// \param i_look Point in space for the camera to look at.
/// \param i_up The up vector of the camera, for orientation purposes.
///
/// \return Transformation for positioning and orienting camera-space into world space.
GM_HOST_DEVICE inline Mat4f LookAt( const Vec3f& i_position, const Vec3f& i_look, const Vec3f& i_up )
{
    // Construct a 3D orthonormal basis of the camera.
    Vec3f lookDir = Normalize( i_look - i_position );
    Vec3f right   = Normalize( CrossProduct( Normalize( i_up ), lookDir ) );
    Vec3f newUp   = CrossProduct( lookDir, right );

    // Construct matrix.
    Mat4f matrix;

    // First column.
    matrix( 0, 0 ) = right.X();
    matrix( 1, 0 ) = right.Y();
    matrix( 2, 0 ) = right.Z();
    matrix( 3, 0 ) = 0;

    // Second column.
    matrix( 0, 1 ) = newUp.X();
    matrix( 1, 1 ) = newUp.Y();
    matrix( 2, 1 ) = newUp.Z();
    matrix( 3, 1 ) = 0;

    // Third column.
    matrix( 0, 2 ) = lookDir.X();
    matrix( 1, 2 ) = lookDir.Y();
    matrix( 2, 2 ) = lookDir.Z();
    matrix( 3, 2 ) = 0;

    // Fourth column.
    matrix( 0, 3 ) = i_position.X();
    matrix( 1, 3 ) = i_position.Y();
    matrix( 2, 3 ) = i_position.Z();
    matrix( 3, 3 ) = 1;

    // Return camera-to-world matrix.
    return matrix;
}

GM_NS_CLOSE