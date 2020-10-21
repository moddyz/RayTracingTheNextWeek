//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/setRotateY.h
/// \ingroup gm_functions_linearAlgebra
///
/// Set a Y-axis rotation on a transformation matrix, with respect to the left hand rule.
///
/// An Y-axis rotation in degrees \f$\theta\f$ set on a \p 4 by \p 4 identity matrix \f$I\f$ will produce:
/// \f[
/// \begin{bmatrix}
/// cos\theta  & 0 & sin\theta & 0      \\
/// 0          & 1 & 0         & 0      \\
/// -sin\theta & 0 & cos\theta & 0      \\
/// 0          & 0 & 0         & 1
/// \end{bmatrix}
/// \f]

#include <gm/gm.h>

#include <gm/types/mat4f.h>

#include <gm/functions/radians.h>

GM_NS_OPEN

/// Set a Y-axis rotation of \p i_angle degrees onto the transformation matrix \p o_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_angle The angle of rotation in degrees.
/// \param o_matrix Transformation matrix.
GM_HOST_DEVICE inline void SetRotateY( const float& i_angle, Mat4f& o_matrix )
{
    float radians    = Radians( i_angle );
    float sine       = std::sin( radians );
    float cosine     = std::cos( radians );
    o_matrix( 0, 0 ) = cosine;
    o_matrix( 0, 2 ) = sine;
    o_matrix( 2, 0 ) = -sine;
    o_matrix( 2, 2 ) = cosine;
}

GM_NS_CLOSE