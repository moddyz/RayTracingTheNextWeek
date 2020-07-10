#pragma once

/// \file base/almost.h

#include <gm/gm.h>

GM_NS_OPEN

/// Function for comparing whether two values \p i_valueA and \p i_valueB are almost equal,
/// within the threshold \p i_threshold.
///
/// \tparam ValueT the type of value.
///
/// \return whether the input values are within the threshold \p i_threshold.
template < typename ValueT >
bool AlmostEqual( const ValueT& i_valueA, const ValueT& i_valueB, const ValueT& i_threshold = 0.0001 )
{
    return std::abs( i_valueA - i_valueB ) < i_threshold;
}

GM_NS_CLOSE
