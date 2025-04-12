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
  
    // Gera uma sequencia
    nivel = 1;

    while(1){
      gerar_sequencia(sequencia, nivel);
      // Mostra sequencia
      mostrar_sequencia(sequencia, nivel);
      // Entrada da sequencia
      tratar_entrada(sequencia, nivel);

      if(LED_LOSE == 1){
        // Se o LED de perda estiver aceso, reinicia o jogo
        nivel = 1;
        LED_LOSE = 0;
      }else{
        // Proxima fase
        nivel++;
      }
    }
};
