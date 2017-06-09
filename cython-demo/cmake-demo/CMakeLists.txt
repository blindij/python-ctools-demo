cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(taylor)

SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY
   ${CMAKE_BINARY_DIR}/lib
   )
 
# Add the cmake subdirectory to the module path
set(CMAKE_MODULE_PATH
	${CMAKE_MODULE_PATH}
	${PROJECT_SOURCE_DIR}/cmake
	)
# Detects and activates Cython
include(UseCython)

add_subdirectory(src)

