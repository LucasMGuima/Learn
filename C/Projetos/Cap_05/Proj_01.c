/* 
    Calcula quantos digitos um numero possuie 
    Assumimso que o numero tem no máximo 4 digitos
*/


#include <stdio.h>

int main(void){
    int num, qtd_digit = 0;

    printf("Enter a number: ");
    scanf("%4d", &num);

    if (num < 10){
        qtd_digit = 1;
    }else if (num < 99){
        qtd_digit = 2;
    }else if (num < 999){
        qtd_digit = 3;
    }else{
        // O numero tem 4 digitos
        qtd_digit = 4;
    }

    printf("The number %d has %d digits.\n", num, qtd_digit);
    return 0;
}