//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/lengthSquared.h
/// \ingroup gm_functions_linearAlgebra
///
/// Compute the length squared of a vector, defined as the <em>sum of the squares</em> of <em>each vector element</em>.
///
/// Can also be represented as the dot product (see \ref functions/dotProduct.h) of the vector with itself.

#include <gm/gm.h>

#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <gm/functions/dotProduct.h>

GM_NS_OPEN

/// Compute the length squared of the vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector The input vector.
///
/// \return the length squared of the vector.
GM_HOST_DEVICE inline float LengthSquared( const Vec2f& i_vector )
{
    return DotProduct( i_vector, i_vector );
}

/// Compute the length squared of the vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector The input vector.
///
/// \return the length squared of the vector.
GM_HOST_DEVICE inline float LengthSquared( const Vec3f& i_vector )
{
    return DotProduct( i_vector, i_vector );
}

/// Compute the length squared of the vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector The input vector.
///
/// \return the length squared of the vector.
GM_HOST_DEVICE inline float LengthSquared( const Vec4f& i_vector )
{
    return DotProduct( i_vector, i_vector );
}

GM_NS_CLOSE