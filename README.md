# `console.log()`

For when you don't want to think about what language you're using, and just get stuff onto the screen.

    arr = [21, -22, [23, 24], "owl", {"eagle": [25]}]
    map = {"cat": [31, 32], "dog": 33, 34: "fox"}

    console.log("Values:", 1337, arr, map)

## Languages

| Language   | Import                            | Arrays        | Maps       | Limitations |
|------------|---------------------------------- |---------------|------------|-----|
| C++        | `#include "cpp/console.h"`        | `std::vector` | `std::map` | ¹ |
| Go         | `import "./go/console"`           | ✅             | ✅          | ¹ ² |
| Java       | `import console.console;`         | ✅             | [TODO](https://github.com/lgarron/console.log/issues/6) | ¹ ³ |
| JavaScript | N/A                               | ✅             | ✅          | |
| Julia      | `include("julia/console.jl")`     | ✅             | ✅          | |
| Mathematica| `Import["mathematica/console.m"]` | ✅             | ✅          | ⁴ |
| Python     | `import console`                  | ✅             | ✅          | ² |
| Ruby       | `require "./ruby/console"`        | ✅             | ✅          | |

### Limitations

- ¹ Arrays and maps must be homogeneous, due to language type restrictions.
- ² `console.Log` requires a capital `L` in Go.
- ³ These languages don't support importing file paths. You have to modify the import path.
- ⁴ `console.log()` with parentheses only accepts a single argument; `console.log[]` with braces is required for more. (Also, associate arrays break printing on the commandline in Mathematica 10. Old-fashioned lists of `Rule`s still work, though.)

If you know workarounds for these limitations (however hacky!), let me know.

## Goals

- Simple import without configuring import paths
- Single `console.log()` call in lowercase
- Multiple heterogeneous arguments can be passed to `console.log()`, inc. at the least the following types:
  - Primitive types: integer, string
  - Array/list/vector, preferably heterogeneous
  - Map/dictionary/associative array, preferably heteregeneous key and value types
  - Any type in the language with an associated method to turn it into a string
- Arguments are printed to `stdout` inline, with a space separator and a trailing newline
  - Where possible (e.g. DevTools JS console), arguments are displayed semantically

### Non-Goals

- Print types as similarly to JS as possible.

## Run all

```
make test
```
