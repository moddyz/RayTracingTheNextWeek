//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/linearMap.h
/// \ingroup gm_functions_basic
///
/// Linear mapping.
///
/// Map a value from a source range into a target range, such the ratio of the respective values within
/// their ranges remain constant:
///
/// \f[ R*(S_v-S_0)+T_0=T_v\f]
/// \f[ S_v=\textnormal{Source value} \f]
/// \f[ S_0,S_1=\textnormal{Source range} \f]
/// \f[ T_v=\textnormal{Target value} \f]
/// \f[ T_0,T_1=\textnormal{Target range} \f]
/// \f[ R=\frac{T_1-T_0}{S_1-S_0}=\textnormal{Ratio of the target to source range} \f]

#include <gm/gm.h>

#include <gm/types/floatRange.h>
#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

GM_NS_OPEN

/// Linearly maps a source value in range \p i_sourceRange into the range \p i_targetRange.
/// \ingroup gm_functions_basic
///
/// \param i_sourceValue Value to map from the source range.
/// \param i_sourceRange Source value range to map from.
/// \param i_targetRange Target value range to map to.
///
/// \pre \p i_sourceRange's min and max values cannot be equal.
///
/// \return Linearly mapped target value.
GM_HOST_DEVICE inline float
LinearMap( const float& i_sourceValue, const FloatRange& i_sourceRange, const FloatRange& i_targetRange )
{
    GM_ASSERT( i_sourceRange.Min() != i_sourceRange.Max() );
    float ratio = ( i_targetRange.Max() - i_targetRange.Min() ) / ( i_sourceRange.Max() - i_sourceRange.Min() );
    return i_targetRange.Min() + ( ratio * ( i_sourceValue - i_sourceRange.Min() ) );
}

/// Linearly maps a source value in range \p i_sourceRange into the range \p i_targetRange.
/// \ingroup gm_functions_basic
///
/// \param i_sourceValue Value to map from the source range.
/// \param i_sourceRange Source value range to map from.
/// \param i_targetRange Target value range to map to.
///
/// \pre \p i_sourceRange's min and max values cannot be equal.
///
/// \return Linearly mapped target value.
GM_HOST_DEVICE inline Mat3f
LinearMap( const Mat3f& i_sourceValue, const FloatRange& i_sourceRange, const FloatRange& i_targetRange )
{
    GM_ASSERT( i_sourceRange.Min() != i_sourceRange.Max() );
    float ratio = ( i_targetRange.Max() - i_targetRange.Min() ) / ( i_sourceRange.Max() - i_sourceRange.Min() );
    return Mat3f( i_targetRange.Min() + ( ratio * ( i_sourceValue[ 0 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 1 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 2 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 3 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 4 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 5 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 6 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 7 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 8 ] - i_sourceRange.Min() ) ) );
}

/// Linearly maps a source value in range \p i_sourceRange into the range \p i_targetRange.
/// \ingroup gm_functions_basic
///
/// \param i_sourceValue Value to map from the source range.
/// \param i_sourceRange Source value range to map from.
/// \param i_targetRange Target value range to map to.
///
/// \pre \p i_sourceRange's min and max values cannot be equal.
///
/// \return Linearly mapped target value.
GM_HOST_DEVICE inline Mat4f
LinearMap( const Mat4f& i_sourceValue, const FloatRange& i_sourceRange, const FloatRange& i_targetRange )
{
    GM_ASSERT( i_sourceRange.Min() != i_sourceRange.Max() );
    float ratio = ( i_targetRange.Max() - i_targetRange.Min() ) / ( i_sourceRange.Max() - i_sourceRange.Min() );
    return Mat4f( i_targetRange.Min() + ( ratio * ( i_sourceValue[ 0 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 1 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 2 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 3 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 4 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 5 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 6 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 7 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 8 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 9 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 10 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 11 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 12 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 13 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 14 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 15 ] - i_sourceRange.Min() ) ) );
}

/// Linearly maps a source value in range \p i_sourceRange into the range \p i_targetRange.
/// \ingroup gm_functions_basic
///
/// \param i_sourceValue Value to map from the source range.
/// \param i_sourceRange Source value range to map from.
/// \param i_targetRange Target value range to map to.
///
/// \pre \p i_sourceRange's min and max values cannot be equal.
///
/// \return Linearly mapped target value.
GM_HOST_DEVICE inline Vec2f
LinearMap( const Vec2f& i_sourceValue, const FloatRange& i_sourceRange, const FloatRange& i_targetRange )
{
    GM_ASSERT( i_sourceRange.Min() != i_sourceRange.Max() );
    float ratio = ( i_targetRange.Max() - i_targetRange.Min() ) / ( i_sourceRange.Max() - i_sourceRange.Min() );
    return Vec2f( i_targetRange.Min() + ( ratio * ( i_sourceValue[ 0 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 1 ] - i_sourceRange.Min() ) ) );
}

/// Linearly maps a source value in range \p i_sourceRange into the range \p i_targetRange.
/// \ingroup gm_functions_basic
///
/// \param i_sourceValue Value to map from the source range.
/// \param i_sourceRange Source value range to map from.
/// \param i_targetRange Target value range to map to.
///
/// \pre \p i_sourceRange's min and max values cannot be equal.
///
/// \return Linearly mapped target value.
GM_HOST_DEVICE inline Vec3f
LinearMap( const Vec3f& i_sourceValue, const FloatRange& i_sourceRange, const FloatRange& i_targetRange )
{
    GM_ASSERT( i_sourceRange.Min() != i_sourceRange.Max() );
    float ratio = ( i_targetRange.Max() - i_targetRange.Min() ) / ( i_sourceRange.Max() - i_sourceRange.Min() );
    return Vec3f( i_targetRange.Min() + ( ratio * ( i_sourceValue[ 0 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 1 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 2 ] - i_sourceRange.Min() ) ) );
}

/// Linearly maps a source value in range \p i_sourceRange into the range \p i_targetRange.
/// \ingroup gm_functions_basic
///
/// \param i_sourceValue Value to map from the source range.
/// \param i_sourceRange Source value range to map from.
/// \param i_targetRange Target value range to map to.
///
/// \pre \p i_sourceRange's min and max values cannot be equal.
///
/// \return Linearly mapped target value.
GM_HOST_DEVICE inline Vec4f
LinearMap( const Vec4f& i_sourceValue, const FloatRange& i_sourceRange, const FloatRange& i_targetRange )
{
    GM_ASSERT( i_sourceRange.Min() != i_sourceRange.Max() );
    float ratio = ( i_targetRange.Max() - i_targetRange.Min() ) / ( i_sourceRange.Max() - i_sourceRange.Min() );
    return Vec4f( i_targetRange.Min() + ( ratio * ( i_sourceValue[ 0 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 1 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 2 ] - i_sourceRange.Min() ) ),
                  i_targetRange.Min() + ( ratio * ( i_sourceValue[ 3 ] - i_sourceRange.Min() ) ) );
}

GM_NS_CLOSE