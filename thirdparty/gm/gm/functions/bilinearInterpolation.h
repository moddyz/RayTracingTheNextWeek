//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/bilinearInterpolation.h
/// \ingroup gm_functions_basic
///
/// Bilinear interpolation.
///
/// Interpolate within a 2D rectilinear grid, bounded by 4 anchoring values, with two weights.
///
/// Linearly interpolating across the \em first dimension using the \em first weight will result in two values.
/// These two values are then linearly interpolated as a function of the \em second weight.

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <gm/functions/linearInterpolation.h>

GM_NS_OPEN

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_value00 The value at (0, 0).
/// \param i_value01 The value at (0, 1).
/// \param i_value10 The value at (1, 0).
/// \param i_value11 The value at (1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
///
/// \pre \p i_weightX and \p i_weightY must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline float BilinearInterpolation( const float& i_value00,
                                                   const float& i_value01,
                                                   const float& i_value10,
                                                   const float& i_value11,
                                                   const float& i_weightX,
                                                   const float& i_weightY )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );

    float value0 = gm::LinearInterpolation( i_value00, i_value01, i_weightX );
    float value1 = gm::LinearInterpolation( i_value10, i_value11, i_weightX );
    return gm::LinearInterpolation( value0, value1, i_weightY );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_value00 The value at (0, 0).
/// \param i_value01 The value at (0, 1).
/// \param i_value10 The value at (1, 0).
/// \param i_value11 The value at (1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
///
/// \pre \p i_weightX and \p i_weightY must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Mat3f BilinearInterpolation( const Mat3f& i_value00,
                                                   const Mat3f& i_value01,
                                                   const Mat3f& i_value10,
                                                   const Mat3f& i_value11,
                                                   const float& i_weightX,
                                                   const float& i_weightY )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );

    gm::Mat3f value0 = gm::LinearInterpolation( i_value00, i_value01, i_weightX );
    gm::Mat3f value1 = gm::LinearInterpolation( i_value10, i_value11, i_weightX );
    return gm::LinearInterpolation( value0, value1, i_weightY );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_value00 The value at (0, 0).
/// \param i_value01 The value at (0, 1).
/// \param i_value10 The value at (1, 0).
/// \param i_value11 The value at (1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
///
/// \pre \p i_weightX and \p i_weightY must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Mat4f BilinearInterpolation( const Mat4f& i_value00,
                                                   const Mat4f& i_value01,
                                                   const Mat4f& i_value10,
                                                   const Mat4f& i_value11,
                                                   const float& i_weightX,
                                                   const float& i_weightY )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );

    gm::Mat4f value0 = gm::LinearInterpolation( i_value00, i_value01, i_weightX );
    gm::Mat4f value1 = gm::LinearInterpolation( i_value10, i_value11, i_weightX );
    return gm::LinearInterpolation( value0, value1, i_weightY );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_value00 The value at (0, 0).
/// \param i_value01 The value at (0, 1).
/// \param i_value10 The value at (1, 0).
/// \param i_value11 The value at (1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
///
/// \pre \p i_weightX and \p i_weightY must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Vec2f BilinearInterpolation( const Vec2f& i_value00,
                                                   const Vec2f& i_value01,
                                                   const Vec2f& i_value10,
                                                   const Vec2f& i_value11,
                                                   const float& i_weightX,
                                                   const float& i_weightY )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );

    gm::Vec2f value0 = gm::LinearInterpolation( i_value00, i_value01, i_weightX );
    gm::Vec2f value1 = gm::LinearInterpolation( i_value10, i_value11, i_weightX );
    return gm::LinearInterpolation( value0, value1, i_weightY );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_value00 The value at (0, 0).
/// \param i_value01 The value at (0, 1).
/// \param i_value10 The value at (1, 0).
/// \param i_value11 The value at (1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
///
/// \pre \p i_weightX and \p i_weightY must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Vec3f BilinearInterpolation( const Vec3f& i_value00,
                                                   const Vec3f& i_value01,
                                                   const Vec3f& i_value10,
                                                   const Vec3f& i_value11,
                                                   const float& i_weightX,
                                                   const float& i_weightY )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );

    gm::Vec3f value0 = gm::LinearInterpolation( i_value00, i_value01, i_weightX );
    gm::Vec3f value1 = gm::LinearInterpolation( i_value10, i_value11, i_weightX );
    return gm::LinearInterpolation( value0, value1, i_weightY );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_value00 The value at (0, 0).
/// \param i_value01 The value at (0, 1).
/// \param i_value10 The value at (1, 0).
/// \param i_value11 The value at (1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
///
/// \pre \p i_weightX and \p i_weightY must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Vec4f BilinearInterpolation( const Vec4f& i_value00,
                                                   const Vec4f& i_value01,
                                                   const Vec4f& i_value10,
                                                   const Vec4f& i_value11,
                                                   const float& i_weightX,
                                                   const float& i_weightY )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );

    gm::Vec4f value0 = gm::LinearInterpolation( i_value00, i_value01, i_weightX );
    gm::Vec4f value1 = gm::LinearInterpolation( i_value10, i_value11, i_weightX );
    return gm::LinearInterpolation( value0, value1, i_weightY );
}

GM_NS_CLOSE