#include "../include/simon.h"
#include <pic.h>
#include <pic16f84a.h>
#include <xc.h>

void mostrar_sequencia(unsigned char *sequencia){
    char cont;
    for(cont = 0; cont < 4; cont++){
        switch(sequencia[cont]){
        case 1:
            LED1_OUT = 1;
            break;
        case 2:
            LED2_OUT = 1;
            break;
        case 3:
            LED3_OUT = 1;
            break;
        case 4:
            LED4_OUT = 1;
            break;
        }
        __delay_ms(1000);
        LED1_OUT = 0;
        LED2_OUT = 0;
        LED3_OUT = 0;
        LED4_OUT = 0;
    }
}

void tratar_entrada(unsigned char * sequencia){
    char cont = 0;
    PORTAbits.RA2 = 0;
    while(cont < 4){
       switch(sequencia[cont]){
         case 1:
              if(LED1_INP == 1){
                PORTAbits.RA2++;
                cont++;
              }else if(LED2_INP || LED3_INP || LED4_INP){
                LED_LOSE = 1;
                cont = 4;
              }
              break;
         case 2:
              if(LED2_INP == 1){
                PORTAbits.RA2++;
                cont++;
              }else if(LED1_INP || LED3_INP || LED4_INP){
                LED_LOSE = 1;
                cont = 4;
              }
              break;
         case 3:
              if(LED3_INP == 1){
                PORTAbits.RA2++;
                cont++;
              }else if(LED2_INP || LED1_INP || LED4_INP){
                LED_LOSE = 1;
                cont = 4;
              }
              break;
         case 4:
              if(LED4_INP == 1){
                PORTAbits.RA2++;
                cont++;
              }else if(LED2_INP || LED3_INP || LED1_INP){
                LED_LOSE = 1;
                cont = 4;
              }
              break;
       }
       __delay_ms(1000);
    };
}