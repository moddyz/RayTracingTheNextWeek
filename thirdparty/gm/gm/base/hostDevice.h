#pragma once

/// \file base/hostDevice.h

/// \def GM_HOST_DEVICE
///
/// Definition to allow functions to be utilized in both host and CUDA device code.
#if defined( __CUDACC__ )
#define GM_HOST_DEVICE __host__ __device__
#else
#define GM_HOST_DEVICE
#endif
