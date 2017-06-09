cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(taylor)

SET(CMAKE_MODULE_PATH /Users/bjornlin/tmp/cython-cmake-example/cmake/)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY
   ${CMAKE_BINARY_DIR}/lib
   )
 
# Detects and activates Cython
set(CMAKE_MODULE_PATH
	${CMAKE_MODULE_PATH}
	${PROJECT_SOURCE_DIR}/cmake
	)
include(UseCython)
#find_package(Cython REQUIRED)

add_subdirectory(src)

