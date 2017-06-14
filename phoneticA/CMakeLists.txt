cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(phoneticA)

SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY
   ${CMAKE_BINARY_DIR}/lib
   )

add_subdirectory(pybind11)
add_subdirectory(src)

