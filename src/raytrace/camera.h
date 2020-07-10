#pragma once

/// \file raytrace/camera.h
///
/// Camera representation.

#include <raytrace/raytrace.h>

#include <gm/functions/crossProduct.h>
#include <gm/functions/radians.h>

#include <gm/types/vec3f.h>

RAYTRACE_NS_OPEN

/// \class Camera
///
/// A simple camera model for raytracing applications.
class Camera
{
public:
    /// Construct a camera with transformation, projection, and focal parameters.
    ///
    /// \param i_origin The position of the camera origin, or eye.
    /// \param i_lookAt The point of camera eye is focused onto.
    /// \param i_viewUp The up-vector of the camera.
    /// \param i_verticalFov The vertical field of view, in degrees.  This is the angle formed
    /// from the camera origin towards the viewport height.
    /// \param i_aspectRatio Ratio of the width against the height of the rendered image.
    /// \param i_aperature The diameter of the camera lens, or hole where light flows in.
    /// \param i_focalDistance The distance between the camera origin and the focal plane where
    /// objects are in perfect focus.
    inline explicit Camera( const gm::Vec3f& i_origin,
                            const gm::Vec3f& i_lookAt,
                            const gm::Vec3f& i_viewUp,
                            float            i_verticalFov,
                            float            i_aspectRatio,
                            float            i_aperature     = 0.0f,
                            float            i_focalDistance = 1.0f )
        : m_aspectRatio( i_aspectRatio )
        , m_aperture( i_aperature )
        , m_focalDistance( i_focalDistance )
        , m_origin( i_origin )
    {
        // Compute the viewport height from the vertical field of view.
        float verticalFovRadians = gm::Radians( i_verticalFov );

        // This is the important trig ratio which will allow us to compute the viewport height
        // from the focal length.
        float halfViewportHeightOverFocalLength = tan( verticalFovRadians / 2 );
        m_viewportHeight                        = 2.0f * halfViewportHeightOverFocalLength;

        // Compute the width of the virtual viewport.
        m_viewportWidth = m_aspectRatio * m_viewportHeight;

        // Compute camera orientation basis vectors.
        m_back  = gm::Normalize( m_origin - i_lookAt );
        m_right = gm::Normalize( gm::CrossProduct( i_viewUp, m_back ) );
        m_up    = gm::CrossProduct( m_back, m_right );
    }

    //-------------------------------------------------------------------------
    /// \name Viewport plane.
    //-------------------------------------------------------------------------

    /// Get the 3D vector matching the virtual viewport width.
    ///
    /// \return Vertical vector of the viewport width.
    inline gm::Vec3f ViewportHorizontal() const
    {
        return m_focalDistance * m_viewportWidth * m_right;
    }

    /// Get the 3D vector matching the virtual viewport height.
    ///
    /// \return Vertical vector of the viewport height.
    inline gm::Vec3f ViewportVertical() const
    {
        return m_focalDistance * m_viewportHeight * m_up;
    }

    /// Get the 3D coordinate of the bottom left corner of the viewport plane.
    ///
    /// \return The bottom left coordinate of the viewport plane.
    inline gm::Vec3f ViewportBottomLeft() const
    {
        return m_origin                          // From the camera origin...
               - ( ViewportHorizontal() * 0.5f ) // Horizontal translate of half the viewport plane.
               - ( ViewportVertical() * 0.5f )   // Vertical translate of half the viewport plane.
               - m_focalDistance * m_back;       // Translate forwards focal length units.
    }

    //-------------------------------------------------------------------------
    /// \name Camera transform (position).
    //-------------------------------------------------------------------------

    /// Get the \em origin, or \em eye of the camera.
    ///
    /// The origin is where rays originate.
    ///
    /// \return the origin of the camera.
    inline gm::Vec3f Origin() const
    {
        return m_origin;
    }

    /// Get the up vector of the camera.
    inline const gm::Vec3f& Up() const
    {
        return m_up;
    }

    /// Get the right vector of the camera.
    inline const gm::Vec3f& Right() const
    {
        return m_right;
    }

    /// Get the back vector of the camera.
    inline const gm::Vec3f& Back() const
    {
        return m_back;
    }

    //-------------------------------------------------------------------------
    /// \name Camera lens parameters.
    //-------------------------------------------------------------------------

    /// Get the aperture of the camera (lens diameter).
    ///
    /// \return Camera aperture.
    inline float Aperture() const
    {
        return m_aperture;
    }

private:
    // The ratio of the width to the height of the image.
    float m_aspectRatio = 0.0f;

    // The fixed height of the virtual viewport.
    float m_viewportHeight = 2.0f;

    // Variable width of the virtual viewport.
    float m_viewportWidth = 0.0f;

    // The diameter of the lens.
    float m_aperture = 0.5f;

    // The distance between the camera origin and the focal plane.
    float m_focalDistance = 1.0f;

    // Camera orientation basis vectors.
    gm::Vec3f m_right;
    gm::Vec3f m_back;
    gm::Vec3f m_up;

    // The origin of the camera.
    gm::Vec3f m_origin;
};

RAYTRACE_NS_CLOSE
