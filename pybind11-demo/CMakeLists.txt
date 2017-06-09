cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(taylor)

SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY
   ${CMAKE_BINARY_DIR}/lib
   )
 
# Detect and activate pybind11. Stop if not is not found
find_package(pybind11 REQUIRED)

add_subdirectory(src)
