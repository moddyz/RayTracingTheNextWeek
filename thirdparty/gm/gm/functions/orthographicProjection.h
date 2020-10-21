//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/orthographicProjection.h
/// \ingroup gm_functions_linearAlgebra
///
/// Orthographic projection.
///
/// Construct an transformation matrix which projects vertices into a viewing volume.

#include <gm/gm.h>

#include <gm/types/mat4f.h>

#include <gm/functions/matrixProduct.h>
#include <gm/functions/setScale.h>
#include <gm/functions/setTranslate.h>

GM_NS_OPEN

/// Construct an orthographic projection matrix from an axis-aligned, rectilinear viewing volume.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_left Left of the viewing volume.
/// \param i_right Right of the viewing volume.
/// \param i_bottom Bottom of the viewing volume.
/// \param i_top Top of the viewing volume.
/// \param i_near Distance to the near clipping plane.
/// \param i_far Distance to the far clipping plane.
///
/// \return Orthographic projection transformation matrix.
GM_HOST_DEVICE inline Mat4f OrthographicProjection( const float& i_left,
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

    // Center viewing volume about origin, such that the scaling is applied uniformly.
    gm::Mat4f centeringXform = gm::Mat4f::Identity();
    SetTranslate( gm::Vec3f( -( i_right + i_left ) * 0.5f, -( i_top + i_bottom ) * 0.5f, -( i_far + i_near ) * 0.5f ),
                  centeringXform );

    // Scale viewing volume into a volume of min=(-1, -1, -1), max=(1, 1, 1)
    gm::Mat4f scaleXform = gm::Mat4f::Identity();
    SetScale( gm::Vec3f( 2.0f / ( i_right - i_left ), 2.0f / ( i_top - i_bottom ), 2.0f / ( i_far - i_near ) ),
              scaleXform );

    return gm::MatrixProduct( scaleXform, centeringXform );
}

GM_NS_CLOSE