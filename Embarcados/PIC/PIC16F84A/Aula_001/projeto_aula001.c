void main() {
     // Configura a todos os pinos da
     // porta B como saida
     TRISB = 0b00000000;
     // Inicia todos os pinos da porta B
     // em nível baixo
     PORTB = 0b00000000;
     
     while(1){
              RB1_bit = 1;
              delay_ms(1000);
              RB1_bit = 0;
              delay_ms(1000);
     }
}