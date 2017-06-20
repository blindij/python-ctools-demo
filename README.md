[![Build Status](https://travis-ci.org/bast/python-cffi-demo.svg?branch=master)](https://travis-ci.org/bast/python-cffi-demo/builds)
[![License](https://img.shields.io/badge/license-%20MPL--v2.0-blue.svg)](../master/LICENSE)


# python-cython-demo

Inspired by Kurt W. Smith's book on [Cython](http://shop.oreilly.com/product/0636920033431.do)

## Examples

The first example make use of a simple C++ source code which implements two Taylor
series sine() and cosine(). The point is to illustrate how C/C++ functions
can be called from python with the use of Cython.

The second example is an implementation of the Soundex algorithm. The implementation
is taken from [Jeff Langr's](http://langrsoft.com/about/) book
[Modern C++ Programming with Test-Driven Development](http://pragprog.com/book/lotdd/modern-c-programming-with-test-driven-development))

## Lower-level learning goals

- Show how distutils can be used to build a Python library
- Show how CMake can be used to accomblish the same thing

## Requirements

- Python
- Cython
- [CMake](https://cmake.org/download/)
- C++ compilers



