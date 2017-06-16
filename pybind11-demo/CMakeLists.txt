cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(taylor)

SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY
   ${CMAKE_BINARY_DIR}/lib
   )

# The pybind11 is the Pybind11 project added as  submodule
# This CMakeLists.txt in the pybind11 directory
# enables pybind11  for use with python

add_subdirectory(pybind11)

# Alternative if Pybind11 is part of your Python installation
# Detect and activate pybind11. Stop if not is not found
# find_package(pybind11 REQUIRED)

add_subdirectory(src)
