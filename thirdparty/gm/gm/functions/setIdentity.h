//
// This file is auto-generated, please do not modify directly!
//

#pragma once

/// \file functions/setIdentity.h
/// \ingroup gm_functions_linearAlgebra
///
/// Set the \em identity matrix \f$I\f$, defined as the neutral element with respect to matrix multiplication:
/// \f[ AI=A\f]
/// \f[ A=\textnormal{Any matrix} \f]
/// \f[ I=\textnormal{Identity matrix} \f]
///
/// The identity matrix is square(\f$M\textnormal{x}N\f$) with \f$1\f$s down the main diagonal,
/// and \f$0\f$s for all other entries.
/// \f[
/// \begin{bmatrix}
/// 1      & 0      & \cdots  &        & 0      \\
/// 0      & 1      &         &        &        \\
/// \vdots &        & \ddots  &        & \vdots \\
///        &        &         & 1      & 0      \\
/// 0      &        & \cdots  & 0      & 1
/// \end{bmatrix}
/// \f]

#include <gm/gm.h>

#include <gm/types/mat3f.h>
#include <gm/types/mat4f.h>

GM_NS_OPEN

/// Set the identity matrix onto \p o_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param o_matrix The matrix to set as the identity.
GM_HOST_DEVICE inline void SetIdentity( Mat3f& o_matrix )
{
    o_matrix = Mat3f( 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f );
}

/// Set the identity matrix onto \p o_matrix.
/// \ingroup gm_functions_linearAlgebra
///
/// \param o_matrix The matrix to set as the identity.
GM_HOST_DEVICE inline void SetIdentity( Mat4f& o_matrix )
{
    o_matrix = Mat4f( 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f );
}

GM_NS_CLOSE