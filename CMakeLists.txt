cmake_minimum_required(VERSION 3.6)

project(proj)

include(cmake/UpdateSubmodules.cmake)

add_subdirectory(example)
add_subdirectory(example_test)
add_subdirectory(external)