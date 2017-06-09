#include the current directory in search for include files
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Adds and compiles Cython into an extension module
pybind11_add_module(taylor py11taylor.cpp taylor_series.cpp)
