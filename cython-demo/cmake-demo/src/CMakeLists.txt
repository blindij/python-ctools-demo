#include the current directory in search for include files
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Specifies that Cython source files should generate C++
set_source_files_properties(taylor.pyx
  PROPERTIES
  CYTHON_IS_CXX TRUE)

# Adds and compiles Cython into an extension module
cython_add_module(taylor taylor.pyx taylor_series.cpp)
