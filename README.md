# RayTracingTheNextWeek

An implementation of the book [Ray Tracing: The Next Week](https://raytracing.github.io/books/RayTracingTheNextWeek.html).  

## Table of Contents

- [Prequel](#prequel)
- [Programs](#programs)
  * [0. Motion Blur](#0-motion-blur)
  * [1. Bounding Volume Hierarchies](#1-bounding-volume-hierarchies)
- [Library](#library)
- [Building](#building)
- [Build Status](#build-status)

## Prequel

You can check out the implementation to the prequel, [Ray Tracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html), over at [RayTracingInOneWeekend](https://github.com/moddyz/RayTracingInOneWeekend).

## Programs

### 0. Motion Blur

![Image](./src/0_motionBlur/output.png)

[Source code](./src/0_motionBlur/main.cpp)

[Link to Chapter 2](https://raytracing.github.io/books/RayTracingTheNextWeek.html#motionblur)

### 1. Bounding Volume Hierarchies

![Image](./src/1_boundingVolumeHierarchies/output.png)

With the same scene from [0. Motion Blur](#0-motion-blur):
- With BVH: **10.575s**
- Without BVH: **216.854s**

Measurements taken using the `time` Linux command line utility, on a Thinkpad X1 Extreme outfitted 
with Intel(R) Core(TM) i7-9750H CPU @ 2.60GHz.

[Source code](./src/1_boundingVolumeHierarchies/main.cpp)

[Link to Chapter 2](https://raytracing.github.io/books/RayTracingTheNextWeek.html#boundingvolumehierarchies)

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
