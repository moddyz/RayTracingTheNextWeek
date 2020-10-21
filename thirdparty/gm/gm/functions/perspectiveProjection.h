//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/perspectiveProjection.h
/// \ingroup gm_functions_linearAlgebra
///
/// Perspective projection.
///
/// Construct an transformation matrix which projects vertices into a viewing surface (the near plane),
/// with a sense of depth.  The transformation is based on a left-handed coordinate system.

#include <gm/gm.h>

#include <gm/types/mat4f.h>

#include <gm/functions/matrixProduct.h>
#include <gm/functions/radians.h>

GM_NS_OPEN

/// Construct an perspective projection matrix from a frustum specification.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_left Left of the near clipping plane.
/// \param i_right Right of the near clipping plane.
/// \param i_bottom Bottom of the near clipping plane.
/// \param i_top Top of the near clipping plane.
/// \param i_near Distance to the near clipping plane.
/// \param i_far Distance to the far clipping plane.
///
/// \return Perspective projection transformation matrix.
GM_HOST_DEVICE inline Mat4f PerspectiveProjection( const float& i_left,
                                                   const float& i_right,
                                                   const float& i_bottom,
                                                   const float& i_top,
                                                   const float& i_near,
                                                   const float& i_far )
{
    GM_ASSERT( i_left >= 0.0f );
    GM_ASSERT( i_right >= i_left );
    GM_ASSERT( i_bottom >= 0.0f );
    GM_ASSERT( i_top >= i_bottom );
    GM_ASSERT( i_near >= 0.0f );
    GM_ASSERT( i_far >= i_near );

    // Move frustum to origin.
    // Translate x and y by midpoint lengths.
    Mat4f translateXform   = Mat4f::Identity();
    translateXform( 0, 3 ) = -( i_right + i_left ) * 0.5f;
    translateXform( 1, 3 ) = -( i_top + i_bottom ) * 0.5f;

    // Non-linear scaling of z-values into a range [-1, 1], such that
    // vertices closer to the camera has more precision.
    float c1                = 2.0 * i_far * i_near / ( i_near - i_far );
    float c2                = ( i_far + i_near ) / ( i_far - i_near );
    Mat4f depthScaleXform   = Mat4f::Identity();
    depthScaleXform( 2, 2 ) = -c2;
    depthScaleXform( 2, 3 ) = c1;
    depthScaleXform( 3, 2 ) = 1.0f; // Left handed!
    depthScaleXform( 3, 3 ) = 0.0f;

    // Perspective calculation.
    // The x and y values are projected onto the near clipping plane
    // as x' and y', where:
    // x' = x * near / z
    // y' = y * near / z
    Mat4f projectionXform   = Mat4f::Identity();
    projectionXform( 0, 0 ) = i_near;
    projectionXform( 1, 1 ) = i_near;

    // Scale 2D viewing window to a 2x2 square (centered at origin).
    Mat4f scaleXform   = Mat4f::Identity();
    scaleXform( 0, 0 ) = 2.0f / ( i_right - i_left );
    scaleXform( 1, 1 ) = 2.0f / ( i_top - i_bottom );

    return MatrixProduct( scaleXform,
                          MatrixProduct( projectionXform, MatrixProduct( depthScaleXform, translateXform ) ) );
}

/// Construct an perspective projection matrix from field of view, aspect ratio, and clipping distances.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_fieldOfView The vertical angle, in degrees, of the camera lens.
/// \param i_aspectRatio The ratio of the width to the height of the viewing plane.
/// \param i_near Distance to the near clipping plane.
/// \param i_far Distance to the near far clipping plane.
///
/// \return Orthographic projection transformation matrix.
GM_HOST_DEVICE inline Mat4f
PerspectiveProjection( const float& i_fieldOfView, const float& i_aspectRatio, const float& i_near, const float& i_far )
{
    GM_ASSERT( i_fieldOfView > 0.0f );
    GM_ASSERT( i_aspectRatio > 0.0f );

    // Compute the frustum values.
    float fovRadians = Radians( i_fieldOfView );
    float top        = i_near * tan( fovRadians / 2.0f );
    float bottom     = -top;
    float right      = top * i_aspectRatio;
    float left       = -right;
    return PerspectiveProjection( left, right, bottom, top, i_near, i_far );
}

GM_NS_CLOSE