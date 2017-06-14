include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(SOURCE_FILES Py11PhoneAlg.cpp)
pybind11_add_module(phoneticA ${SOURCE_FILES})  
