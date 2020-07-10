//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/normalize.h
/// \ingroup gm_functions_linearAlgebra
///
/// Vector normalization.
///
/// The computation divides each of its elements by the vector length/magnitude.  The normalized vector is defined as a
/// unit vector.

#include <gm/gm.h>

#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <gm/base/assert.h>
#include <gm/functions/length.h>

GM_NS_OPEN

/// Compute the normalised vector from the input vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector Input vector.
///
/// \return Normalised vector.
GM_HOST_DEVICE inline Vec2f Normalize( const Vec2f& i_vector )
{
    float length = Length( i_vector );
    GM_ASSERT( length != 0.0f );
    return i_vector / length;
}

/// Compute the normalised vector from the input vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector Input vector.
///
/// \return Normalised vector.
GM_HOST_DEVICE inline Vec3f Normalize( const Vec3f& i_vector )
{
    float length = Length( i_vector );
    GM_ASSERT( length != 0.0f );
    return i_vector / length;
}

/// Compute the normalised vector from the input vector \p i_vector.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vector Input vector.
///
/// \return Normalised vector.
GM_HOST_DEVICE inline Vec4f Normalize( const Vec4f& i_vector )
{
    float length = Length( i_vector );
    GM_ASSERT( length != 0.0f );
    return i_vector / length;
}

GM_NS_CLOSE