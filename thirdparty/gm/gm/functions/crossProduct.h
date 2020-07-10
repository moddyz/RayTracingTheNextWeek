//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/crossProduct.h
/// \ingroup gm_functions_linearAlgebra
///
/// Vector cross product.
///
/// The cross product of two equal-length vectors \f$\textnormal{cross}(u,v)\f$ is defined as a vector
/// \f$w\f$ of the same length, that is orthgonal to both \f$u\f$ and \f$v\f$.

#include <gm/gm.h>

#include <gm/types/vec3f.h>

GM_NS_OPEN

/// Compute the cross product of two \ref Vec3f, \p i_lhs
/// and \p i_rhs, and return the result.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_lhs Left hand side vector.
/// \param i_rhs Right hand side vector.
///
/// \return Cross product of the two vectors.
GM_HOST_DEVICE inline Vec3f CrossProduct( const Vec3f& i_lhs, const Vec3f& i_rhs )
{
    return Vec3f( ( i_lhs[ 1 ] * i_rhs[ 2 ] - i_lhs[ 2 ] * i_rhs[ 1 ] ),
                  ( i_lhs[ 2 ] * i_rhs[ 0 ] - i_lhs[ 0 ] * i_rhs[ 2 ] ),
                  ( i_lhs[ 0 ] * i_rhs[ 1 ] - i_lhs[ 1 ] * i_rhs[ 0 ] ) );
}

GM_NS_CLOSE