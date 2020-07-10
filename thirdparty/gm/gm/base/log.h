#pragma once

/// \file base/log.h
///
/// Logging utility functions.

#include <stdio.h>

/// \def GM_LOG_INFO( msgFormat, ... )
///
/// Logs a formatted message at the \em INFO level.
#define GM_LOG_INFO( msgFormat, ... ) printf( msgFormat, ##__VA_ARGS__ );

/// \def GM_LOG_WARN( msgFormat, ... )
///
/// Logs a formatted message at the \em WARN level.
#define GM_LOG_WARN( msgFormat, ... ) printf( msgFormat, ##__VA_ARGS__ );

/// \def GM_LOG_ERROR( msgFormat, ... )
///
/// Logs a formatted message at the \em ERROR level.
#define GM_LOG_ERROR( msgFormat, ... ) fprintf( stderr, msgFormat, ##__VA_ARGS__ );
