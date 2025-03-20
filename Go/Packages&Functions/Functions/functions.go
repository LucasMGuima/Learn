package main

import "fmt"

// "x int, y int" é o mesmo que "x, y int"
func add(x, y int) int {
	return x + y
}

// Uma função pode retornar N elementos
func swap(x, y string) (string, string) {
	return y, x
}

// Os valores de retorno podem ser nomeados,
// indicando a variavel que sera retornada
func split(sum int) (x, y int) {
	x = sum * 4 / 9
	y = sum - x
	return
}

func main() {
	fmt.Println(add(42, 13))
	a, b := swap("hello", "world")
	fmt.Println(a, b)
	fmt.Println(split(17))
}
