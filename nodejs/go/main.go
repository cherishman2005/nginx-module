package main

import(
    "fmt"
)

func foo (args ...int) {
    fmt.Println(len(args))
}

func main() {
    foo() // 0
    foo(1,2,3) // 3
}

