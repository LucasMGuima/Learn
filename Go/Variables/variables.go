package main

import "fmt"

// Var declara uma lista de variaveis
var i, j int = 1, 2

const Pi = 3.14

func main() {
	const World = "世界"
	// Dentro de uma função o := pode ser usado para delcarar uma variavel com tipo implicito
	k := 3
	// Se um valor inicial está presente, o tipo pode ser omitido
	var c, python, java = true, false, "no!"
	fmt.Println(i, j, k, c, python, java)
}
