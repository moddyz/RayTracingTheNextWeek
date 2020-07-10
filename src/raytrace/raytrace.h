#pragma once

/// \file raytrace/raytrace.h
///
/// raytrace: C++ header-only library for ray tracing, based on
/// https://raytracing.github.io/books/RayTracingInOneWeekend.html

/// \def RAYTRACE_NS
///
/// The namespace hosting all the symbols in the raytrace library.
#define RAYTRACE_NS raytrace

/// \def RAYTRACE_NS_USING
///
/// Convenience using directive for RAYTRACE_NS.
#define RAYTRACE_NS_USING using namespace RAYTRACE_NS;

/// \def RAYTRACE_NS_OPEN
///
/// Used throughout the library to open the raytrace namespace scope.
#define RAYTRACE_NS_OPEN                                                                                               \
    namespace RAYTRACE_NS                                                                                              \
    {
/// \def RAYTRACE_NS_CLOSE
///
/// Used throughout the library to close the raytrace namespace scope.
#define RAYTRACE_NS_CLOSE }
