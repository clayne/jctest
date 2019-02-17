---
nav_order: 0
---


# jctest

A C/C++ header only test library implementing a GTEST-like API.
The library was created with compile time, run time, code size and executable size in mind.

## Example usage

![test_example.png](./examples/test_example.png)

```c++
#define JC_TEST_IMPLEMENTATION
#include <jc_test.h>

TEST(MyTest, Multiplication) {
    ASSERT_EQ(4, 2 * 2);
}
TEST(MyTest, Division) {
    ASSERT_EQ(2, 4 / 2);
}

int main(int argc, char *argv[]) {
    jc_test_init(&argc, argv);
    // ... Do your test initialization
    return JC_TEST_RUN_ALL();
}
```

```bash
# Compile the test
$ clang++ -Isrc ./examples/test_example.cpp

# Run the test
$ ./a.out
```

You can find more examples in the [API documentation](./README_API.md) and also under the ./test/ folder

## API

See [API documentation](./README_API.md)

## Goals

* Replacement for googletest, with minimal changes
* Support a few use cases: TEST, TEST_F, TEST_P, TYPED_TEST, (See API)
* As few templates as possible
* As few lines as possible

From this, the expected result was:

* Fast compile times
* Small executable size

## Benchmarks

[Benchmarks](./README_BENCHMARK.md)

## Alternatives

[Test Framework alternatives](./README_ALTERNATIVES.md)