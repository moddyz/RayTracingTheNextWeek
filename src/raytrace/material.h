#pragma once

/// \file raytrace/material.h
///
/// Scene object assignable material abstraction.

#include <raytrace/ray.h>
#include <raytrace/raytrace.h>

RAYTRACE_NS_OPEN

// Forward declarations.
class HitRecord;

/// \class Material
///
/// Material is the abstract base class of all material(s).
///
/// Materials can "scatter" rays by defining their next trajectory, and "emit" light.
///
/// A single material can be assigned to multiple scene objects.
class Material
{
public:
    /// Virtual de-constructor.
    virtual ~Material() = default;

    /// Scatter accepts an incident ray \p i_ray, and produces an attenutated color \p i_attenuation.
    /// The implementation may or may not produce a scattered ray \p o_scatteredRay.
    ///
    /// \param i_ray Incident ray.
    /// \param i_hitRecord The recorded hit information of the ray against the geometry.
    /// \param o_attenuation Color produced based on the ray, by the material.
    /// \param o_scatteredRay The optional, scattered ray.
    ///
    /// \retval true If this material produces a scattered ray. \p o_scatteredRay will be populated.
    /// \retval false If this material absorbs the scattered ray.  \p o_scatteredRay will be undefined.
    virtual bool Scatter( const raytrace::Ray& i_ray,
                          const HitRecord&     i_hitRecord,
                          gm::Vec3f&           o_attenuation,
                          raytrace::Ray&       o_scatteredRay ) const = 0;

    /// Emit colored light based on 2D surface coordinates and position of the ray hit.
    ///
    /// \param i_uv 2D texture coordinates
    /// \param i_position 3D position of the ray hit.
    ///
    /// \return The emitted color.
    virtual gm::Vec3f Emit( const gm::Vec2f& i_uv, const gm::Vec3f& i_position ) const
    {
        // By default, the material does not emit any light!
        return gm::Vec3f( 0, 0, 0 );
    }
};

/// \typedef MaterialSharedPtr
///
/// Shared pointer to an allocated material.
///
/// Multiple objects will hold references to a material, and to simplify memory management,
/// a shared pointer is used!
using MaterialSharedPtr = std::shared_ptr< Material >;

RAYTRACE_NS_CLOSE
