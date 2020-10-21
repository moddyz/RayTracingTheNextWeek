//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/setRotate.h
/// \ingroup gm_functions_linearAlgebra
///
/// Set a rotation for an specified axis on a transformation matrix, with respect to the left hand rule.

#include <gm/gm.h>

#include <gm/types/mat4f.h>
#include <gm/types/vec3f.h>

#include <gm/functions/normalize.h>
#include <gm/functions/radians.h>

GM_NS_OPEN

/// Set a \p i_axis  rotation of \p i_angle degrees onto the transformation
/// matrix \p o_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_angle The angle of rotation in degrees.
/// \param o_matrix Transformation matrix.
GM_HOST_DEVICE inline void SetRotate( const float& i_angle, const Vec3f& i_axis, Mat4f& o_matrix )
{
    // Axis must be normalised.
    Vec3f normAxis = Normalize( i_axis );

    // Compute cosine and sine.
    float radians  = Radians( i_angle );
    float sinTheta = std::sin( radians );
    float cosTheta = std::cos( radians );

    o_matrix( 0, 0 ) = normAxis[ 0 ] * normAxis[ 0 ] + ( 1 - normAxis[ 0 ] * normAxis[ 0 ] ) * cosTheta;
    o_matrix( 0, 1 ) = normAxis[ 0 ] * normAxis[ 1 ] * ( 1 - cosTheta ) - normAxis[ 2 ] * sinTheta;
    o_matrix( 0, 2 ) = normAxis[ 0 ] * normAxis[ 2 ] * ( 1 - cosTheta ) + normAxis[ 1 ] * sinTheta;
    o_matrix( 0, 3 ) = 0;

    o_matrix( 1, 0 ) = normAxis[ 0 ] * normAxis[ 1 ] * ( 1 - cosTheta ) + normAxis[ 2 ] * sinTheta;
    o_matrix( 1, 1 ) = normAxis[ 1 ] * normAxis[ 1 ] + ( 1 - normAxis[ 1 ] * normAxis[ 1 ] ) * cosTheta;
    o_matrix( 1, 2 ) = normAxis[ 1 ] * normAxis[ 2 ] * ( 1 - cosTheta ) - normAxis[ 0 ] * sinTheta;
    o_matrix( 1, 3 ) = 0;

    o_matrix( 2, 0 ) = normAxis[ 0 ] * normAxis[ 2 ] * ( 1 - cosTheta ) - normAxis[ 1 ] * sinTheta;
    o_matrix( 2, 1 ) = normAxis[ 1 ] * normAxis[ 2 ] * ( 1 - cosTheta ) + normAxis[ 0 ] * sinTheta;
    o_matrix( 2, 2 ) = normAxis[ 2 ] * normAxis[ 2 ] + ( 1 - normAxis[ 2 ] * normAxis[ 2 ] ) * cosTheta;
    o_matrix( 2, 3 ) = 0;
}

GM_NS_CLOSE