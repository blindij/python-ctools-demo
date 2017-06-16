cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(taylor)

SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY
   ${CMAKE_BINARY_DIR}/lib
   )

# Use the ../phoneticA/pybind11/CMakeLists.txt
# This CMakeLists.txt enables pybind11  for use with python 
add_subdirectory(pybind11)

# Alternative if Pybind11 is part of your Python installation
# Detect and activate pybind11. Stop if not is not found
# find_package(pybind11 REQUIRED)

add_subdirectory(src)
