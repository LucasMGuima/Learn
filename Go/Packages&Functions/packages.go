package main // Inicia roando o pacote main

// Importa os pacotes fmt e math/rand
import (
	"fmt"
	"math"
	"math/rand"
)

func main() {
	fmt.Println("Meu número favorito é: ", rand.Intn(10))
	// Em Go um nome é exportavel, se ele começa com leitra maiuscula,
	// se não eles não podem ser acessados fora do mesmo package
	fmt.Println("O valor de Pi é: ", math.Pi)
}
