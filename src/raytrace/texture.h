#pragma once

/// \file raytrace/texture.h
///
/// Texture: 2D color sampling for a geometric surface.

#include <raytrace/raytrace.h>

#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>

RAYTRACE_NS_OPEN

/// \class Texture
///
/// Abstract base class for texture classes providing color sampling.
class Texture
{
public:
    /// Virtual de-constructor.
    virtual ~Texture()
    {
    }

    /// Sample a color from this texture with the UV coordinate \p i_uvCoord
    /// and position \p i_position.
    ///
    /// \param i_uvCoord The 2D coordinate to sample from in the texture space.
    /// \param i_position The 3D position of the geometric surface to apply the color to.
    ///
    /// \return The color sample.
    virtual gm::Vec3f Sample( const gm::Vec2f& i_uvCoord, const gm::Vec3f& i_position ) const = 0;
};

/// \typedef TextureSharedPtr
///
/// Shared pointer to an allocated texture.
using TextureSharedPtr = std::shared_ptr< Texture >;

RAYTRACE_NS_CLOSE
