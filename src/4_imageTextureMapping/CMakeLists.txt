get_filename_component(PROGRAM_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
cpp_executable(
    ${PROGRAM_NAME}
    CPPFILES
        main.cpp
    LIBRARIES
        raytrace
        cxxopts
)

install(
    FILES earthmap.jpg
    DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)

