#include <stdio.h>

/*
    Extend the program in Programming Project 1 to handle three-digit numbers.
*/

int main(void){
    int num;
    
    printf("Enter a two-digit number: ");
    scanf("%3d", &num);

    printf("The reversal is: %d%d%d\n", num%10, (num/10)%10, num/100);

    return 0;
}