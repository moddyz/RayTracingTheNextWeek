//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file ray.h
/// \ingroup gm_types_composite

#include <gm/gm.h>

#include <sstream>

#include <gm/types/vec3f.h>

GM_NS_OPEN

/// \class Ray
/// \ingroup gm_types_composite
///
/// Class definition of a composite type with named elements:
/// - origin (\ref Vec3f)
/// - direction (\ref Vec3f)
class Ray final
{
public:
    // --------------------------------------------------------------------- //
    /// \name Construction
    // --------------------------------------------------------------------- //

    /// Default constructor.
    GM_HOST_DEVICE constexpr inline Ray() = default;

    /// Element-wise constructor.
    GM_HOST_DEVICE explicit constexpr inline Ray( const Vec3f& i_origin, const Vec3f& i_direction )
        : m_origin( i_origin )
        , m_direction( i_direction )
    {
    }

    // --------------------------------------------------------------------- //
    /// \name Element access
    // --------------------------------------------------------------------- //

    /// Const accessor for "origin".
    GM_HOST_DEVICE inline const Vec3f& Origin() const
    {
        return m_origin;
    }

    /// Mutable accessor for "origin".
    GM_HOST_DEVICE inline Vec3f& Origin()
    {
        return m_origin;
    }

    /// Const accessor for "direction".
    GM_HOST_DEVICE inline const Vec3f& Direction() const
    {
        return m_direction;
    }

    /// Mutable accessor for "direction".
    GM_HOST_DEVICE inline Vec3f& Direction()
    {
        return m_direction;
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
    Vec3f m_origin;
    Vec3f m_direction;
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

GM_NS_CLOSE