/*
    Imprime uma página de calendario, dado o numero de dias
    e em qual dia da semana ela começa
*/
#include <stdio.h>

int main(void){
    int days_in_month, starting_day;

    printf("Enter number of days in month: ");
    scanf("%2d", &days_in_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%1d", &starting_day);

    for(int i = 1; i < starting_day; i++){
        printf("   ");
    }

    for(int i = 1; i <= days_in_month; i++, starting_day++){
        if(starting_day > 7){
            printf("\n");
            starting_day = 1;
        }

        printf("%3d", i);
    }

    return 0;
}