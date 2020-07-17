set(LIBRARY_NAME "raytrace")

# Top level headers.
file(GLOB HEADERS *.h)
file(
    COPY ${HEADERS}
    DESTINATION ${CMAKE_BINARY_DIR}/include/${LIBRARY_NAME}
)

install(
    FILES ${HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${LIBRARY_NAME}
)

# Add header only library
add_library(${LIBRARY_NAME}
    INTERFACE # This library target does not provide source files.  (Header only!)
)
target_include_directories(${LIBRARY_NAME}
    INTERFACE
        ${CMAKE_BINARY_DIR}/include/
)

# Inherit gm as library dependency.
target_link_libraries(${LIBRARY_NAME}
    INTERFACE
        gm
        stb
)
