#pragma once

/// \file raytrace/material.h
///
/// Scene object assignable material abstraction.

#include <raytrace/raytrace.h>

#include <gm/types/ray.h>

RAYTRACE_NS_OPEN

// Forward declarations.
class HitRecord;

/// \class Material
///
/// Material is the abstract base class of all material(s).  The purpose of a material is to define
/// different ways color can be computed from a ray, and behavior in how the ray should "scatter" in
/// a new direction.
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
    /// \param o_attentuation Color produced based on the ray, by the material.
    /// \param o_scatteredRay The optional, scattered ray.
    ///
    /// \retval true If this material produces a scattered ray. \p o_scatteredRay will be populated.
    /// \retval false If this material absorbs the scattered ray.  \p o_scatteredRay will be undefined.
    virtual bool Scatter( const gm::Ray&   i_ray,
                          const HitRecord& i_hitRecord,
                          gm::Vec3f&       o_attenuation,
                          gm::Ray&         o_scatteredRay ) const = 0;
};

/// \typedef MaterialPtr
///
/// Shared pointer to an allocated material.
/// Multiple objects will hold references to a material, thus shared pointer.
using MaterialSharedPtr = std::shared_ptr< Material >;

RAYTRACE_NS_CLOSE
