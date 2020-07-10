#pragma once

/// \file raytrace/attribute.h
///
/// Container for time-sampled values.

#include <raytrace/ray.h>

#include <gm/functions/linearInterpolation.h>

#include <gm/types/floatRange.h>
#include <gm/types/intRange.h>

#include <algorithm>
#include <vector>

RAYTRACE_NS_OPEN

/// \class Attribute
///
/// Attribute encapsulates a collection of time sampled values of \p ValueT, allowing efficient
/// value retrieval or interpolation for a requested time.
///
/// \tparam ValueT The underlying value type that this attribute
///
/// \pre \p ValueT must be default constructable, with deterministic value(s).
/// \pre \p ValueT must be also be linearly interpolatable via \ref gm::LinearInterpolation.
template < typename ValueT >
class Attribute
{
public:
    /// \typedef ValueType
    ///
    /// Convenience type definition for the value type that this attribute stores.
    using ValueType = ValueT;

    /// \typedef TimeSampleType
    ///
    /// Convenience type definition for the compound of the time with associated value type.
    using TimeSampleType = std::pair< float, ValueT >;

    /// Explicit constructor with an vector of time sampled values.
    ///
    /// \param i_timeSamples Values with associated times.
    explicit inline Attribute( std::vector< TimeSampleType > i_timeSamples )
    {
        struct
        {
            bool operator()( TimeSampleType a, TimeSampleType b ) const
            {
                return a.first < b.first;
            }
        } TimeSampleComp;

        // Sort time samples by time code.
        std::sort( i_timeSamples.begin(), i_timeSamples.end(), TimeSampleComp );

        // Store times and values as _separate_ vectors.
        // This will enable faster binary search over the m_times array. (less memory read overhead!)
        m_times.resize( i_timeSamples.size() );
        m_values.resize( i_timeSamples.size() );
        for ( size_t sampleIndex = 0; sampleIndex < i_timeSamples.size(); ++sampleIndex )
        {
            m_times[ sampleIndex ]  = i_timeSamples[ sampleIndex ].first;
            m_values[ sampleIndex ] = i_timeSamples[ sampleIndex ].second;
        }
    }

    /// Get the value at time \p i_time.
    ///
    /// The value is sampled through the following ordered cases:
    ///
    /// -# If this attribute has a single time sample, then that value is returned.
    /// -# If this attribute has no time samples, then the value type is default constructed and returned.
    /// -# Otherwise, a binary search will be performed to find the requested time sampled value.
    ///     - If the requested \p i_time is not stored by this attribute,
    ///        the value will be linearly interpolated by the nearest lower and upper
    ///        time sampled values.
    ///     - If \p i_time is less than the lowest time then the value at the lowest time will be returned.
    ///     - The same scenario applies for the scenario when \p i_time is greater than the highest/ time,
    ///       the highest time sampled value is returned!
    ///
    /// \param i_time The time at which to sample to value.
    ///
    /// \return The time sampled value.
    inline ValueT Value( float i_time = 0.0f ) const
    {
        if ( m_times.size() == 1 )
        {
            // A single time sample.  Immediately return value.
            return m_values[ 0 ];
        }
        else if ( i_time < m_times[ 0 ] )
        {
            // Requested time is less than min time sample.  Simply return the associated value.
            return m_values[ 0 ];
        }
        else if ( i_time > m_times[ m_times.size() - 1 ] )
        {
            // Requested time is greater than max time sample.  Simply return the associated value.
            return m_values[ m_times.size() - 1 ];
        }
        else if ( m_times.empty() )
        {
            // No time samples.  Default construct value.
            return ValueType();
        }
        else
        {
            return _BinarySearchValue( i_time );
        }
    }

private:
    // Compute the binary search index based on lower and upper bound indices.
    inline int _BinarySearchIndex( int i_lowerBound, int i_upperBound ) const
    {
        return i_lowerBound + i_upperBound / 2;
    }

    // Helper function to interpolate a value for a time within two adjacent time samples.
    inline ValueT _InterpolateValue( float                 i_time,
                                     const gm::FloatRange& i_adjacentTimes,
                                     const gm::IntRange&   i_adjacentIndices ) const
    {
        // Compute a normalized weight for linear interpolation, based on the where the requested
        // time resides in between its adjacent times.
        float weight = gm::LinearMap( i_time, i_adjacentTimes, gm::FloatRange( 0.0, 1.0 ) );
        return gm::LinearInterpolation( m_values[ i_adjacentIndices.Min() ],
                                        m_values[ i_adjacentIndices.Max() ],
                                        weight );
    }

    // Perform a binary search to retrieve or interpolate a time sampled value.
    inline ValueT _BinarySearchValue( float i_time ) const
    {
        int lowerBound = 0;
        int upperBound = m_times.size() - 1;
        while ( true )
        {
            int   searchIndex = _BinarySearchIndex( lowerBound, upperBound );
            float searchTime  = m_times[ searchIndex ];
            if ( i_time == searchTime )
            {
                // We have an exact time sample match!
                return m_values[ searchIndex ];
            }
            else if ( i_time > searchTime )
            {
                GM_ASSERT( searchIndex + 1 < ( int ) m_times.size() );
                if ( i_time < m_times[ searchIndex + 1 ] )
                {
                    return _InterpolateValue( i_time,
                                              gm::FloatRange( searchTime, m_times[ searchIndex + 1 ] ),
                                              gm::IntRange( searchIndex, searchIndex + 1 ) );
                }

                lowerBound = searchIndex + 1;
                continue;
            }
            else // ( i_time < searchTime )
            {
                GM_ASSERT( searchIndex - 1 >= 0 );
                if ( i_time > m_times[ searchIndex - 1 ] )
                {
                    return _InterpolateValue( i_time,
                                              gm::FloatRange( m_times[ searchIndex - 1 ], searchTime ),
                                              gm::IntRange( searchIndex - 1, searchIndex ) );
                }

                upperBound = searchIndex - 1;
                continue;
            }
        }
    }

    // Time sample array with with associated values.
    // These arrays are sorted, and correspond to one another!
    std::vector< float >  m_times;
    std::vector< ValueT > m_values;
};

RAYTRACE_NS_CLOSE
