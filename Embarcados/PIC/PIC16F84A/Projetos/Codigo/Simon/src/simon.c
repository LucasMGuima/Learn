#include "../include/simon.h"
#include <builtins.h>
#include <pic.h>
#include <pic16f84a.h>
#include <xc.h>

void mostrar_sequencia(unsigned char *sequencia, unsigned char tamanho){
    char cont;
    for(cont = 0; cont < tamanho; cont++){
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
        __delay_ms(2500);
        LED1_OUT = 0;
        LED2_OUT = 0;
        LED3_OUT = 0;
        LED4_OUT = 0;
        __delay_ms(2500);
    }
}

void tratar_entrada(unsigned char * sequencia, unsigned char tamanho){
  char cont = 0;
  while(cont < tamanho){
    switch(sequencia[cont]){
      case 1:
        if(LED1_INP == 1){
          LED_DEBUG++;
          cont++;
          while(LED1_INP == 1);
        }else if(LED2_INP || LED3_INP || LED4_INP){
          LED_LOSE = 1;
          cont = 4;
        }
        break;
      case 2:
        if(LED2_INP == 1){
          LED_DEBUG++;
          cont++;
          while(LED2_INP == 1);
        }else if(LED1_INP || LED3_INP || LED4_INP){
          LED_LOSE = 1;
          cont = 4;
        }
        break;
      case 3:
        if(LED3_INP == 1){
          LED_DEBUG++;
          cont++;
          while(LED3_INP == 1);
        }else if(LED2_INP || LED1_INP || LED4_INP){
          LED_LOSE = 1;
          cont = 4;
        }
        break;
      case 4:
        if(LED4_INP == 1){
          LED_DEBUG++;
          cont++;
          while(LED4_INP == 1);
        }else if(LED2_INP || LED3_INP || LED1_INP){
          LED_LOSE = 1;
          cont = 4;
        }
        break;
    }
    __delay_ms(1000);
  };
}