
#define LED1_OUT RB0_bit
#define LED1_INP RB7_bit

#define LED2_OUT RB1_bit
#define LED2_INP RB6_bit

#define LED3_OUT RB2_bit
#define LED3_INP RB5_bit

#define LED4_OUT RB3_bit
#define LED4_INP RB4_bit

#define LED_LOSE RA0_bit

#define N 4

void mostrar_sequencia(unsigned char * sequencia);
void tratar_entrada(unsigned char * sequencia);

void main() {
  unsigned char nivel;
  unsigned char sequencia[N];
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
}

void tratar_entrada(unsigned char * sequencia){
    char cont = 0;
    RA2_bit = 0;
    while(cont < N){
       switch(sequencia[cont]){
         case 1:
              if(LED1_INP == 1){
                RA2_bit++;
                cont++;
              }else if(LED2_INP || LED3_INP || LED4_INP){
                LED_LOSE = 1;
                cont = N;
              }
              break;
         case 2:
              if(LED2_INP == 1){
                RA2_bit++;
                cont++;
              }else if(LED1_INP || LED3_INP || LED4_INP){
                LED_LOSE = 1;
                cont = N;
              }
              break;
         case 3:
              if(LED3_INP == 1){
                RA2_bit++;
                cont++;
              }else if(LED2_INP || LED1_INP || LED4_INP){
                LED_LOSE = 1;
                cont = N;
              }
              break;
         case 4:
              if(LED4_INP == 1){
                RA2_bit++;
                cont++;
              }else if(LED2_INP || LED3_INP || LED1_INP){
                LED_LOSE = 1;
                cont = N;
              }
              break;
       }
       delay_ms(1000);
    };
}

void mostrar_sequencia(unsigned char * sequencia){
  char cont;
  for(cont = 0; cont < N; cont++){
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
  delay_ms(1000);
  LED1_OUT = 0;
  LED2_OUT = 0;
  LED3_OUT = 0;
  LED4_OUT = 0;
}
}