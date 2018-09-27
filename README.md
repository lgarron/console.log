# `console.log()`

For when you don't want to think about what language you're using, and just get stuff onto the screen.

    arr = [21, 22, "owl"]
    map = {"cat": 31, 32: "fox"}
    
    console.log("JavaScript:", 1337, arr, map)

## Languages

| Language   | Import                        |       |
|------------|-------------------------------|-------|
| C++        | `#include "cpp/console.h"`    | ¹     |
| Go         | `import "./go/console"`       | ¹ ² ³ |
| Java       | `import console.console;`     | ⁴     |
| JavaScript | N/A                           |       |
| Julia      | `include("julia/console.jl")` |       |
| Python     | `import console`              | ²     |
| Ruby       | `require "./ruby/console"`    |       |

### Limitations

- ¹ Homogeneous arrays and maps only.
- ² These languages don't support importing file paths. You have to modify the import path.
- ³ `console.Log` requires a capital `L` in Go.
- ⁴ Homogeneous arrays only.

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
