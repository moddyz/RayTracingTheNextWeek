#pragma once

/// \file raytrace/sceneObject.h
///
/// Ray-traceable scene object representation.

#include <raytrace/ray.h>

#include <gm/types/floatRange.h>

#include <memory>

RAYTRACE_NS_OPEN

/// \class SceneObject
///
/// SceneObject is the base class for all scene objects which are \em subject to ray tracing.
class SceneObject
{
public:
    /// Virtual de-constructor.
    virtual ~SceneObject() = default;

    /// Check and record if ray \p i_ray hits the current object.
    ///
    /// \param i_ray.Origin() The ray to test for hit.
    /// \param i_magnitudeRange The range of \em accepted magnitudes to qualify as a ray hit.
    /// \param o_record the record of a ray hit.
    ///
    /// \retval true If the ray hits this object.
    /// \retval false If the ray does not hit this object, or if the hit is outside the range
    /// of \p i_magnitudeRange.
    virtual bool
    Hit( const raytrace::Ray& i_ray, const gm::FloatRange& i_magnitudeRange, HitRecord& o_record ) const = 0;
};

/// \typedef SceneObjectPtr
///
/// Pointer to the scene object.
using SceneObjectPtr = std::unique_ptr< SceneObject >;

RAYTRACE_NS_CLOSE
