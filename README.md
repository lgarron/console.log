# console.log()

For when you don't want to think about what language you're using, and just get stuff onto the screen.

| Language   | Import                        | Usage                           |
|------------|-------------------------------|---------------------------------|
| C++        | `#include "cpp/console.h"`    | `console.log("Value:", 1337)`   |
| Go         | `import "./go/console"`       | `console.Log("Value:", 1337)` † |
| Javascript | N/A                           | `console.log("Value:", 1337)`   |
| Julia      | `include("julia/console.jl")` | `console.log("Value:", 1337)`   |
| Python     | `import console` ††           | `console.log("Value:", 1337)`   |
| Ruby       | `require "./ruby/console"`    | `console.log("Value:", 1337)`   |

### Limitations

- † Go: `console.Log` requires a capital `L`.
- †† Python: importing from arbitrary locations is not easy.

## Run all

```
make test
```
