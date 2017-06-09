#include <pybind11/pybind11.h>

#include "taylor_series.h"

namespace py = pybind11;

PYBIND11_PLUGIN(taylor) {
  py::module t("taylor", "Taylor Series tailored plugin");
  t.def("sin", &ts_sin, "A sine Taylor Series function")
   .def("cos", &ts_cos, "A cosine Taylor Series function");
  return t.ptr();
}
