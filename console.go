package console

import "fmt"

func Log(args ...interface{}) {
  for i, a := range args {
    if i > 0 {
      fmt.Print(" ")
    }
    fmt.Print(a)
  }
  fmt.Print("\n")
}
