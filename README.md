# RayTracingTheNextWeek

An implementation of the book [Ray Tracing: The Next Week](https://raytracing.github.io/books/RayTracingTheNextWeek.html).  

## Table of Contents

- [Programs](#programs)
  * [0. Motion Blur](#0-motion-blur)
- [Library](#library)
- [Building](#building)
- [Build Status](#build-status)

## Programs

### 0. Motion Blur

![Image](./src/0_motionBlur/output.png)

[Source code](./src/0_motionBlur/main.cpp)

[Link to Chapter 2](https://raytracing.github.io/books/RayTracingTheNextWeek.html#motionblur)

## Library

Common functions and classes are refactored into the [raytrace library](./src/raytrace) and the [GraphicsMath](https://github.com/moddyz/GraphicsMath) project.

## Documentation

Doxygen documentation based on the latest state of master, [hosted by GitHub Pages](https://moddyz.github.io/RayTracingTheNextWeek/).

## Building

A convenience build script is provided, for building all targets, and optionally installing to a location:
```
./build.sh <OPTIONAL_INSTALL_LOCATION>
```

### Requirements

- `>= CMake-3.17`
- `C++17`
- `doxygen` and `graphviz` (optional for documentation)

## Build Status

|       | master | 
| ----- | ------ | 
| macOS-10.14 | [![Build Status](https://travis-ci.com/moddyz/RayTracingTheNextWeek.svg?branch=master)](https://travis-ci.com/moddyz/RayTracingTheNextWeek) |
