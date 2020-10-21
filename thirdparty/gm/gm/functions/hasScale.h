//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/hasScale.h
/// \ingroup gm_functions_linearAlgebra
///
/// Check if a matrix has a scaling transformation.

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>

#include <gm/functions/lengthSquared.h>
#include <gm/functions/transformVector.h>

GM_NS_OPEN

/// Check if the transformation matrix \p i_matrix has a scaling factor in any dimension.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_matrix Transformation matrix.
///
/// \return If the matrix performs a scaling transformation.
///
/// \sa SetScale
GM_HOST_DEVICE inline bool HasScale( const Mat3f& i_matrix )
{
    return Vec2f( LengthSquared( TransformVector( i_matrix, Vec2f( 1, 0 ) ) ),
                  LengthSquared( TransformVector( i_matrix, Vec2f( 0, 1 ) ) ) ) != Vec2f( 1, 1 );
}

/// Check if the transformation matrix \p i_matrix has a scaling factor in any dimension.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_matrix Transformation matrix.
///
/// \return If the matrix performs a scaling transformation.
///
/// \sa SetScale
GM_HOST_DEVICE inline bool HasScale( const Mat4f& i_matrix )
{
    return Vec3f( LengthSquared( TransformVector( i_matrix, Vec3f( 1, 0, 0 ) ) ),
                  LengthSquared( TransformVector( i_matrix, Vec3f( 0, 1, 0 ) ) ),
                  LengthSquared( TransformVector( i_matrix, Vec3f( 0, 0, 1 ) ) ) ) != Vec3f( 1, 1, 1 );
}

GM_NS_CLOSE