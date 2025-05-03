/*
    The square2.c program of Section 6.3 will fail (usually by printing strange answers) if
    i * i exceeds the maximum int value. Run the program and determine the smallest value
    of n that causes failure. Try changing the type of i to short and running the program
    again. (Don’t forget to update the conversion specifications in the call of printf!) Then
    try long. From these experiments, what can you conclude about the number of bits used to
    store integer types on your machine?

    Resposta:
    O programa falha quando o valor de n é 46341, pois o quadrado de 46341 é 2147488281,
    que é maior que o valor máximo de um inteiro (2147483647). Quando o tipo de i é alterado 
    para short, o programa falha quando n é 256, pois o quadrado de 256 é 65536, que é maior
    que o valor máximo de um short (32767). Quando o tipo de i é alterado para long, o programa
    não falha, pois o valor máximo de um long é maior que o quadrado de 46341. Isso indica que
    o tipo long tem mais bits disponíveis para armazenar valores inteiros do que os tipos int e
    short. Portanto, podemos concluir que o tipo long tem mais bits disponíveis para armazenar
    valores inteiros do que os tipos int e short, o que permite armazenar números maiores sem
    causar overflow.
*/

#include <stdio.h>

int main(void){
    int n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int square = i * i;
        if (square < 0){
            printf("Integer overflow occurred at i = %d\n", i);
            break;
        }
        //printf("%10d%10d\n", i, square);
    }

    for (short i = 1; i <= n; i++){
        short square = i * i;
        if (square < 0){
            printf("Short integer overflow occurred at i = %hu\n", i);
            break;
        }
        //printf("%10hu%10hu\n", i, square);
    }

    for (long i = 1; i <= n; i++){
        long square = i * i;
        if (square < 0){
            printf("Long iteger overflow occurred at i = %lu\n", i);
            break;
        }
        //printf("%10lu%10lu\n", i, square);
    }


    return 0;
}