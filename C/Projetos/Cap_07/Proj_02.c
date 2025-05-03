/*
    Modify the square2.c program of Section 6.3 so that it pauses after every 24 squares and
    displays the following message:
    Press Enter to continue...
    After displaying the message, the program should use getchar to read a character.
    getchar won’t allow the program to continue until the user presses the Enter key.
*/

#include <stdio.h>

int main(void){
    int i, n, contador = 0;
    char input = '\0';
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); // Limpa o '/n' gerado pelo scanf

    for (i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i * i);
        contador++;
        if (contador % 24 == 0){
            printf("Press Enter to continue...\n");
            while (input != '\n'){
                input = getchar();
            }
            input = '\0';
        }
    }
}