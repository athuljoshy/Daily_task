include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
    C:/systemc/include
)

link_directories(
    C:/systemc/lib
)

file(GLOB_RECURSE SRC_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp
)

get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

add_executable(
    ${PROJECT_NAME}
    ${SRC_FILES}
)

target_link_libraries(
    ${PROJECT_NAME}
    systemc
)

set_target_properties(
    ${PROJECT_NAME}
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_CURRENT_SOURCE_DIR}
)