//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/coordinateSystem.h
/// \ingroup gm_functions_linearAlgebra
///
/// Construct a local coordinate system from a single input vector.

#include <gm/gm.h>

#include <gm/types/vec3f.h>

#include <gm/functions/crossProduct.h>
#include <gm/functions/length.h>
#include <gm/functions/normalize.h>

GM_NS_OPEN

/// Construct a local coordinate system for a single input vector \p i_vectorA, by computing
/// two orthogonal output vectors \p o_vectorB and \p o_vectorC.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_vectorA Input 3D vector.
/// \param o_vectorB The first orthogonal output 3D vector.
/// \param o_vectorC The second orthogonal output 3D vector.
///
/// \return Cross product of the two vectors.
GM_HOST_DEVICE inline void CoordinateSystem( const Vec3f& i_vectorA, Vec3f& o_vectorB, Vec3f& o_vectorC )
{
    GM_ASSERT_MSG( AlmostEqual( Length( i_vectorA ), 1.0f ), "Vector i_vectorA is not normalised!" );

    // The first orthogonal output vector is computed by:
    // 1. Zeroing out one of the components.
    // 2. Swapping the other ones.
    // 3. Negating one of the swapped components.
    if ( std::abs( i_vectorA.X() ) > std::abs( i_vectorA.Y() ) )
    {
        o_vectorB = Vec3f( -i_vectorA.Z(), 0, i_vectorA.X() );
    }
    else
    {
        o_vectorB = Vec3f( 0, i_vectorA.Z(), -i_vectorA.Y() );
    }
    o_vectorB = Normalize( o_vectorB );

    // Compute the second orthogonal as the cross product of A and B.
    o_vectorC = CrossProduct( i_vectorA, o_vectorB );
}

GM_NS_CLOSE