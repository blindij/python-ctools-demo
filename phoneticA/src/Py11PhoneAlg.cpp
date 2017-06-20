// file: Py11PhoneAlg.cpp
#include <pybind11/pybind11.h>
#include "PhoneticAlgorithm.h"
#include "Soundex.h"

namespace py = pybind11;

class PyPhoneticAlg : public PhoneticAlgorithm {
public:
  // Inherit the constructors
  using PhoneticAlgorithm::PhoneticAlgorithm;
  std::string encode(const std::string& word) const override {
    PYBIND11_OVERLOAD_PURE (
			    std::string,      // Return type
			    PhoneticAlgorithm, // Parent class
			    encode,            // Name of function in C++
			    word               // Argument(s)
			    );
  }
};
  
  //
  // Here something the Pybind11 documentatio calls trampoline.
  // It helps us create a constructour for a class with virtual functions
  //
  
PYBIND11_MODULE(phoneticA, mod) {
  mod.doc() = "pybind11 phonetic plugin";

  py::class_<PhoneticAlgorithm, PyPhoneticAlg> phalgo(mod,"PhoneticAlgorithm");
  phalgo
    .def(py::init<>())
    .def("encode", &PhoneticAlgorithm::encode);

  py::class_<Soundex>(mod,"soundex")
    .def(py::init<>())
    .def("encode", &Soundex::encode);

}


