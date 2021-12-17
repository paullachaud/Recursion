package main

import "fmt"

func main() {
	input := []int {1,2,3,4,5,6,7}
	// fmt.Println(input)
	fmt.Println(sum(input))
}

func sum(input []int) int {
	fmt.Println(input)
	if len(input) == 1 {
		return input[0]
	}

	return input[0] + sum(input[1:len(input)])
}

