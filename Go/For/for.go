package main

import "fmt"

func main() {
	sum := 0

	for i := 0; i < 10; i++ {
		sum += i
	}
	fmt.Println(sum)

	// Init e post podem ser omitidos
	sum = 1
	for sum < 1000 {
		sum += sum
	}
	fmt.Println(sum)

	// Se a condition for omitiida o for roda vira um loop inifinito
	// for {}
}
