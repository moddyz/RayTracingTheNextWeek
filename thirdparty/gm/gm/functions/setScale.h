//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/setScale.h
/// \ingroup gm_functions_linearAlgebra
///
/// Set a scaling transform on a transformation matrix.
///
/// The scale vector \f$S=(S_x,S_y,S_z)\f$ set on a \p 4 by \p 4 identity matrix \f$I\f$ will produce:
/// \f[
/// \begin{bmatrix}
/// S_x    & 0      & 0       & 0      \\
/// 0      & S_y    & 0       & 0      \\
/// 0      & 0      & S_z     & 0      \\
/// 0      & 0      & 0       & 1
/// \end{bmatrix}
/// \f]

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>

GM_NS_OPEN

/// Set the scale \p i_vector onto the transformation matrix \p o_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector Scale vector.
/// \param o_matrix Transformation matrix.
GM_HOST_DEVICE inline void SetScale( const Vec2f& i_vector, Mat3f& o_matrix )
{
    o_matrix( 0, 0 ) = i_vector[ 0 ];
    o_matrix( 1, 1 ) = i_vector[ 1 ];
}

/// Set the scale \p i_vector onto the transformation matrix \p o_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector Scale vector.
/// \param o_matrix Transformation matrix.
GM_HOST_DEVICE inline void SetScale( const Vec3f& i_vector, Mat4f& o_matrix )
{
    o_matrix( 0, 0 ) = i_vector[ 0 ];
    o_matrix( 1, 1 ) = i_vector[ 1 ];
    o_matrix( 2, 2 ) = i_vector[ 2 ];
}

GM_NS_CLOSE