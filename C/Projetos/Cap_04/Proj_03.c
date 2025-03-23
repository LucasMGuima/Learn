#include <stdio.h>

/*
    Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
    number without using arithmetic to split the number into digits. Hint: See the upc.c pro-
    gram of Section 4.1.
*/

int main(void){
    int n1, n2, n3;
    
    printf("Enter a two-digit number: ");
    scanf("%1d%1d%1d", &n1, &n2, &n3);

    printf("The reversal is: %d%d%d\n", n3, n2, n1);

    return 0;
}