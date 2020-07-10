//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/isIdentity.h
/// \ingroup gm_functions_linearAlgebra
///
/// Check if the input matrix is the identity matrix.

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>

GM_NS_OPEN

/// Check if the matrix \p i_matrix is the identity matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_matrix Input matrix.
///
/// \retval true If \p i_matrix is the identity matrix.
/// \retval false If \p i_matrix is not the identity matrix.
GM_HOST_DEVICE inline bool IsIdentity( const Mat3f& i_matrix )
{
    return i_matrix( 0, 0 ) == 1.0f && i_matrix( 0, 1 ) == 0.0f && i_matrix( 0, 2 ) == 0.0f &&
           i_matrix( 1, 0 ) == 0.0f && i_matrix( 1, 1 ) == 1.0f && i_matrix( 1, 2 ) == 0.0f &&
           i_matrix( 2, 0 ) == 0.0f && i_matrix( 2, 1 ) == 0.0f && i_matrix( 2, 2 ) == 1.0f;
}

/// Check if the matrix \p i_matrix is the identity matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_matrix Input matrix.
///
/// \retval true If \p i_matrix is the identity matrix.
/// \retval false If \p i_matrix is not the identity matrix.
GM_HOST_DEVICE inline bool IsIdentity( const Mat4f& i_matrix )
{
    return i_matrix( 0, 0 ) == 1.0f && i_matrix( 0, 1 ) == 0.0f && i_matrix( 0, 2 ) == 0.0f &&
           i_matrix( 0, 3 ) == 0.0f && i_matrix( 1, 0 ) == 0.0f && i_matrix( 1, 1 ) == 1.0f &&
           i_matrix( 1, 2 ) == 0.0f && i_matrix( 1, 3 ) == 0.0f && i_matrix( 2, 0 ) == 0.0f &&
           i_matrix( 2, 1 ) == 0.0f && i_matrix( 2, 2 ) == 1.0f && i_matrix( 2, 3 ) == 0.0f &&
           i_matrix( 3, 0 ) == 0.0f && i_matrix( 3, 1 ) == 0.0f && i_matrix( 3, 2 ) == 0.0f && i_matrix( 3, 3 ) == 1.0f;
}

GM_NS_CLOSE