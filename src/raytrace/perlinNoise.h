#pragma once

/// \file raytrace/perlinNoise.h
///
/// Perlin noise generation.

#include <raytrace/raytrace.h>

#include <gm/types/floatRange.h>
#include <gm/types/intRange.h>

#include <gm/functions/dotProduct.h>
#include <gm/functions/floor.h>
#include <gm/functions/normalize.h>
#include <gm/functions/randomNumber.h>
#include <gm/functions/trilinearInterpolation.h>

#include <array>
#include <vector>

RAYTRACE_NS_OPEN

/// \class PerlinNoise
///
/// Random noise generator, taking input 3D vectors and producing a
/// scalar value between 0 and 1.
class PerlinNoise
{
public:
    /// Default constructor, which computes the initial values for noise generation.
    PerlinNoise()
    {
        // Generate a sequence of random floats between 0 and 1.
        for ( int valueIndex = 0; valueIndex < c_valueCount; ++valueIndex )
        {
            m_randomVectors[ valueIndex ] = gm::Normalize( gm::Vec3f( gm::RandomNumber( gm::FloatRange( -1, 1 ) ),
                                                                      gm::RandomNumber( gm::FloatRange( -1, 1 ) ),
                                                                      gm::RandomNumber( gm::FloatRange( -1, 1 ) ) ) );
        }

        // Generate random permutations.
        _GeneratePermutation( m_permutationX );
        _GeneratePermutation( m_permutationY );
        _GeneratePermutation( m_permutationZ );
    }

    /// Generate a random floating point value between 0, 1 using the perlin noise generator.
    ///
    /// \param i_coord The input 3D coordinate.
    ///
    /// \return The random generated value.
    float Generate( const gm::Vec3f& i_coord ) const
    {
        gm::Vec3f floored = gm::Floor( i_coord );
        gm::Vec3f weights = i_coord - floored;

        // Apply hermitian smoothing.
        gm::Vec3f smoothWeights( weights.X() * weights.X() * ( 3.0f - 2.0f * weights.X() ),
                                 weights.Y() * weights.Y() * ( 3.0f - 2.0f * weights.Y() ),
                                 weights.Z() * weights.Z() * ( 3.0f - 2.0f * weights.Z() ) );

        gm::Vec3i coordinates( ( int ) floored[ 0 ], ( int ) floored[ 1 ], ( int ) floored[ 2 ] );

        return gm::TrilinearInterpolation( _LatticeValue( coordinates, gm::Vec3i( 0, 0, 0 ), weights ),
                                           _LatticeValue( coordinates, gm::Vec3i( 1, 0, 0 ), weights ),
                                           _LatticeValue( coordinates, gm::Vec3i( 0, 1, 0 ), weights ),
                                           _LatticeValue( coordinates, gm::Vec3i( 1, 1, 0 ), weights ),
                                           _LatticeValue( coordinates, gm::Vec3i( 0, 0, 1 ), weights ),
                                           _LatticeValue( coordinates, gm::Vec3i( 1, 0, 1 ), weights ),
                                           _LatticeValue( coordinates, gm::Vec3i( 0, 1, 1 ), weights ),
                                           _LatticeValue( coordinates, gm::Vec3i( 1, 1, 1 ), weights ),
                                           smoothWeights.X(),
                                           smoothWeights.Y(),
                                           smoothWeights.Z() );
    }

private:
    // The number of array values.
    static constexpr int c_valueCount = 256;

    // Generate a specified lattice value for trilinear interpolation.
    float _LatticeValue( const gm::Vec3i& i_coord, const gm::Vec3i& i_offsets, const gm::Vec3f& i_weights ) const
    {
        int vectorIndex = m_permutationX[ ( i_coord.X() + i_offsets.X() ) & 255 ] ^
                          m_permutationY[ ( i_coord.Y() + i_offsets.Y() ) & 255 ] ^
                          m_permutationZ[ ( i_coord.Z() + i_offsets.Z() ) & 255 ];
        const gm::Vec3f& vector = m_randomVectors[ vectorIndex ];

        gm::Vec3f weightVector( i_weights.X() - i_offsets.X(),
                                i_weights.Y() - i_offsets.Y(),
                                i_weights.Z() - i_offsets.Z() );

        return gm::DotProduct( vector, weightVector );
    }

    // Generate a random permutation sequence.
    static void _GeneratePermutation( std::array< int, c_valueCount >& o_permutation )
    {
        for ( int index = 0; index < c_valueCount; ++index )
        {
            o_permutation[ index ] = index;
        }

        _RandomPermute( c_valueCount, o_permutation.data() );
    }

    // Permute an sequence of numbers by mapping each element to another random distinct element
    // in the same array.
    static void _RandomPermute( int i_arraySize, int* o_array )
    {
        for ( int arrayIndex = i_arraySize - 1; arrayIndex > 0; arrayIndex-- )
        {
            int targetIndex = gm::RandomNumber( gm::IntRange( 0, arrayIndex ) );
            std::swap( o_array[ arrayIndex ], o_array[ targetIndex ] );
        }
    }

    std::array< gm::Vec3f, c_valueCount > m_randomVectors;
    std::array< int, c_valueCount >       m_permutationX;
    std::array< int, c_valueCount >       m_permutationY;
    std::array< int, c_valueCount >       m_permutationZ;
};

RAYTRACE_NS_CLOSE
