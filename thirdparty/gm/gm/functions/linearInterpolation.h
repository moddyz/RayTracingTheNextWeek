//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/linearInterpolation.h
/// \ingroup gm_functions_basic
///
/// Linear interpolation.
///
/// Linearly interpolate from a source to target value with a supplied weight:
///
/// \f[ ((1.0-w)*S)+(w*T)=V \f]
/// \f[ w=\textnormal{Weight} \f]
/// \f[ S=\textnormal{Source value} \f]
/// \f[ T=\textnormal{Target value} \f]
/// \f[ V=\textnormal{Interpolated value} \f]

#include <gm/gm.h>

#include <gm/types/floatRange.h>
#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec2fRange.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec3fRange.h>
#include <gm/types/vec4f.h>
#include <gm/types/vec4fRange.h>

GM_NS_OPEN

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline float LinearInterpolation( const float& i_source, const float& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return ( ( 1.0f - i_weight ) * i_source ) + ( i_weight * i_target );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline Mat3f LinearInterpolation( const Mat3f& i_source, const Mat3f& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return ( ( 1.0f - i_weight ) * i_source ) + ( i_weight * i_target );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline Mat4f LinearInterpolation( const Mat4f& i_source, const Mat4f& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return ( ( 1.0f - i_weight ) * i_source ) + ( i_weight * i_target );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline Vec2f LinearInterpolation( const Vec2f& i_source, const Vec2f& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return ( ( 1.0f - i_weight ) * i_source ) + ( i_weight * i_target );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline Vec3f LinearInterpolation( const Vec3f& i_source, const Vec3f& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return ( ( 1.0f - i_weight ) * i_source ) + ( i_weight * i_target );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline Vec4f LinearInterpolation( const Vec4f& i_source, const Vec4f& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return ( ( 1.0f - i_weight ) * i_source ) + ( i_weight * i_target );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline Vec2fRange
LinearInterpolation( const Vec2fRange& i_source, const Vec2fRange& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return Vec2fRange( ( ( 1.0f - i_weight ) * i_source.Min() ) + ( i_weight * i_target.Min() ),
                       ( ( 1.0f - i_weight ) * i_source.Max() ) + ( i_weight * i_target.Max() ) );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline Vec3fRange
LinearInterpolation( const Vec3fRange& i_source, const Vec3fRange& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return Vec3fRange( ( ( 1.0f - i_weight ) * i_source.Min() ) + ( i_weight * i_target.Min() ),
                       ( ( 1.0f - i_weight ) * i_source.Max() ) + ( i_weight * i_target.Max() ) );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline Vec4fRange
LinearInterpolation( const Vec4fRange& i_source, const Vec4fRange& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return Vec4fRange( ( ( 1.0f - i_weight ) * i_source.Min() ) + ( i_weight * i_target.Min() ),
                       ( ( 1.0f - i_weight ) * i_source.Max() ) + ( i_weight * i_target.Max() ) );
}

/// Linearly interpolate between \p i_source and \p i_target, with weight \p i_weight.
/// \ingroup gm_functions_basic
///
/// \param i_source Source value to interpolate from.
/// \param i_target Target value to interpolate to.
/// \param i_weight Describes the percentage of \p i_target in the final, interpolated value.
///
/// \pre \p i_weight must be in the range of [0,1].
///
/// \return Linearly interpolated value.
GM_HOST_DEVICE inline FloatRange
LinearInterpolation( const FloatRange& i_source, const FloatRange& i_target, const float& i_weight )
{
    GM_ASSERT_MSG( i_weight >= 0.0f && i_weight <= 1.0f, "Expected i_weight between [0,1], got %f\n", i_weight );
    return FloatRange( ( ( 1.0f - i_weight ) * i_source.Min() ) + ( i_weight * i_target.Min() ),
                       ( ( 1.0f - i_weight ) * i_source.Max() ) + ( i_weight * i_target.Max() ) );
}

GM_NS_CLOSE