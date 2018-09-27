# console.log()

For when you don't want to think about what language you're using, and just get stuff onto the screen.

| Language   | Import                        | Usage                         |   |
|------------|-------------------------------|-------------------------------|---|
| C++        | `#include "cpp/console.h"`    | `console.log("Value:", 1337)` |   |
| Go         | `import "./go/console"`       | `console.Log("Value:", 1337)` | ¹ |
| Java       | `import console.console;`     | `console.log("Value:", 1337)` | ² |
| Javascript | N/A                           | `console.log("Value:", 1337)` |   |
| Julia      | `include("julia/console.jl")` | `console.log("Value:", 1337)` |   |
| Python     | `import console`              | `console.log("Value:", 1337)` | ¹ |
| Ruby       | `require "./ruby/console"`    | `console.log("Value:", 1337)` |   |

### Limitations

- ¹ These languages don't support importing file paths. You have to modify the import path.
- ² `console.Log` requires a capital `L` in Go.

If you know workarounds for these limitations (however hacky!), let me know.

## Run all

```
make test
```
