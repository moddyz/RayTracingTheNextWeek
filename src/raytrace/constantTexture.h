#pragma once

/// \file raytrace/constantTexture.h
///
/// A texture providing a constant color for any sampling coordinates.

#include <raytrace/texture.h>

RAYTRACE_NS_OPEN

/// \class ConstantTexture
///
/// ConstantTexture is a texture which produces a uniform, constant color for any
/// sampling inputs.
class ConstantTexture : public Texture
{
public:
    /// Explicit constructor with the specified constant color \p i_color.
    ///
    /// \param i_color The color value.
    inline explicit ConstantTexture( const gm::Vec3f& i_color )
        : m_color( i_color )
    {
    }

    /// The ConstantTexture texture will always provide the color that was specified in its
    /// constructor.
    ///
    /// \param i_uvCoord This coordinate has no affect on the sampled color.
    /// \param i_position This coordinate has no affect on the sampled color.
    ///
    /// \return The constant color associated with this texture.
    inline virtual gm::Vec3f Sample( const gm::Vec2f& i_uvCoord, const gm::Vec3f& i_position ) const override
    {
        return m_color;
    }

private:
    gm::Vec3f m_color;
};

RAYTRACE_NS_CLOSE
