cmake_minimum_required(VERSION 3.16)

project(DemoPlatformer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

if(WIN32)
    add_definitions(-DASPECT_WINDOWS)
elseif(APPLE)
    add_definitions(-DASPECT_MACOS)
elseif(UNIX)
    add_definitions(-DASPECT_LINUX)
endif()

add_subdirectory(aspect2d-engine)
add_subdirectory(DemoPlatformer)
add_subdirectory(aspect2d-engine/vendor/glad)
add_subdirectory(aspect2d-engine/vendor/glfw)