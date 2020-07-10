//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/length.h
/// \ingroup gm_functions_linearAlgebra
///
/// Compute the \b length, or magnitude, of a vector.
///
/// The length of a vector is defined as the <em>square root</em> of the <em>sum of the squares</em>
/// of <em>each vector element</em>.

#include <gm/gm.h>

#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <gm/functions/lengthSquared.h>

GM_NS_OPEN

/// Compute the length of the vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector The input vector.
///
/// \return The length of the vector.
GM_HOST_DEVICE inline float Length( const Vec2f& i_vector )
{
    return sqrt( LengthSquared( i_vector ) );
}

/// Compute the length of the vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector The input vector.
///
/// \return The length of the vector.
GM_HOST_DEVICE inline float Length( const Vec3f& i_vector )
{
    return sqrt( LengthSquared( i_vector ) );
}

/// Compute the length of the vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector The input vector.
///
/// \return The length of the vector.
GM_HOST_DEVICE inline float Length( const Vec4f& i_vector )
{
    return sqrt( LengthSquared( i_vector ) );
}

GM_NS_CLOSE