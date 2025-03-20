package main

import (
	"fmt"
)

func Sqrt(x float64) float64 {
	z := 1.0
	z_old := z + 0.1
	d := 10.0
	for d > 0.0001 {
		z_old = z
		z -= (z*z - x) / (2 * z)
		d = z_old - z
		if d < 0 {
			d *= -1
		}
		fmt.Println(z)
	}
	return z
}

func main() {
	fmt.Println("Valor final:", Sqrt(2))
}
