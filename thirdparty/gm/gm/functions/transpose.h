//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/transpose.h
/// \ingroup gm_functions_linearAlgebra
///
/// Matrix transpose.
///
/// Roughly speaking, transposing a matrix flips it across its main diagonal.
///
/// Or, more precisely:
/// - the rows of the original matrix become the columns of the transposed matrix.
/// - for each entry specified by (i, j) in the original matrix, the corresponding entryin the transposed resides in (j,
/// i).

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>

GM_NS_OPEN

/// Transpose the input matrix \p i_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_matrix The input matrix to transpose.
///
/// \return Transposed matrix.
GM_HOST_DEVICE inline Mat3f Transpose( const Mat3f& i_matrix )
{
    return Mat3f( i_matrix( 0, 0 ),
                  i_matrix( 1, 0 ),
                  i_matrix( 2, 0 ),
                  i_matrix( 0, 1 ),
                  i_matrix( 1, 1 ),
                  i_matrix( 2, 1 ),
                  i_matrix( 0, 2 ),
                  i_matrix( 1, 2 ),
                  i_matrix( 2, 2 ) );
}

/// Transpose the input matrix \p i_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_matrix The input matrix to transpose.
///
/// \return Transposed matrix.
GM_HOST_DEVICE inline Mat4f Transpose( const Mat4f& i_matrix )
{
    return Mat4f( i_matrix( 0, 0 ),
                  i_matrix( 1, 0 ),
                  i_matrix( 2, 0 ),
                  i_matrix( 3, 0 ),
                  i_matrix( 0, 1 ),
                  i_matrix( 1, 1 ),
                  i_matrix( 2, 1 ),
                  i_matrix( 3, 1 ),
                  i_matrix( 0, 2 ),
                  i_matrix( 1, 2 ),
                  i_matrix( 2, 2 ),
                  i_matrix( 3, 2 ),
                  i_matrix( 0, 3 ),
                  i_matrix( 1, 3 ),
                  i_matrix( 2, 3 ),
                  i_matrix( 3, 3 ) );
}

GM_NS_CLOSE