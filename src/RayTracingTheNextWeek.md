# RayTracingTheNextWeek {#mainpage}

\section RayTracingTheNextWeek Introduction

\b RayTracingTheNextWeek is a C++ project which implements the 
<a href="https://raytracing.github.io/books/RayTracingTheNextWeek.html">Ray Tracing: The Next Week</a> book.

\section RayTracingInOneWeekend_Building Building

A convenience build script is provided at the root of the repository for building all targets, and optionally installing to a location: 
\code
./build.sh <OPTIONAL_INSTALL_LOCATION>`
\endcode

\subsection RayTracingInOneWeekend_Building_Documentation Building Documentation

To build documentation for RayTracingTheNextWeek, set the cmake option `BUILD_DOCUMENTATION="ON"` when configuring cmake.

\section RayTracingInOneWeekend_DeveloperNotes Developer Notes

\subsection RayTracingInOneWeekend_DeveloperNotes_SourceTree Source Tree

The source tree under \p src/ is composed of:
- \p src/raytrace a common library of raytrace utility functions used throughout the various programs.
- ... and program(s) which serve as checkpoints associated with the chapters of the book.

\subsection RayTracingInOneWeekend_DeveloperNotes_Motivation Motivation

To learn basic raytracing techniques, before moving on to more advanced topics in the realm.

\section RayTracingInOneWeekend_GitHubHosted GitHub Repository

The RayTracingTheNextWeek project is hosted on GitHub: https://github.com/moddyz/RayTracingTheNextWeek.
