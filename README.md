# `console.log()`

For when you don't want to think about what language you're using, and just get stuff onto the screen.

    console.log("JavaScript:", 1337, [21, 22, "owl"], {"cat": 31, 32: "fox"});

## Languages

| Language   | Import                        | Usage                         |     |
|------------|-------------------------------|-------------------------------|-----|
| C++        | `#include "cpp/console.h"`    | `console.log("Value:", 1337)` | ¹   |
| Go         | `import "./go/console"`       | `console.Log("Value:", 1337)` | ¹ ² |
| Java       | `import console.console;`     | `console.log("Value:", 1337)` | ³ ⁴ |
| JavaScript | N/A                           | `console.log("Value:", 1337)` |     |
| Julia      | `include("julia/console.jl")` | `console.log("Value:", 1337)` |     |
| Python     | `import console`              | `console.log("Value:", 1337)` | ²   |
| Ruby       | `require "./ruby/console"`    | `console.log("Value:", 1337)` |     |

### Limitations

- ¹ Homogeneous arrays and maps only.
- ² These languages don't support importing file paths. You have to modify the import path.
- ³ Homogeneous arrays only.
- ⁴ `console.Log` requires a capital `L` in Go.

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
