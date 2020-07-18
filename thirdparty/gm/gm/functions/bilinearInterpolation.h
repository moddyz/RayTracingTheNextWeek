//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/bilinearInterpolation.h
/// \ingroup gm_functions_basic
///
/// Bilinear interpolation.
///
/// Interpolate within a 2D rectilinear grid, bounded by 4 anchoring corner points, with two weights along the
/// two axis.

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
/// \param i_corner00 The corner at (0, 0).
/// \param i_corner10 The corner at (1, 0).
/// \param i_corner01 The corner at (0, 1).
/// \param i_corner11 The corner at (1, 1).
/// \param i_weight The weights for interpolating in the X and Y axis.
///
/// \pre \p i_weight.X() and \p i_weight.Y() must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline float BilinearInterpolation( const float& i_corner00,
                                                   const float& i_corner10,
                                                   const float& i_corner01,
                                                   const float& i_corner11,
                                                   const Vec2f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );

    // Linearly interpolate along the X axis to produce two intermediate values.
    float interm0 = gm::LinearInterpolation( i_corner00, i_corner10, i_weight.X() );
    float interm1 = gm::LinearInterpolation( i_corner01, i_corner11, i_weight.X() );

    // Linearly interpolate the intermediate values along the Y axis.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Y() );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner00 The corner at (0, 0).
/// \param i_corner10 The corner at (1, 0).
/// \param i_corner01 The corner at (0, 1).
/// \param i_corner11 The corner at (1, 1).
/// \param i_weight The weights for interpolating in the X and Y axis.
///
/// \pre \p i_weight.X() and \p i_weight.Y() must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Mat3f BilinearInterpolation( const Mat3f& i_corner00,
                                                   const Mat3f& i_corner10,
                                                   const Mat3f& i_corner01,
                                                   const Mat3f& i_corner11,
                                                   const Vec2f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );

    // Linearly interpolate along the X axis to produce two intermediate values.
    gm::Mat3f interm0 = gm::LinearInterpolation( i_corner00, i_corner10, i_weight.X() );
    gm::Mat3f interm1 = gm::LinearInterpolation( i_corner01, i_corner11, i_weight.X() );

    // Linearly interpolate the intermediate values along the Y axis.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Y() );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner00 The corner at (0, 0).
/// \param i_corner10 The corner at (1, 0).
/// \param i_corner01 The corner at (0, 1).
/// \param i_corner11 The corner at (1, 1).
/// \param i_weight The weights for interpolating in the X and Y axis.
///
/// \pre \p i_weight.X() and \p i_weight.Y() must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Mat4f BilinearInterpolation( const Mat4f& i_corner00,
                                                   const Mat4f& i_corner10,
                                                   const Mat4f& i_corner01,
                                                   const Mat4f& i_corner11,
                                                   const Vec2f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );

    // Linearly interpolate along the X axis to produce two intermediate values.
    gm::Mat4f interm0 = gm::LinearInterpolation( i_corner00, i_corner10, i_weight.X() );
    gm::Mat4f interm1 = gm::LinearInterpolation( i_corner01, i_corner11, i_weight.X() );

    // Linearly interpolate the intermediate values along the Y axis.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Y() );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner00 The corner at (0, 0).
/// \param i_corner10 The corner at (1, 0).
/// \param i_corner01 The corner at (0, 1).
/// \param i_corner11 The corner at (1, 1).
/// \param i_weight The weights for interpolating in the X and Y axis.
///
/// \pre \p i_weight.X() and \p i_weight.Y() must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Vec2f BilinearInterpolation( const Vec2f& i_corner00,
                                                   const Vec2f& i_corner10,
                                                   const Vec2f& i_corner01,
                                                   const Vec2f& i_corner11,
                                                   const Vec2f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );

    // Linearly interpolate along the X axis to produce two intermediate values.
    gm::Vec2f interm0 = gm::LinearInterpolation( i_corner00, i_corner10, i_weight.X() );
    gm::Vec2f interm1 = gm::LinearInterpolation( i_corner01, i_corner11, i_weight.X() );

    // Linearly interpolate the intermediate values along the Y axis.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Y() );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner00 The corner at (0, 0).
/// \param i_corner10 The corner at (1, 0).
/// \param i_corner01 The corner at (0, 1).
/// \param i_corner11 The corner at (1, 1).
/// \param i_weight The weights for interpolating in the X and Y axis.
///
/// \pre \p i_weight.X() and \p i_weight.Y() must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Vec3f BilinearInterpolation( const Vec3f& i_corner00,
                                                   const Vec3f& i_corner10,
                                                   const Vec3f& i_corner01,
                                                   const Vec3f& i_corner11,
                                                   const Vec2f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );

    // Linearly interpolate along the X axis to produce two intermediate values.
    gm::Vec3f interm0 = gm::LinearInterpolation( i_corner00, i_corner10, i_weight.X() );
    gm::Vec3f interm1 = gm::LinearInterpolation( i_corner01, i_corner11, i_weight.X() );

    // Linearly interpolate the intermediate values along the Y axis.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Y() );
}

/// Bilinearly interpolate in a 2D rectilinear grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner00 The corner at (0, 0).
/// \param i_corner10 The corner at (1, 0).
/// \param i_corner01 The corner at (0, 1).
/// \param i_corner11 The corner at (1, 1).
/// \param i_weight The weights for interpolating in the X and Y axis.
///
/// \pre \p i_weight.X() and \p i_weight.Y() must be in the range of [0,1].
///
/// \return Bilinearly interpolated value.
GM_HOST_DEVICE inline Vec4f BilinearInterpolation( const Vec4f& i_corner00,
                                                   const Vec4f& i_corner10,
                                                   const Vec4f& i_corner01,
                                                   const Vec4f& i_corner11,
                                                   const Vec2f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );

    // Linearly interpolate along the X axis to produce two intermediate values.
    gm::Vec4f interm0 = gm::LinearInterpolation( i_corner00, i_corner10, i_weight.X() );
    gm::Vec4f interm1 = gm::LinearInterpolation( i_corner01, i_corner11, i_weight.X() );

    // Linearly interpolate the intermediate values along the Y axis.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Y() );
}

GM_NS_CLOSE