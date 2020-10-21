#pragma once

#include <gm/gm.h>

#include <gm/base/log.h>

#include <stdarg.h>

/// \file base/diagnostic.h
///
/// Diagnostic utilities.

/// \def GM_ASSERT( expr )
///
/// Asserts that the expression \p expr is \em true in debug builds. If \p expr evalutes \em false,
/// an error message will be printed with contextual information including the failure site.
///
/// In release builds, this is compiled out.
#ifdef GM_DEBUG
#define GM_ASSERT( expr )                                                                                              \
    if ( !( expr ) )                                                                                                   \
    {                                                                                                                  \
        GM_NS::_Assert( #expr, __FILE__, __LINE__ );                                                                   \
    }
#else
#define GM_ASSERT( expr, ... ) void()
#endif

/// \def GM_ASSERT_MSG( expr, format, ... )
///
/// Similar to \ref GM_ASSERT, with the addition of a formatted message when the expression \p expr fails to evaluate
/// in debug builds.
#ifdef GM_DEBUG
#define GM_ASSERT_MSG( expr, format, ... )                                                                             \
    if ( !( expr ) )                                                                                                   \
    {                                                                                                                  \
        GM_NS::_Assert( #expr, __FILE__, __LINE__ );                                                                   \
        GM_LOG_ERROR( format, ##__VA_ARGS__ );                                                                         \
    }
#else
#define GM_ASSERT_MSG( expr, format, ... ) void()
#endif

/// \def GM_VERIFY( expr )
///
/// Verifies that the expression \p expr evaluates to \em true at runtime. If \p expr evalutes \em false,
/// an error message will be printed with contextual information including the failure site.
///
/// GM_VERIFY is different from \ref GM_ASSERT in that it does \em not get compiled out for release builds,
/// so use sparingly!
#define GM_VERIFY( expr )                                                                                              \
    if ( !( expr ) )                                                                                                   \
    {                                                                                                                  \
        GM_NS::_Assert( #expr, __FILE__, __LINE__ );                                                                   \
    }

/// \def GM_VERIFY_MSG( expr, format, ... )
///
/// Similar to \ref GM_VERIFY, with the addition of a formatted message when the expression \p expr fails to evaluate.
#define GM_VERIFY_MSG( expr, format, ... )                                                                             \
    if ( !( expr ) )                                                                                                   \
    {                                                                                                                  \
        GM_NS::_Verify( #expr, __FILE__, __LINE__ );                                                                   \
        GM_LOG_ERROR( format, ##__VA_ARGS__ );                                                                         \
    }

GM_NS_OPEN

/// Not intended to be used directly, \ref GM_ASSERT instead.
GM_HOST_DEVICE inline void _Assert( const char* i_expression, const char* i_file, int i_line )
{
    GM_LOG_ERROR( "Assertion failed for expression: %s, at %s:%i\n", i_expression, i_file, i_line );
}

/// Not intended to be used directly, \ref GM_VERIFY instead.
GM_HOST_DEVICE inline void _Verify( const char* i_expression, const char* i_file, int i_line )
{
    GM_LOG_ERROR( "Verification failed for expression: %s, at %s:%i\n", i_expression, i_file, i_line );
}

GM_NS_CLOSE
