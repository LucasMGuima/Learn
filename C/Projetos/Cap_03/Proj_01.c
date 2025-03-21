#include <stdio.h>

/*
    Write a program that accepts a date from the user in the form mm/dd/yyyy and then dis-
    plays it in the form yyyymmdd:
    Enter a date (mm/dd/yyyy): 2/17/2011
    You entered the date 20110217
*/

int main(void){
    
    int d,m,y;

    printf("Enter a date (mm/dd/yyy): ");
    scanf("%d/%d/%4d", &m, &d, &y);
    printf("You entered the date %d%.2d%.2d\n", y, m, d);
    
    return 0;
}