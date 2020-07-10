//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/dotProduct.h
/// \ingroup gm_functions_linearAlgebra
///
/// Dot product, or inner product between two <em>equal-length</em> vectors.
///
/// The corresponding elements of the two vector(s) are multipled, and the products reduced via summation,
/// into a single value.
///
/// This operation can be geometrically represented as the magnitudes between the vectors and the cosine of
/// the angle between them.

#include <gm/gm.h>

#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

GM_NS_OPEN

/// Compute the dot product of two \ref Vec2f, \p i_lhs
/// and \p i_rhs, and return the result.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_lhs Left hand side vector.
/// \param i_rhs Right hand side vector.
///
/// \return Dot product of the two vectors.
GM_HOST_DEVICE inline float DotProduct( const Vec2f& i_lhs, const Vec2f& i_rhs )
{
    return i_lhs[ 0 ] * i_rhs[ 0 ] + i_lhs[ 1 ] * i_rhs[ 1 ];
}

/// Compute the dot product of two \ref Vec3f, \p i_lhs
/// and \p i_rhs, and return the result.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_lhs Left hand side vector.
/// \param i_rhs Right hand side vector.
///
/// \return Dot product of the two vectors.
GM_HOST_DEVICE inline float DotProduct( const Vec3f& i_lhs, const Vec3f& i_rhs )
{
    return i_lhs[ 0 ] * i_rhs[ 0 ] + i_lhs[ 1 ] * i_rhs[ 1 ] + i_lhs[ 2 ] * i_rhs[ 2 ];
}

/// Compute the dot product of two \ref Vec4f, \p i_lhs
/// and \p i_rhs, and return the result.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_lhs Left hand side vector.
/// \param i_rhs Right hand side vector.
///
/// \return Dot product of the two vectors.
GM_HOST_DEVICE inline float DotProduct( const Vec4f& i_lhs, const Vec4f& i_rhs )
{
    return i_lhs[ 0 ] * i_rhs[ 0 ] + i_lhs[ 1 ] * i_rhs[ 1 ] + i_lhs[ 2 ] * i_rhs[ 2 ] + i_lhs[ 3 ] * i_rhs[ 3 ];
}

GM_NS_CLOSE