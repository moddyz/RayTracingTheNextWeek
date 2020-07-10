#pragma once

#include <gm/gm.h>

#include <stdarg.h>

/// \file base/assert.h
///
/// Assertion utility for printing out failure location when an expression wrapped with GM_ASSERT( ... ) fails to
/// evaluate.
///
/// In Debug builds, GM_ASSERT macro will print the stacktrace when the input expression evaluates to false.
/// In Release builds, the GM_ASSERT macro will be pre-processed away in Release builds.

/// \def GM_ASSERT( expr )
/// Asserts that the expression \p expr is \em true in debug builds. If \p expr evalutes \em false,
/// an error message will be printed with contextual information such as the source code location.
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
/// Similar to \ref GM_ASSERT, with the addition of a formatted message when the expression \p expr fails to evaluate
/// in debug builds.
#ifdef GM_DEBUG
#define GM_ASSERT_MSG( expr, format, ... )                                                                             \
    if ( !( expr ) )                                                                                                   \
    {                                                                                                                  \
        GM_NS::_Assert( #expr, __FILE__, __LINE__ );                                                                   \
        fprintf( stderr, format, ##__VA_ARGS__ );                                                                      \
    }
#else
#define GM_ASSERT_MSG( expr, format, ... ) void()
#endif

GM_NS_OPEN

/// Not intended to be used directly, \ref GM_ASSERT instead.
GM_HOST_DEVICE inline void _Assert( const char* i_expression, const char* i_file, size_t i_line )
{
    fprintf( stderr, "Assertion failed for expression: %s, at %s:%lu\n", i_expression, i_file, i_line );
}

GM_NS_CLOSE
