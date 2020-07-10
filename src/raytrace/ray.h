#pragma once

/// \file ray.h
///
/// A representation of a ray.

#include <raytrace/raytrace.h>

#include <sstream>

#include <gm/types/vec3f.h>

RAYTRACE_NS_OPEN

/// \class Ray
///
/// Class definition of a composite type with named elements:
/// - origin (\ref gm::Vec3f)
/// - direction (\ref gm::Vec3f)
/// - time (\ref float)
class Ray final
{
public:
    // --------------------------------------------------------------------- //
    /// \name Construction
    // --------------------------------------------------------------------- //

    /// Default constructor.
    constexpr inline Ray() = default;

    /// Element-wise constructor.
    explicit constexpr inline Ray( const gm::Vec3f& i_origin, const gm::Vec3f& i_direction, float i_time = 0.0f )
        : m_origin( i_origin )
        , m_direction( i_direction )
        , m_time( i_time )
    {
    }

    // --------------------------------------------------------------------- //
    /// \name Element access
    // --------------------------------------------------------------------- //

    /// Const accessor for "origin".
    inline const gm::Vec3f& Origin() const
    {
        return m_origin;
    }

    /// Mutable accessor for "origin".
    inline gm::Vec3f& Origin()
    {
        return m_origin;
    }

    /// Const accessor for "direction".
    inline const gm::Vec3f& Direction() const
    {
        return m_direction;
    }

    /// Mutable accessor for "direction".
    inline gm::Vec3f& Direction()
    {
        return m_direction;
    }

    /// Const accessor for "time".
    inline const float& Time() const
    {
        return m_time;
    }

    /// Mutable accessor for "time".
    inline float& Time()
    {
        return m_time;
    }

    // --------------------------------------------------------------------- //
    /// \name Debug
    // --------------------------------------------------------------------- //

    /// Get the string representation.  For debugging purposes.
    ///
    /// \param i_classPrefix optional string to prefix class tokens.
    ///
    /// \return descriptive string representing this type instance.
    inline std::string GetString( const std::string& i_classPrefix = std::string() ) const
    {
        std::stringstream ss;
        ss << i_classPrefix << "Ray( ";
        ss << m_origin.GetString( i_classPrefix );
        ss << ", ";
        ss << m_direction.GetString( i_classPrefix );
        ss << " )";
        return ss.str();
    }

private:
    // Element members.
    gm::Vec3f m_origin;
    gm::Vec3f m_direction;
    float     m_time = 0.0f;
};

/// Operator overload for << to enable writing the string representation of \p i_composite into an output
/// stream \p o_outputStream.
///
/// \param o_outputStream the output stream to write into.
/// \param i_composite the source composite value type.
///
/// \return the output stream.
inline std::ostream& operator<<( std::ostream& o_outputStream, const Ray& i_composite )
{
    o_outputStream << i_composite.GetString();
    return o_outputStream;
}

RAYTRACE_NS_CLOSE
