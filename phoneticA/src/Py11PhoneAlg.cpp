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

std::string call_encode(PhoneticAlgorithm& phxalg) {
  return phxalg.encode("Allison");
}
  
PYBIND11_MODULE(phoneticA, mod) {
  mod.doc() = "pybind11 phonetic plugin";

  py::class_<PhoneticAlgorithm, PyPhoneticAlg> (mod,"phalgo",py::dynamic_attr())
    .def(py::init<>())
    .def("encode", &PhoneticAlgorithm::encode);

  py::class_<Soundex,PhoneticAlgorithm>(mod,"sndx")
    .def(py::init<>())
    .def("encode", &Soundex::encode);

  mod.def("call_encode", &call_encode);

}


