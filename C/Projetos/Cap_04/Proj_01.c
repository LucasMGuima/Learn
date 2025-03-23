#include <stdio.h>

/*
    Write a program that asks the user to enter a two-digit number, then prints the number with
    its digits reversed. A session with the program should have the following appearance:
    Enter a two-digit number: 28
    The reversal is: 82
    Read the number using %d, then break it into two digits. Hint: If n is an integer, then n % 10
    is the last digit in n and n / 10 is n with the last digit removed.
*/

int main(void){
    int num;
    
    printf("Enter a two-digit number: ");
    scanf("%2d", &num);

    printf("The reversal is: %d%d\n", num%10, num/10);

    return 0;
}