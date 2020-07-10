//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/matrixProduct.h
/// \ingroup gm_functions_linearAlgebra
///
/// Matrix multiplication.
///
/// Mathematically described as the composition of two linear maps.
///
/// For matrices A and B, their product AB is only defined if <em># columns of A</em> equals <em># rows of B</em>,
/// The matrix product AB will assume the shape (# rows of A, # cols of B).
///
/// Each entry (i, j) in the matrix product AB can be computed as the dot (or inner) product of the \em i'th
/// row vector of A and the \em j'th column vector of B.

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>

GM_NS_OPEN

/// Multiply input matrices \p i_lhs and \p i_rhs
/// to produce their matrix product.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_lhs Left hand side matrix.
/// \param i_rhs Right hand side matrix.
///
/// \return The matrix product.
GM_HOST_DEVICE inline Mat3f MatrixProduct( const Mat3f& i_lhs, const Mat3f& i_rhs )
{
    return Mat3f( i_lhs( 0, 0 ) * i_rhs( 0, 0 ) + i_lhs( 0, 1 ) * i_rhs( 1, 0 ) + i_lhs( 0, 2 ) * i_rhs( 2, 0 ),
                  i_lhs( 0, 0 ) * i_rhs( 0, 1 ) + i_lhs( 0, 1 ) * i_rhs( 1, 1 ) + i_lhs( 0, 2 ) * i_rhs( 2, 1 ),
                  i_lhs( 0, 0 ) * i_rhs( 0, 2 ) + i_lhs( 0, 1 ) * i_rhs( 1, 2 ) + i_lhs( 0, 2 ) * i_rhs( 2, 2 ),
                  i_lhs( 1, 0 ) * i_rhs( 0, 0 ) + i_lhs( 1, 1 ) * i_rhs( 1, 0 ) + i_lhs( 1, 2 ) * i_rhs( 2, 0 ),
                  i_lhs( 1, 0 ) * i_rhs( 0, 1 ) + i_lhs( 1, 1 ) * i_rhs( 1, 1 ) + i_lhs( 1, 2 ) * i_rhs( 2, 1 ),
                  i_lhs( 1, 0 ) * i_rhs( 0, 2 ) + i_lhs( 1, 1 ) * i_rhs( 1, 2 ) + i_lhs( 1, 2 ) * i_rhs( 2, 2 ),
                  i_lhs( 2, 0 ) * i_rhs( 0, 0 ) + i_lhs( 2, 1 ) * i_rhs( 1, 0 ) + i_lhs( 2, 2 ) * i_rhs( 2, 0 ),
                  i_lhs( 2, 0 ) * i_rhs( 0, 1 ) + i_lhs( 2, 1 ) * i_rhs( 1, 1 ) + i_lhs( 2, 2 ) * i_rhs( 2, 1 ),
                  i_lhs( 2, 0 ) * i_rhs( 0, 2 ) + i_lhs( 2, 1 ) * i_rhs( 1, 2 ) + i_lhs( 2, 2 ) * i_rhs( 2, 2 ) );
}

/// Multiply input matrices \p i_lhs and \p i_rhs
/// to produce their matrix product.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_lhs Left hand side matrix.
/// \param i_rhs Right hand side matrix.
///
/// \return The matrix product.
GM_HOST_DEVICE inline Mat4f MatrixProduct( const Mat4f& i_lhs, const Mat4f& i_rhs )
{
    return Mat4f( i_lhs( 0, 0 ) * i_rhs( 0, 0 ) + i_lhs( 0, 1 ) * i_rhs( 1, 0 ) + i_lhs( 0, 2 ) * i_rhs( 2, 0 ) +
                      i_lhs( 0, 3 ) * i_rhs( 3, 0 ),
                  i_lhs( 0, 0 ) * i_rhs( 0, 1 ) + i_lhs( 0, 1 ) * i_rhs( 1, 1 ) + i_lhs( 0, 2 ) * i_rhs( 2, 1 ) +
                      i_lhs( 0, 3 ) * i_rhs( 3, 1 ),
                  i_lhs( 0, 0 ) * i_rhs( 0, 2 ) + i_lhs( 0, 1 ) * i_rhs( 1, 2 ) + i_lhs( 0, 2 ) * i_rhs( 2, 2 ) +
                      i_lhs( 0, 3 ) * i_rhs( 3, 2 ),
                  i_lhs( 0, 0 ) * i_rhs( 0, 3 ) + i_lhs( 0, 1 ) * i_rhs( 1, 3 ) + i_lhs( 0, 2 ) * i_rhs( 2, 3 ) +
                      i_lhs( 0, 3 ) * i_rhs( 3, 3 ),
                  i_lhs( 1, 0 ) * i_rhs( 0, 0 ) + i_lhs( 1, 1 ) * i_rhs( 1, 0 ) + i_lhs( 1, 2 ) * i_rhs( 2, 0 ) +
                      i_lhs( 1, 3 ) * i_rhs( 3, 0 ),
                  i_lhs( 1, 0 ) * i_rhs( 0, 1 ) + i_lhs( 1, 1 ) * i_rhs( 1, 1 ) + i_lhs( 1, 2 ) * i_rhs( 2, 1 ) +
                      i_lhs( 1, 3 ) * i_rhs( 3, 1 ),
                  i_lhs( 1, 0 ) * i_rhs( 0, 2 ) + i_lhs( 1, 1 ) * i_rhs( 1, 2 ) + i_lhs( 1, 2 ) * i_rhs( 2, 2 ) +
                      i_lhs( 1, 3 ) * i_rhs( 3, 2 ),
                  i_lhs( 1, 0 ) * i_rhs( 0, 3 ) + i_lhs( 1, 1 ) * i_rhs( 1, 3 ) + i_lhs( 1, 2 ) * i_rhs( 2, 3 ) +
                      i_lhs( 1, 3 ) * i_rhs( 3, 3 ),
                  i_lhs( 2, 0 ) * i_rhs( 0, 0 ) + i_lhs( 2, 1 ) * i_rhs( 1, 0 ) + i_lhs( 2, 2 ) * i_rhs( 2, 0 ) +
                      i_lhs( 2, 3 ) * i_rhs( 3, 0 ),
                  i_lhs( 2, 0 ) * i_rhs( 0, 1 ) + i_lhs( 2, 1 ) * i_rhs( 1, 1 ) + i_lhs( 2, 2 ) * i_rhs( 2, 1 ) +
                      i_lhs( 2, 3 ) * i_rhs( 3, 1 ),
                  i_lhs( 2, 0 ) * i_rhs( 0, 2 ) + i_lhs( 2, 1 ) * i_rhs( 1, 2 ) + i_lhs( 2, 2 ) * i_rhs( 2, 2 ) +
                      i_lhs( 2, 3 ) * i_rhs( 3, 2 ),
                  i_lhs( 2, 0 ) * i_rhs( 0, 3 ) + i_lhs( 2, 1 ) * i_rhs( 1, 3 ) + i_lhs( 2, 2 ) * i_rhs( 2, 3 ) +
                      i_lhs( 2, 3 ) * i_rhs( 3, 3 ),
                  i_lhs( 3, 0 ) * i_rhs( 0, 0 ) + i_lhs( 3, 1 ) * i_rhs( 1, 0 ) + i_lhs( 3, 2 ) * i_rhs( 2, 0 ) +
                      i_lhs( 3, 3 ) * i_rhs( 3, 0 ),
                  i_lhs( 3, 0 ) * i_rhs( 0, 1 ) + i_lhs( 3, 1 ) * i_rhs( 1, 1 ) + i_lhs( 3, 2 ) * i_rhs( 2, 1 ) +
                      i_lhs( 3, 3 ) * i_rhs( 3, 1 ),
                  i_lhs( 3, 0 ) * i_rhs( 0, 2 ) + i_lhs( 3, 1 ) * i_rhs( 1, 2 ) + i_lhs( 3, 2 ) * i_rhs( 2, 2 ) +
                      i_lhs( 3, 3 ) * i_rhs( 3, 2 ),
                  i_lhs( 3, 0 ) * i_rhs( 0, 3 ) + i_lhs( 3, 1 ) * i_rhs( 1, 3 ) + i_lhs( 3, 2 ) * i_rhs( 2, 3 ) +
                      i_lhs( 3, 3 ) * i_rhs( 3, 3 ) );
}

GM_NS_CLOSE