cmake_minimum_required(VERSION 3.5)

project(SystemC_Practice)

# SystemC 2.3.4 was built as C++98
set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB CHILDREN RELATIVE ${CMAKE_SOURCE_DIR} *)

foreach(CHILD ${CHILDREN})

    if(CHILD STREQUAL "Template_Copy")
        continue()
    endif()

    if(EXISTS ${CMAKE_SOURCE_DIR}/${CHILD}/CMakeLists.txt)
        add_subdirectory(${CHILD})
    endif()

endforeach()