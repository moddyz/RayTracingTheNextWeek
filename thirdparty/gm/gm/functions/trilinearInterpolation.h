//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/trilinearInterpolation.h
/// \ingroup gm_functions_basic
///
/// Trilinear interpolation.
///
/// Interpolate within a 3D grid, bounded by 8 anchoring corner points, with 3 weights
/// (one for each interpolating dimension).

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>
#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <gm/functions/bilinearInterpolation.h>
#include <gm/functions/linearInterpolation.h>

GM_NS_OPEN

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner000 The \p (0, 0, 0) corner point of the grid.
/// \param i_corner100 The \p (0, 0, 1) corner point of the grid.
/// \param i_corner010 The \p (0, 1, 0) corner point of the grid.
/// \param i_corner110 The \p (0, 1, 1) corner point of the grid.
/// \param i_corner001 The \p (1, 0, 0) corner point of the grid.
/// \param i_corner101 The \p (1, 0, 1) corner point of the grid.
/// \param i_corner011 The \p (1, 1, 0) corner point of the grid.
/// \param i_corner111 The \p (1, 1, 1) corner point of the grid.
/// \param i_weight The weight for linearly interpolating across the 3 axis.
///
/// \pre \p i_weight.X(), \p i_weight.Y(), and \p i_weight.Z() must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline float TrilinearInterpolation( const float& i_corner000,
                                                    const float& i_corner100,
                                                    const float& i_corner010,
                                                    const float& i_corner110,
                                                    const float& i_corner001,
                                                    const float& i_corner101,
                                                    const float& i_corner011,
                                                    const float& i_corner111,
                                                    const Vec3f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );
    GM_ASSERT_MSG( i_weight.Z() >= 0.0f && i_weight.Z() <= 1.0f,
                   "Expected i_weight.Z() between [0,1], got %f\n",
                   i_weight.Z() );

    // Bilinearly interpolate the two sides orthogonal to the Z-axis of the grid.
    float interm0 = gm::BilinearInterpolation( i_corner000,
                                               i_corner100,
                                               i_corner010,
                                               i_corner110,
                                               gm::Vec2f( i_weight.X(), i_weight.Y() ) );
    float interm1 = gm::BilinearInterpolation( i_corner001,
                                               i_corner101,
                                               i_corner011,
                                               i_corner111,
                                               gm::Vec2f( i_weight.X(), i_weight.Y() ) );

    // Linearly interpolate the two intermediate values based on the Z weight.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Z() );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner000 The \p (0, 0, 0) corner point of the grid.
/// \param i_corner100 The \p (0, 0, 1) corner point of the grid.
/// \param i_corner010 The \p (0, 1, 0) corner point of the grid.
/// \param i_corner110 The \p (0, 1, 1) corner point of the grid.
/// \param i_corner001 The \p (1, 0, 0) corner point of the grid.
/// \param i_corner101 The \p (1, 0, 1) corner point of the grid.
/// \param i_corner011 The \p (1, 1, 0) corner point of the grid.
/// \param i_corner111 The \p (1, 1, 1) corner point of the grid.
/// \param i_weight The weight for linearly interpolating across the 3 axis.
///
/// \pre \p i_weight.X(), \p i_weight.Y(), and \p i_weight.Z() must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Mat3f TrilinearInterpolation( const Mat3f& i_corner000,
                                                    const Mat3f& i_corner100,
                                                    const Mat3f& i_corner010,
                                                    const Mat3f& i_corner110,
                                                    const Mat3f& i_corner001,
                                                    const Mat3f& i_corner101,
                                                    const Mat3f& i_corner011,
                                                    const Mat3f& i_corner111,
                                                    const Vec3f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );
    GM_ASSERT_MSG( i_weight.Z() >= 0.0f && i_weight.Z() <= 1.0f,
                   "Expected i_weight.Z() between [0,1], got %f\n",
                   i_weight.Z() );

    // Bilinearly interpolate the two sides orthogonal to the Z-axis of the grid.
    gm::Mat3f interm0 = gm::BilinearInterpolation( i_corner000,
                                                   i_corner100,
                                                   i_corner010,
                                                   i_corner110,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );
    gm::Mat3f interm1 = gm::BilinearInterpolation( i_corner001,
                                                   i_corner101,
                                                   i_corner011,
                                                   i_corner111,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );

    // Linearly interpolate the two intermediate values based on the Z weight.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Z() );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner000 The \p (0, 0, 0) corner point of the grid.
/// \param i_corner100 The \p (0, 0, 1) corner point of the grid.
/// \param i_corner010 The \p (0, 1, 0) corner point of the grid.
/// \param i_corner110 The \p (0, 1, 1) corner point of the grid.
/// \param i_corner001 The \p (1, 0, 0) corner point of the grid.
/// \param i_corner101 The \p (1, 0, 1) corner point of the grid.
/// \param i_corner011 The \p (1, 1, 0) corner point of the grid.
/// \param i_corner111 The \p (1, 1, 1) corner point of the grid.
/// \param i_weight The weight for linearly interpolating across the 3 axis.
///
/// \pre \p i_weight.X(), \p i_weight.Y(), and \p i_weight.Z() must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Mat4f TrilinearInterpolation( const Mat4f& i_corner000,
                                                    const Mat4f& i_corner100,
                                                    const Mat4f& i_corner010,
                                                    const Mat4f& i_corner110,
                                                    const Mat4f& i_corner001,
                                                    const Mat4f& i_corner101,
                                                    const Mat4f& i_corner011,
                                                    const Mat4f& i_corner111,
                                                    const Vec3f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );
    GM_ASSERT_MSG( i_weight.Z() >= 0.0f && i_weight.Z() <= 1.0f,
                   "Expected i_weight.Z() between [0,1], got %f\n",
                   i_weight.Z() );

    // Bilinearly interpolate the two sides orthogonal to the Z-axis of the grid.
    gm::Mat4f interm0 = gm::BilinearInterpolation( i_corner000,
                                                   i_corner100,
                                                   i_corner010,
                                                   i_corner110,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );
    gm::Mat4f interm1 = gm::BilinearInterpolation( i_corner001,
                                                   i_corner101,
                                                   i_corner011,
                                                   i_corner111,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );

    // Linearly interpolate the two intermediate values based on the Z weight.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Z() );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner000 The \p (0, 0, 0) corner point of the grid.
/// \param i_corner100 The \p (0, 0, 1) corner point of the grid.
/// \param i_corner010 The \p (0, 1, 0) corner point of the grid.
/// \param i_corner110 The \p (0, 1, 1) corner point of the grid.
/// \param i_corner001 The \p (1, 0, 0) corner point of the grid.
/// \param i_corner101 The \p (1, 0, 1) corner point of the grid.
/// \param i_corner011 The \p (1, 1, 0) corner point of the grid.
/// \param i_corner111 The \p (1, 1, 1) corner point of the grid.
/// \param i_weight The weight for linearly interpolating across the 3 axis.
///
/// \pre \p i_weight.X(), \p i_weight.Y(), and \p i_weight.Z() must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Vec2f TrilinearInterpolation( const Vec2f& i_corner000,
                                                    const Vec2f& i_corner100,
                                                    const Vec2f& i_corner010,
                                                    const Vec2f& i_corner110,
                                                    const Vec2f& i_corner001,
                                                    const Vec2f& i_corner101,
                                                    const Vec2f& i_corner011,
                                                    const Vec2f& i_corner111,
                                                    const Vec3f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );
    GM_ASSERT_MSG( i_weight.Z() >= 0.0f && i_weight.Z() <= 1.0f,
                   "Expected i_weight.Z() between [0,1], got %f\n",
                   i_weight.Z() );

    // Bilinearly interpolate the two sides orthogonal to the Z-axis of the grid.
    gm::Vec2f interm0 = gm::BilinearInterpolation( i_corner000,
                                                   i_corner100,
                                                   i_corner010,
                                                   i_corner110,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );
    gm::Vec2f interm1 = gm::BilinearInterpolation( i_corner001,
                                                   i_corner101,
                                                   i_corner011,
                                                   i_corner111,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );

    // Linearly interpolate the two intermediate values based on the Z weight.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Z() );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner000 The \p (0, 0, 0) corner point of the grid.
/// \param i_corner100 The \p (0, 0, 1) corner point of the grid.
/// \param i_corner010 The \p (0, 1, 0) corner point of the grid.
/// \param i_corner110 The \p (0, 1, 1) corner point of the grid.
/// \param i_corner001 The \p (1, 0, 0) corner point of the grid.
/// \param i_corner101 The \p (1, 0, 1) corner point of the grid.
/// \param i_corner011 The \p (1, 1, 0) corner point of the grid.
/// \param i_corner111 The \p (1, 1, 1) corner point of the grid.
/// \param i_weight The weight for linearly interpolating across the 3 axis.
///
/// \pre \p i_weight.X(), \p i_weight.Y(), and \p i_weight.Z() must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Vec3f TrilinearInterpolation( const Vec3f& i_corner000,
                                                    const Vec3f& i_corner100,
                                                    const Vec3f& i_corner010,
                                                    const Vec3f& i_corner110,
                                                    const Vec3f& i_corner001,
                                                    const Vec3f& i_corner101,
                                                    const Vec3f& i_corner011,
                                                    const Vec3f& i_corner111,
                                                    const Vec3f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );
    GM_ASSERT_MSG( i_weight.Z() >= 0.0f && i_weight.Z() <= 1.0f,
                   "Expected i_weight.Z() between [0,1], got %f\n",
                   i_weight.Z() );

    // Bilinearly interpolate the two sides orthogonal to the Z-axis of the grid.
    gm::Vec3f interm0 = gm::BilinearInterpolation( i_corner000,
                                                   i_corner100,
                                                   i_corner010,
                                                   i_corner110,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );
    gm::Vec3f interm1 = gm::BilinearInterpolation( i_corner001,
                                                   i_corner101,
                                                   i_corner011,
                                                   i_corner111,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );

    // Linearly interpolate the two intermediate values based on the Z weight.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Z() );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_corner000 The \p (0, 0, 0) corner point of the grid.
/// \param i_corner100 The \p (0, 0, 1) corner point of the grid.
/// \param i_corner010 The \p (0, 1, 0) corner point of the grid.
/// \param i_corner110 The \p (0, 1, 1) corner point of the grid.
/// \param i_corner001 The \p (1, 0, 0) corner point of the grid.
/// \param i_corner101 The \p (1, 0, 1) corner point of the grid.
/// \param i_corner011 The \p (1, 1, 0) corner point of the grid.
/// \param i_corner111 The \p (1, 1, 1) corner point of the grid.
/// \param i_weight The weight for linearly interpolating across the 3 axis.
///
/// \pre \p i_weight.X(), \p i_weight.Y(), and \p i_weight.Z() must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Vec4f TrilinearInterpolation( const Vec4f& i_corner000,
                                                    const Vec4f& i_corner100,
                                                    const Vec4f& i_corner010,
                                                    const Vec4f& i_corner110,
                                                    const Vec4f& i_corner001,
                                                    const Vec4f& i_corner101,
                                                    const Vec4f& i_corner011,
                                                    const Vec4f& i_corner111,
                                                    const Vec3f& i_weight )
{
    GM_ASSERT_MSG( i_weight.X() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.X() between [0,1], got %f\n",
                   i_weight.X() );
    GM_ASSERT_MSG( i_weight.Y() >= 0.0f && i_weight.X() <= 1.0f,
                   "Expected i_weight.Y() between [0,1], got %f\n",
                   i_weight.Y() );
    GM_ASSERT_MSG( i_weight.Z() >= 0.0f && i_weight.Z() <= 1.0f,
                   "Expected i_weight.Z() between [0,1], got %f\n",
                   i_weight.Z() );

    // Bilinearly interpolate the two sides orthogonal to the Z-axis of the grid.
    gm::Vec4f interm0 = gm::BilinearInterpolation( i_corner000,
                                                   i_corner100,
                                                   i_corner010,
                                                   i_corner110,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );
    gm::Vec4f interm1 = gm::BilinearInterpolation( i_corner001,
                                                   i_corner101,
                                                   i_corner011,
                                                   i_corner111,
                                                   gm::Vec2f( i_weight.X(), i_weight.Y() ) );

    // Linearly interpolate the two intermediate values based on the Z weight.
    return gm::LinearInterpolation( interm0, interm1, i_weight.Z() );
}

GM_NS_CLOSE