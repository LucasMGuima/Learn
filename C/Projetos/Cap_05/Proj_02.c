/*
    Convert um horario de 24hrs para 12hrs
*/
#include <stdio.h>

int main(void){
    int hr, min;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hr, &min);

    if(hr > 12){
        // PM
        printf("Equivalent 12-hour time: %d:%d PM\n", hr-12, min);
    }else{
        // AM
        printf("Equivalent 12-hour time: %d:%d AM\n", hr, min);
    }

    return 0;
}