#pragma once

/// \file raytrace/hitRecord.h
///
/// Record of a ray hitting a \ref SceneObject.

#include <gm/types/vec3f.h>

#include <raytrace/material.h>
#include <raytrace/raytrace.h>

RAYTRACE_NS_OPEN

/// \class HitRecord
///
/// HitRecord stores a record of a ray hitting a scene object, so that it may be used to influence
/// the behavior of the next hit (of the same ray, with another object!).
class HitRecord
{
public:
    /// The position of the contact point.
    gm::Vec3f m_position;

    /// The outward facing normal of the surface, at the point of contact.
    gm::Vec3f m_normal;

    /// The magnitude of the ray at the point of contact.
    float m_magnitude;

    /// Material associated with the geometry that was hit by the ray.
    MaterialSharedPtr m_material;
};

RAYTRACE_NS_CLOSE
