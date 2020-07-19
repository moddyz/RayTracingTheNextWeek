#pragma once

/// \file raytrace/noiseTexture.h
///
/// A texture providing a noise pattern.

#include <raytrace/perlin.h>
#include <raytrace/texture.h>

RAYTRACE_NS_OPEN

/// \class NoiseTexture
///
/// NoiseTexture utilizes the perlin noise generator to produce a noisey pattern.
class NoiseTexture : public Texture
{
public:
    /// Explicit constructor with an option to control the scale of the noise.
    explicit NoiseTexture( float i_scale = 1.0f )
        : m_scale( i_scale )
    {
    }

    inline virtual gm::Vec3f Sample( const gm::Vec2f& i_uv, const gm::Vec3f& i_position ) const override
    {
        return gm::Vec3f( 1, 1, 1 ) * 0.5 *
               ( 1.0 + sin( m_scale * i_position.X() + 10 * m_perlin.Turbulence( i_position ) ) );
    }

private:
    Perlin m_perlin;
    float  m_scale = 1.0f;
};

RAYTRACE_NS_CLOSE
