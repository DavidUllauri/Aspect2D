set(HEADER_FILES
    src/Aspect.h
    src/core/AspectApp.h
)

set(SOURCE_FILES
    src/core/AspectApp.cpp
)

add_library(aspect2d-engine SHARED ${HEADER_FILES} ${SOURCE_FILES})

add_definitions(-DASPECT_LIB)
add_definitions(-DASPECT_DEBUG)
add_definitions(-DASPECT_OPENGL)

include_directories(vendor/glad/include)
include_directories(vendor/glfw/include)

target_link_libraries(aspect2d-engine glfw glad)