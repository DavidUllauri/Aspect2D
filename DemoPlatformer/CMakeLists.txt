set(HEADER_FILES
    PlatformerApp.h
)

set(SOURCE_FILES
    PlatformerApp.cpp
    main.cpp
)

add_executable(DemoPlatformer ${HEADER_FILES} ${SOURCE_FILES})

include_directories(../aspect2d-engine/src)

target_link_libraries(DemoPlatformer aspect2d-engine)