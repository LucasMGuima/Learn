/*
    Modigicação do broker.c encontrado na seção 5.2  
*/
#include <stdio.h>

int main(void){
    float commission, commission_rival, value, price_per_share;
    int qtd_shares;
    
    printf("Enter the number of shares: ");
    scanf("%d", &qtd_shares);
    printf("Enter the precie per share: ");
    scanf("%f", &price_per_share);

    value = qtd_shares * price_per_share;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    
    if (commission < 39.00f)
        commission = 39.00f;

    // Commission rival
    if(qtd_shares < 2000){
        commission_rival = 33.00f + 0.03f * qtd_shares; 
    }else{
        commission_rival = 33.00f + 0.02f * qtd_shares;
    }
    
    printf("Original broker commission: $%.2f\n", commission);
    printf("Rival broker commission: $%.2f\n", commission_rival);

    return 0;
}