#include <stdio.h>

/*
    Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
    xxxx and then displays the number in the form xxx.xxx.xxx:
    Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
    You entered 404.817.6900
*/

int main(void){
    int dd, p1, p2;
    
    printf("Enter phen number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &dd, &p1, &p2);

    printf("You entered %d.%d.%d\n", dd, p1, p2);

    return 0;
}