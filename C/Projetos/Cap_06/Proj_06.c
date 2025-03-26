/* 
    Mostra todos os quadrados pares de 0 ate n.
*/
#include <stdio.h>

int main(void){
    int n;

    printf("Enter limit on maximum square: ");
    scanf("%d", &n);

    for(int i = 2;  i * i <= n; i += 2){
        printf("%d\n", i * i);
    }

    return 0;
}