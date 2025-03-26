/*
    Calcula o MDC, maior divisor comum
*/
#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while(num2 > 0){
        int resto = num1%num2;
        num1 = num2;
        num2 = resto;
    }

    printf("Greatest common divisor: %d\n", num1);
    return 0;
}