#pragma once

/// \file gm/gm.h
///
/// GraphicsMath: C++ header-only computer graphics math library.

#include <gm/base/hostdevice.h>

/// \def GM_NS
///
/// The namespace hosting all the symbols in the GraphicsMath library.
#define GM_NS gm

/// \def GM_NS_USING
///
/// Convenience using directive for GM_NS.
#define GM_NS_USING using namespace GM_NS;

/// \def GM_NS_OPEN
///
/// Used throughout the library to open the GraphicsMath namespace scope.
#define GM_NS_OPEN namespace GM_NS {

/// \def GM_NS_CLOSE
///
/// Used throughout the library to close the GraphicsMath namespace scope.
#define GM_NS_CLOSE }
