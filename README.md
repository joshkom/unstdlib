# unstdlib

> An unstandard C library.

Just another libc wrapper; reimplementing the wheel? Yes.

**unstdlib** is a lightweight (un)standard wrapper around libc that adds small utilities, abstractions, and reimplementations commonly used in everyday C development.

## Table of Contents

- [Getting started](#getting-started)
- [Build](#build)
- [Installation](#install)
- [Tests](#tests)
- [Documentation](#documentation)

<br>

## Getting started

Currently in semi-active development.

## Build

To build unstdlib, follow these steps:

1. **Ensure you have [CMake](https://cmake.org/) and [GCC](https://gcc.gnu.org/) installed.**
2. **Run the following command:**
   ```shell
   chmod +x ./unstdlib.sh && ./unstdlib.sh -build
   ```

This only builds the project as Release and moves libraries **(&ast;.so&ast; | &ast;.a)** and headers **(&ast;.h)** to
the `build` directory per default.

## Install

```shell
./unstdlib.sh -install
```

Builds the project as Release and moves libraries **(&ast;.so&ast; | &ast;.a)** and headers **(&ast;.h)** to
`/usr/local/lib` and `/usr/local/include/unstdlib` directories respectively, per default.

## Documentation

Documentation is provided for each function specifically in the header files.
<br>
Each function is documented with comments explaining its purpose, parameters, and return value.

For detailed information on each function, please refer to the corresponding header file.


---

## Tests

**unstdlib** has been tested on Arch Linux kernel `6.7.6-zen1-1-zen`. You can run the unit tests
manually by executing the following command:

```shell
./unstdlib.sh -test
```

## More

For more information on available options, execute:

```shell
./unstdlib.sh -h
```

## Uninstall

Changed your mind? Simply run:

```shell
./unstdlib.sh -uninstall
```

## Compatibility

**unstdlib** is based on GCC version 11. Ensure that you have [GCC GNU 11](https://gcc.gnu.org/) installed on your
system to avoid any compatibility issues.

## Contributing

I would even appreciate a cat's help.

---
