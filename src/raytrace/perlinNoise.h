#pragma once

/// \file raytrace/perlinNoise.h
///
/// Perlin noise generation.

#include <raytrace/raytrace.h>

#include <gm/types/floatRange.h>
#include <gm/types/intRange.h>

#include <gm/functions/floor.h>
#include <gm/functions/randomNumber.h>

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
            m_randomValues[ valueIndex ] = gm::RandomNumber( gm::FloatRange( 0, 1 ) );
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
        // Take the decimal place values.
        // gm::Vec3f decimalComponents = i_coordinate - gm::Floor( i_coordinate );

        int i = static_cast< int >( 4 * i_coord.X() ) & 255;
        int j = static_cast< int >( 4 * i_coord.Y() ) & 255;
        int k = static_cast< int >( 4 * i_coord.Z() ) & 255;

        return m_randomValues[ m_permutationX[ i ] ^ m_permutationY[ j ] ^ m_permutationZ[ k ] ];
    }

private:
    // The number of array values.
    static constexpr int c_valueCount = 256;

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

    std::array< float, c_valueCount > m_randomValues;
    std::array< int, c_valueCount >   m_permutationX;
    std::array< int, c_valueCount >   m_permutationY;
    std::array< int, c_valueCount >   m_permutationZ;
};

RAYTRACE_NS_CLOSE
