//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/randomNumber.h
/// \ingroup gm_functions_basic
///
/// Thread-safe random number generation.
///
/// Uniformly generate a random number within a numeric range.

#include <gm/gm.h>

#include <gm/base/assert.h>

#include <gm/types/floatRange.h>
#include <gm/types/intRange.h>

#include <random>

GM_NS_OPEN

/// Generates a random number within \p i_range.
/// \ingroup gm_functions_basic
///
/// \warning Limit usage across multiple translation units.
/// A random number generator is allocated per-thread, per consumed translation unit.
///
/// \param i_range Range to limit the generated number.
///
/// \return Randomly generated number.
GM_HOST_DEVICE inline float RandomNumber( const FloatRange& i_range )
{
    GM_ASSERT( i_range.Min() != i_range.Max() );
    static thread_local std::mt19937        generator;
    std::uniform_real_distribution< float > distribution( i_range.Min(), i_range.Max() );
    return distribution( generator );
}

/// Generates a random number within \p i_range.
/// \ingroup gm_functions_basic
///
/// \warning Limit usage across multiple translation units.
/// A random number generator is allocated per-thread, per consumed translation unit.
///
/// \param i_range Range to limit the generated number.
///
/// \return Randomly generated number.
GM_HOST_DEVICE inline int RandomNumber( const IntRange& i_range )
{
    GM_ASSERT( i_range.Min() != i_range.Max() );
    static thread_local std::mt19937     generator;
    std::uniform_int_distribution< int > distribution( i_range.Min(), i_range.Max() - 1 );
    return distribution( generator );
}

GM_NS_CLOSE