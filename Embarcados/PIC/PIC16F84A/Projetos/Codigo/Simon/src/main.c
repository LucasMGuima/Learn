/** 
 * @file main.c
 * @author Lucas da Mata
 * @date 2025-04-12
 * @brief Main function 
 */

#include "../include/simon.h"
#include <pic16f84a.h>

int main(){
    unsigned char nivel;
    unsigned char sequencia[4];
    int cont;
  
    // Configura RB7 a RB4 como entrada
    // e RB0 a RB3 como saida
    TRISB = 0b11110000;
    TRISA = 0b00000000;
    
    PORTA = 0b00000000;
    PORTB = 0b00000000;
  
    sequencia[0] = 1;
    sequencia[1] = 4;
    sequencia[2] = 2;
    sequencia[3] = 3;
  
    while(1){
      LED_LOSE = 0;
      // Mostra sequencia
      mostrar_sequencia(sequencia);
      
      // Entrada da sequencia
      tratar_entrada(sequencia);
    }
};
