|Branch      | OSX / Linux / Windows     |
|------------|---------------------------|
|master      | [![Build Status](https://travis-ci.org/JCash/jctest.svg?branch=master)](https://travis-ci.org/JCash/jctest?branch=master) |
|dev         | [![Build Status](https://travis-ci.org/JCash/jctest.svg?branch=dev)](https://travis-ci.org/JCash/jctest?branch=dev) |

# Documentation

https://jcash.github.io/jctest/ (or [here](./docs/README.md))

# jctest

A tiny C/C++ header only test framework

# Disclaimer

This software is supplied "AS IS" without any warranties and support

# License

[The MIT license](http://choosealicense.com/licenses/mit/)

# Feature comparisons

| Feature vs Impl        |  gtest  | jc_test |
|-----------------------:|---------|---------|
| Header only            |         |    *    |
| C++98                  |         |    *    |
| -Wall                  |         |    *    |
| -Weverything           |         |    *    |
| -pedantic              |         |    *    |
| Lines of Code*         | ~33000  |  <800   |
| Size of program**      | ~1200kb |  ~30kb  |

*) Counting C/C++ files using cloc
**) A minimal test example with one test