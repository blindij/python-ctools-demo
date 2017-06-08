from distutils.core import setup, Extension
from Cython.Build import cythonize

ext = Extension("taylor",
                sources=["src/taylor.pyx","src/taylor_series.cpp"],
                language="c++")

setup(
	name = "taylor_series",
	ext_modules = cythonize([ext])
    )

