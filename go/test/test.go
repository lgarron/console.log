package main

import "../console"

func main() {
	arr := []int{21, -22}
	m := map[string][]int{"cat": []int{31, 32}}
	console.Log("Go:", 1337, arr, m)
}
