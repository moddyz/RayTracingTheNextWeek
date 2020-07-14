#pragma once

/// \file raytrace/checkerTexture.h
///
/// A texture providing an alternating checker board pattern.

#include <raytrace/texture.h>

RAYTRACE_NS_OPEN

/// \class CheckerTexture
///
/// CheckerTexture is a texture which provides an alternating checkerboard pattern.
class CheckerTexture : public Texture
{
public:
    /// Explicit constructor with textures \p i_even and \p i_odd for the two alternating shades
    /// forming the checkerboard pattern.
    ///
    /// \param i_even The even texture.
    /// \param i_odd The odd texture.
    /// \param i_scale Uniform scaling factor applied to the checkboard pattern.
    inline explicit CheckerTexture( const TextureSharedPtr& i_even, const TextureSharedPtr& i_odd, float i_scale )
        : m_even( i_even )
        , m_odd( i_odd )
        , m_scale( i_scale )
    {
    }

    inline virtual gm::Vec3f Sample( const gm::Vec2f& i_uvCoord, const gm::Vec3f& i_position ) const override
    {
        // TODO: Would be good to describe the math behind this function.
        float sineProduct =
            sin( m_scale * i_position.X() ) * sin( m_scale * i_position.Y() ) * sin( m_scale * i_position.Z() );

        if ( sineProduct < 0 )
        {
            return m_odd->Sample( i_uvCoord, i_position );
        }
        else
        {
            return m_even->Sample( i_uvCoord, i_position );
        }
    }

private:
    // Even & odd textures.
    TextureSharedPtr m_even;
    TextureSharedPtr m_odd;

    // The uniform scale factor applied to the checkerboard pattern.
    float m_scale;
};

RAYTRACE_NS_CLOSE
