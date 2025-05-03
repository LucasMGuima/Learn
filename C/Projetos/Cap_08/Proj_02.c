/*
    Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
    many times each digit appears in the number:
    Enter a number: 41271092
    Digit:          0 1 2 3 4 5 6 7 8 9
    Occurrences:    1 2 2 0 1 0 0 1 0 1
*/

#include <stdio.h>
#include <stdbool.h>

/* C99 only */
int main(void){
    int digit_occur[10] = {0};
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        digit = n % 10;
        digit_occur[digit]++;
        n /= 10;
    }
    
    printf("Digit:%8c", ' ');
    for (int i = 0; i < 10; i++) printf("%3d", i);
    printf("\n");
    printf("Occurrences:%2c", ' ');
    for (int i = 0; i < 10; i++) printf("%3d", digit_occur[i]);
    printf("\n");
    return 0;
}