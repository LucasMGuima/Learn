#include <stdio.h>

/*
    1) What output do the following calls of printf produce?
*/

int main(void){
    printf("Exercicio 01:\n");
    printf("A) %6d,%4d\n", 86, 1040);   // Saida:     86,1040
    printf("B) %12.5e\n", 30.253);      // Saida: 3.03530e+01
    printf("C) %.4f\n",83.162);         // Saida: 83.1620
    printf("D) %-6.2g\n", .0000009979); // Siada: 1e-06

    return 0;
}