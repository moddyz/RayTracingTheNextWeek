#pragma once

/// \file base/hostdevice.h

/// \def GM_HOST_DEVICE
///
/// Definition to allow functions to be utilized from both host and CUDA device code.
#if defined( GM_CUDA_SUPPORT )
#define GM_HOST_DEVICE __host__ __device__
#else
#define GM_HOST_DEVICE
#endif
