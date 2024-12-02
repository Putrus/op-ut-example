cmake_minimum_required(VERSION 3.6..3.28)

project(example)

set(HEADERS)

set(SOURCES
   src/main.cpp
   )

add_executable(example ${HEADERS} ${SOURCES})
add_library(example_lib STATIC ${HEADERS} ${SOURCES})
set_target_properties(example PROPERTIES ENABLE_EXPORTS ON)