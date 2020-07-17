//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/trilinearInterpolation.h
/// \ingroup gm_functions_basic
///
/// Trilinear interpolation.
///
/// Interpolate within a 3D rectilinear grid, bounded by 8 anchoring values, with 3 weights
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
/// \param i_value000 The value at (0, 0, 0).
/// \param i_value001 The value at (0, 0, 1).
/// \param i_value010 The value at (0, 1, 0).
/// \param i_value011 The value at (0, 1, 1).
/// \param i_value100 The value at (1, 0, 0).
/// \param i_value101 The value at (1, 0, 1).
/// \param i_value110 The value at (1, 1, 0).
/// \param i_value111 The value at (1, 1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
/// \param i_weightZ The weight for linearly interpolating across the Z coordinates.
///
/// \pre \p i_weightX, \p i_weightY, and \p i_weightZ must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline float TrilinearInterpolation( const float& i_value000,
                                                    const float& i_value001,
                                                    const float& i_value010,
                                                    const float& i_value011,
                                                    const float& i_value100,
                                                    const float& i_value101,
                                                    const float& i_value110,
                                                    const float& i_value111,
                                                    const float& i_weightX,
                                                    const float& i_weightY,
                                                    const float& i_weightZ )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );
    GM_ASSERT_MSG( i_weightZ >= 0.0f && i_weightZ <= 1.0f, "Expected i_weightZ between [0,1], got %f\n", i_weightZ );

    float value0 = gm::BilinearInterpolation( i_value000, i_value001, i_value010, i_value011, i_weightX, i_weightY );
    float value1 = gm::BilinearInterpolation( i_value100, i_value101, i_value110, i_value111, i_weightX, i_weightY );
    return gm::LinearInterpolation( value0, value1, i_weightZ );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_value000 The value at (0, 0, 0).
/// \param i_value001 The value at (0, 0, 1).
/// \param i_value010 The value at (0, 1, 0).
/// \param i_value011 The value at (0, 1, 1).
/// \param i_value100 The value at (1, 0, 0).
/// \param i_value101 The value at (1, 0, 1).
/// \param i_value110 The value at (1, 1, 0).
/// \param i_value111 The value at (1, 1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
/// \param i_weightZ The weight for linearly interpolating across the Z coordinates.
///
/// \pre \p i_weightX, \p i_weightY, and \p i_weightZ must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Mat3f TrilinearInterpolation( const Mat3f& i_value000,
                                                    const Mat3f& i_value001,
                                                    const Mat3f& i_value010,
                                                    const Mat3f& i_value011,
                                                    const Mat3f& i_value100,
                                                    const Mat3f& i_value101,
                                                    const Mat3f& i_value110,
                                                    const Mat3f& i_value111,
                                                    const float& i_weightX,
                                                    const float& i_weightY,
                                                    const float& i_weightZ )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );
    GM_ASSERT_MSG( i_weightZ >= 0.0f && i_weightZ <= 1.0f, "Expected i_weightZ between [0,1], got %f\n", i_weightZ );

    gm::Mat3f value0 =
        gm::BilinearInterpolation( i_value000, i_value001, i_value010, i_value011, i_weightX, i_weightY );
    gm::Mat3f value1 =
        gm::BilinearInterpolation( i_value100, i_value101, i_value110, i_value111, i_weightX, i_weightY );
    return gm::LinearInterpolation( value0, value1, i_weightZ );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_value000 The value at (0, 0, 0).
/// \param i_value001 The value at (0, 0, 1).
/// \param i_value010 The value at (0, 1, 0).
/// \param i_value011 The value at (0, 1, 1).
/// \param i_value100 The value at (1, 0, 0).
/// \param i_value101 The value at (1, 0, 1).
/// \param i_value110 The value at (1, 1, 0).
/// \param i_value111 The value at (1, 1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
/// \param i_weightZ The weight for linearly interpolating across the Z coordinates.
///
/// \pre \p i_weightX, \p i_weightY, and \p i_weightZ must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Mat4f TrilinearInterpolation( const Mat4f& i_value000,
                                                    const Mat4f& i_value001,
                                                    const Mat4f& i_value010,
                                                    const Mat4f& i_value011,
                                                    const Mat4f& i_value100,
                                                    const Mat4f& i_value101,
                                                    const Mat4f& i_value110,
                                                    const Mat4f& i_value111,
                                                    const float& i_weightX,
                                                    const float& i_weightY,
                                                    const float& i_weightZ )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );
    GM_ASSERT_MSG( i_weightZ >= 0.0f && i_weightZ <= 1.0f, "Expected i_weightZ between [0,1], got %f\n", i_weightZ );

    gm::Mat4f value0 =
        gm::BilinearInterpolation( i_value000, i_value001, i_value010, i_value011, i_weightX, i_weightY );
    gm::Mat4f value1 =
        gm::BilinearInterpolation( i_value100, i_value101, i_value110, i_value111, i_weightX, i_weightY );
    return gm::LinearInterpolation( value0, value1, i_weightZ );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_value000 The value at (0, 0, 0).
/// \param i_value001 The value at (0, 0, 1).
/// \param i_value010 The value at (0, 1, 0).
/// \param i_value011 The value at (0, 1, 1).
/// \param i_value100 The value at (1, 0, 0).
/// \param i_value101 The value at (1, 0, 1).
/// \param i_value110 The value at (1, 1, 0).
/// \param i_value111 The value at (1, 1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
/// \param i_weightZ The weight for linearly interpolating across the Z coordinates.
///
/// \pre \p i_weightX, \p i_weightY, and \p i_weightZ must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Vec2f TrilinearInterpolation( const Vec2f& i_value000,
                                                    const Vec2f& i_value001,
                                                    const Vec2f& i_value010,
                                                    const Vec2f& i_value011,
                                                    const Vec2f& i_value100,
                                                    const Vec2f& i_value101,
                                                    const Vec2f& i_value110,
                                                    const Vec2f& i_value111,
                                                    const float& i_weightX,
                                                    const float& i_weightY,
                                                    const float& i_weightZ )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );
    GM_ASSERT_MSG( i_weightZ >= 0.0f && i_weightZ <= 1.0f, "Expected i_weightZ between [0,1], got %f\n", i_weightZ );

    gm::Vec2f value0 =
        gm::BilinearInterpolation( i_value000, i_value001, i_value010, i_value011, i_weightX, i_weightY );
    gm::Vec2f value1 =
        gm::BilinearInterpolation( i_value100, i_value101, i_value110, i_value111, i_weightX, i_weightY );
    return gm::LinearInterpolation( value0, value1, i_weightZ );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_value000 The value at (0, 0, 0).
/// \param i_value001 The value at (0, 0, 1).
/// \param i_value010 The value at (0, 1, 0).
/// \param i_value011 The value at (0, 1, 1).
/// \param i_value100 The value at (1, 0, 0).
/// \param i_value101 The value at (1, 0, 1).
/// \param i_value110 The value at (1, 1, 0).
/// \param i_value111 The value at (1, 1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
/// \param i_weightZ The weight for linearly interpolating across the Z coordinates.
///
/// \pre \p i_weightX, \p i_weightY, and \p i_weightZ must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Vec3f TrilinearInterpolation( const Vec3f& i_value000,
                                                    const Vec3f& i_value001,
                                                    const Vec3f& i_value010,
                                                    const Vec3f& i_value011,
                                                    const Vec3f& i_value100,
                                                    const Vec3f& i_value101,
                                                    const Vec3f& i_value110,
                                                    const Vec3f& i_value111,
                                                    const float& i_weightX,
                                                    const float& i_weightY,
                                                    const float& i_weightZ )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );
    GM_ASSERT_MSG( i_weightZ >= 0.0f && i_weightZ <= 1.0f, "Expected i_weightZ between [0,1], got %f\n", i_weightZ );

    gm::Vec3f value0 =
        gm::BilinearInterpolation( i_value000, i_value001, i_value010, i_value011, i_weightX, i_weightY );
    gm::Vec3f value1 =
        gm::BilinearInterpolation( i_value100, i_value101, i_value110, i_value111, i_weightX, i_weightY );
    return gm::LinearInterpolation( value0, value1, i_weightZ );
}

/// Trilinearly interpolate in a rectilinear 3D grid.
/// \ingroup gm_functions_basic
///
/// \param i_value000 The value at (0, 0, 0).
/// \param i_value001 The value at (0, 0, 1).
/// \param i_value010 The value at (0, 1, 0).
/// \param i_value011 The value at (0, 1, 1).
/// \param i_value100 The value at (1, 0, 0).
/// \param i_value101 The value at (1, 0, 1).
/// \param i_value110 The value at (1, 1, 0).
/// \param i_value111 The value at (1, 1, 1).
/// \param i_weightX The weight for linearly interpolating across the X coordinates.
/// \param i_weightY The weight for linearly interpolating across the Y coordinates.
/// \param i_weightZ The weight for linearly interpolating across the Z coordinates.
///
/// \pre \p i_weightX, \p i_weightY, and \p i_weightZ must be in the range of [0,1].
///
/// \return Trilinearly interpolated value.
GM_HOST_DEVICE inline Vec4f TrilinearInterpolation( const Vec4f& i_value000,
                                                    const Vec4f& i_value001,
                                                    const Vec4f& i_value010,
                                                    const Vec4f& i_value011,
                                                    const Vec4f& i_value100,
                                                    const Vec4f& i_value101,
                                                    const Vec4f& i_value110,
                                                    const Vec4f& i_value111,
                                                    const float& i_weightX,
                                                    const float& i_weightY,
                                                    const float& i_weightZ )
{
    GM_ASSERT_MSG( i_weightX >= 0.0f && i_weightX <= 1.0f, "Expected i_weightX between [0,1], got %f\n", i_weightX );
    GM_ASSERT_MSG( i_weightY >= 0.0f && i_weightX <= 1.0f, "Expected i_weightY between [0,1], got %f\n", i_weightY );
    GM_ASSERT_MSG( i_weightZ >= 0.0f && i_weightZ <= 1.0f, "Expected i_weightZ between [0,1], got %f\n", i_weightZ );

    gm::Vec4f value0 =
        gm::BilinearInterpolation( i_value000, i_value001, i_value010, i_value011, i_weightX, i_weightY );
    gm::Vec4f value1 =
        gm::BilinearInterpolation( i_value100, i_value101, i_value110, i_value111, i_weightX, i_weightY );
    return gm::LinearInterpolation( value0, value1, i_weightZ );
}

GM_NS_CLOSE