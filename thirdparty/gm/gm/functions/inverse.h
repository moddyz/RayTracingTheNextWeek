//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/inverse.h
/// \ingroup gm_functions_linearAlgebra
///
/// Matrix inverse.
///
/// Using Gauss-Jordan elimination, compute the inverse matrix.
///
/// The inverse matrix of \f$A\f$ is the unique matrix \f$A^-1\f$ such that
/// \f[
/// A * A^-1 = I
/// \f]
/// where \f$I\f$ is the identity matrix.
///
/// This is a fairly involved operation, and one of the few implementations in GraphicsMath where
/// helper functions are available to improve readability.

#include <gm/gm.h>

#include <gm/types/mat4f.h>

#include <gm/base/diagnostic.h>
#include <gm/functions/setIdentity.h>
#include <gm/types/vec4f.h>

GM_NS_OPEN

/// Find a row \em below row \p i_pivotRowIndex in matrix \p o_matrix such that its co-efficient
/// (at \p i_pivotColIndex) is not 0, then exchange it with the pivot row.
///
/// \return a positive integer if a viable row is found.  Otherwise, \p -1.
GM_HOST_DEVICE inline int _FindRowToExchange( const Mat4f& i_matrix, int i_pivotIndex )
{
    GM_ASSERT( i_matrix( i_pivotIndex, i_pivotIndex ) == 0 );

    for ( int rowIndex = i_pivotIndex + 1; rowIndex < 4; rowIndex++ )
    {
        if ( i_matrix( rowIndex, i_pivotIndex ) != 0 )
        {
            return rowIndex;
        }
    }

    return -1;
}

/// Exchange row \p i_rowIndexA and row \p i_rowIndexB on matrix \p o_matrix in-place.
GM_HOST_DEVICE inline void _RowExchange( int i_rowIndexA, int i_rowIndexB, Mat4f& o_matrix )
{
    Vec4f rowA( o_matrix( i_rowIndexA, 0 ),
                o_matrix( i_rowIndexA, 1 ),
                o_matrix( i_rowIndexA, 2 ),
                o_matrix( i_rowIndexA, 3 ) );

    o_matrix( i_rowIndexA, 0 ) = o_matrix( i_rowIndexB, 0 );
    o_matrix( i_rowIndexA, 1 ) = o_matrix( i_rowIndexB, 1 );
    o_matrix( i_rowIndexA, 2 ) = o_matrix( i_rowIndexB, 2 );
    o_matrix( i_rowIndexA, 3 ) = o_matrix( i_rowIndexB, 3 );

    o_matrix( i_rowIndexB, 0 ) = rowA[ 0 ];
    o_matrix( i_rowIndexB, 1 ) = rowA[ 1 ];
    o_matrix( i_rowIndexB, 2 ) = rowA[ 2 ];
    o_matrix( i_rowIndexB, 3 ) = rowA[ 3 ];
}

/// Perform a Gauss elimination step by zeroing out all the co-efficients below the pivot row,
/// by subtracting a factor the row from them.
GM_HOST_DEVICE inline void _GaussEliminationStep( int i_pivotIndex, Mat4f& o_matrix, Mat4f& o_inverse )
{
    GM_ASSERT( o_matrix( i_pivotIndex, i_pivotIndex ) != 0 );

    // Precompute the reciprocal of the pivot co-efficient.
    const float pivotReciprocal = 1.0 / o_matrix( i_pivotIndex, i_pivotIndex );

    // Cache the pivot rows.
    Vec4f pivotRow( o_matrix( i_pivotIndex, 0 ),
                    o_matrix( i_pivotIndex, 1 ),
                    o_matrix( i_pivotIndex, 2 ),
                    o_matrix( i_pivotIndex, 3 ) );

    Vec4f inversePivotRow( o_inverse( i_pivotIndex, 0 ),
                           o_inverse( i_pivotIndex, 1 ),
                           o_inverse( i_pivotIndex, 2 ),
                           o_inverse( i_pivotIndex, 3 ) );

    for ( int rowIndex = i_pivotIndex + 1; rowIndex < 4; rowIndex++ )
    {
        float coefficient = o_matrix( rowIndex, i_pivotIndex );
        if ( coefficient != 0 )
        {
            float eliminationFactor = coefficient * pivotReciprocal;
            Vec4f eliminationRow    = pivotRow * eliminationFactor;
            for ( int colIndex = i_pivotIndex; colIndex < 4; colIndex++ )
            {
                o_matrix( rowIndex, colIndex ) -= eliminationRow[ colIndex ];
            }

            Vec4f inverseEliminationRow = inversePivotRow * eliminationFactor;
            for ( int colIndex = 0; colIndex < 4; colIndex++ )
            {
                o_inverse( rowIndex, colIndex ) -= inverseEliminationRow[ colIndex ];
            }
        }
    }
}

/// Perform a Jordan elimination step by zeroing out all the co-efficients above the pivot row.
/// by subtracting a factor the row from them.
///
/// FIXME: This code duplication sucks.  We can reduce Gauss and Jordan steps into a single function
/// fairly elegantly with an IntRange which supports reverse iteration (where the min is greater than the max).
GM_HOST_DEVICE inline void _JordanEliminationStep( int i_pivotIndex, Mat4f& o_matrix, Mat4f& o_inverse )
{
    GM_ASSERT( o_matrix( i_pivotIndex, i_pivotIndex ) != 0 );

    // Precompute the reciprocal of the pivot co-efficient.
    const float pivotReciprocal = 1.0 / o_matrix( i_pivotIndex, i_pivotIndex );

    // Cache the pivot rows.
    Vec4f pivotRow( o_matrix( i_pivotIndex, 0 ),
                    o_matrix( i_pivotIndex, 1 ),
                    o_matrix( i_pivotIndex, 2 ),
                    o_matrix( i_pivotIndex, 3 ) );

    Vec4f inversePivotRow( o_inverse( i_pivotIndex, 0 ),
                           o_inverse( i_pivotIndex, 1 ),
                           o_inverse( i_pivotIndex, 2 ),
                           o_inverse( i_pivotIndex, 3 ) );

    for ( int rowIndex = i_pivotIndex - 1; rowIndex >= 0; rowIndex-- )
    {
        float coefficient = o_matrix( rowIndex, i_pivotIndex );
        if ( coefficient != 0.0f )
        {
            float eliminationFactor = coefficient * pivotReciprocal;
            Vec4f eliminationRow    = pivotRow * eliminationFactor;
            for ( int colIndex = i_pivotIndex; colIndex >= 0; colIndex-- )
            {
                o_matrix( rowIndex, colIndex ) -= eliminationRow[ colIndex ];
            }

            Vec4f inverseEliminationRow = inversePivotRow * eliminationFactor;
            for ( int colIndex = 3; colIndex >= 0; colIndex-- )
            {
                o_inverse( rowIndex, colIndex ) -= inverseEliminationRow[ colIndex ];
            }
        }
    }
}

/// Compute the inverse of matrix i_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_matrix The input matrix to invert.
/// \param o_inverse The inverse of \p i_matrix.
///
/// \return Whether or not i_matrix is invertable.
GM_HOST_DEVICE inline bool Inverse( const Mat4f& i_matrix, Mat4f& o_inverse )
{
    // Left working matrix.  This will assume the identity matrix after
    // the full Gauss-Jordan elimination.
    Mat4f matrix = i_matrix;

    // This matrix begins as the identity, and will assume the inverse after elimination.
    SetIdentity( o_inverse );

    //
    // Gauss step: multiply A by elimination matrix to produce upper-echelon matrix.
    //

    // Pivot #0
    if ( matrix( 0, 0 ) == 0 )
    {
        // Try to perform row exchange.
        int rowToExchange = _FindRowToExchange( matrix, 0 );
        if ( rowToExchange != -1 )
        {
            _RowExchange( 0, rowToExchange, matrix );
            _RowExchange( 0, rowToExchange, o_inverse );
        }
        else
        {
            // A matrix is invertible if and only if all its columns are independent.  Failure to find a
            // row to exchange to produce a pivot means that this column is singular (it is a combination of
            // the previous columns), thus this matrix is not generally invertible.
            return false;
        }
    }

    _GaussEliminationStep( 0, matrix, o_inverse );

    // Pivot #1
    if ( matrix( 1, 1 ) == 0 )
    {
        // Try to perform row exchange.
        int rowToExchange = _FindRowToExchange( matrix, 1 );
        if ( rowToExchange != -1 )
        {
            _RowExchange( 1, rowToExchange, matrix );
            _RowExchange( 1, rowToExchange, o_inverse );
        }
        else
        {
            // A matrix is invertible if and only if all its columns are independent.  Failure to find a
            // row to exchange to produce a pivot means that this column is singular (it is a combination of
            // the previous columns), thus this matrix is not generally invertible.
            return false;
        }
    }

    _GaussEliminationStep( 1, matrix, o_inverse );

    // Pivot #2
    if ( matrix( 2, 2 ) == 0 )
    {
        // Try to perform row exchange.
        int rowToExchange = _FindRowToExchange( matrix, 2 );
        if ( rowToExchange != -1 )
        {
            _RowExchange( 2, rowToExchange, matrix );
            _RowExchange( 2, rowToExchange, o_inverse );
        }
        else
        {
            // A matrix is invertible if and only if all its columns are independent.  Failure to find a
            // row to exchange to produce a pivot means that this column is singular (it is a combination of
            // the previous columns), thus this matrix is not generally invertible.
            return false;
        }
    }

    _GaussEliminationStep( 2, matrix, o_inverse );

    // Pivot #3
    if ( matrix( 3, 3 ) == 0 )
    {
        // Try to perform row exchange.
        int rowToExchange = _FindRowToExchange( matrix, 3 );
        if ( rowToExchange != -1 )
        {
            _RowExchange( 3, rowToExchange, matrix );
            _RowExchange( 3, rowToExchange, o_inverse );
        }
        else
        {
            // A matrix is invertible if and only if all its columns are independent.  Failure to find a
            // row to exchange to produce a pivot means that this column is singular (it is a combination of
            // the previous columns), thus this matrix is not generally invertible.
            return false;
        }
    }

    _GaussEliminationStep( 3, matrix, o_inverse );

    //
    // Jordan step: Multiply upper echelon matrix U by E to reduce to diagonal matrix.
    //

    _JordanEliminationStep( 3, matrix, o_inverse );
    _JordanEliminationStep( 2, matrix, o_inverse );
    _JordanEliminationStep( 1, matrix, o_inverse );

    //
    // Rows of inverse by diagonal coefficients of left matrix D.
    //
    {
        const float pivot = matrix( 0, 0 );
        if ( pivot != 1.0f )
        {
            const float pivotInverse = 1.0f / pivot;
            o_inverse( 0, 0 ) *= pivotInverse;
            o_inverse( 0, 1 ) *= pivotInverse;
            o_inverse( 0, 2 ) *= pivotInverse;
            o_inverse( 0, 3 ) *= pivotInverse;
        }
    }
    {
        const float pivot = matrix( 1, 1 );
        if ( pivot != 1.0f )
        {
            const float pivotInverse = 1.0f / pivot;
            o_inverse( 1, 0 ) *= pivotInverse;
            o_inverse( 1, 1 ) *= pivotInverse;
            o_inverse( 1, 2 ) *= pivotInverse;
            o_inverse( 1, 3 ) *= pivotInverse;
        }
    }
    {
        const float pivot = matrix( 2, 2 );
        if ( pivot != 1.0f )
        {
            const float pivotInverse = 1.0f / pivot;
            o_inverse( 2, 0 ) *= pivotInverse;
            o_inverse( 2, 1 ) *= pivotInverse;
            o_inverse( 2, 2 ) *= pivotInverse;
            o_inverse( 2, 3 ) *= pivotInverse;
        }
    }
    {
        const float pivot = matrix( 3, 3 );
        if ( pivot != 1.0f )
        {
            const float pivotInverse = 1.0f / pivot;
            o_inverse( 3, 0 ) *= pivotInverse;
            o_inverse( 3, 1 ) *= pivotInverse;
            o_inverse( 3, 2 ) *= pivotInverse;
            o_inverse( 3, 3 ) *= pivotInverse;
        }
    }

    // Succesful inversion.
    return true;
}

GM_NS_CLOSE