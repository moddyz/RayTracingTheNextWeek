//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/faceForward.h
/// \ingroup gm_functions_linearAlgebra
///
/// Normal vector face forward.

#include <gm/gm.h>

#include <gm/types/vec2f.h>
#include <gm/types/vec3f.h>
#include <gm/types/vec4f.h>

#include <gm/functions/dotProduct.h>

GM_NS_OPEN

/// Orient a normal vector i_normal such that its direction is oriented towards the same
/// hemisphere as the guide vector i_normal .
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_normal The normal vector.
/// \param i_guide The guiding vector.
///
/// \return The oriented normal vector directed at the same hemisphere as the guide vector.
GM_HOST_DEVICE inline Vec2f FaceForward( const Vec2f& i_normal, const Vec2f& i_guide )
{
    if ( DotProduct( i_normal, i_guide ) > 0.0f )
    {
        return i_normal;
    }
    else
    {
        return -i_normal;
    }
}

/// Orient a normal vector i_normal such that its direction is oriented towards the same
/// hemisphere as the guide vector i_normal .
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_normal The normal vector.
/// \param i_guide The guiding vector.
///
/// \return The oriented normal vector directed at the same hemisphere as the guide vector.
GM_HOST_DEVICE inline Vec3f FaceForward( const Vec3f& i_normal, const Vec3f& i_guide )
{
    if ( DotProduct( i_normal, i_guide ) > 0.0f )
    {
        return i_normal;
    }
    else
    {
        return -i_normal;
    }
}

/// Orient a normal vector i_normal such that its direction is oriented towards the same
/// hemisphere as the guide vector i_normal .
/// \ingroup gm_functions_linearAlgebra
///
/// \param i_normal The normal vector.
/// \param i_guide The guiding vector.
///
/// \return The oriented normal vector directed at the same hemisphere as the guide vector.
GM_HOST_DEVICE inline Vec4f FaceForward( const Vec4f& i_normal, const Vec4f& i_guide )
{
    if ( DotProduct( i_normal, i_guide ) > 0.0f )
    {
        return i_normal;
    }
    else
    {
        return -i_normal;
    }
}

GM_NS_CLOSE