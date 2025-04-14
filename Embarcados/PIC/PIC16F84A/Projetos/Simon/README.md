# Simon
Recriado o brinquedo [Simon](https://en.wikipedia.org/wiki/Simon_(game)) utilizando o microcontrolador PIC16F48.

## Descrição
Utilzando do microcontrolador PIC16F84, foi desenvolvido um programa para emular o conceito básico de um Simon, que consiste em repetir a sequencai de luzes piscantes apresentadas pelo brinquedo.

O programa foi desenvolvido em C, utilizando da extenão MPLAB para Visual Studio Code. Foi seguido os padrões requisitados pelo compilador da mesma.

### Desmonstração

### Dificuldades
- **Debounce**

    Quando trabalhamos com entradas por componentens fisicos que serão usados por usuários comuns temos que tratar ruidos, e a tequica de *debounce* trata destes problemas.  
    Ela consiste em criar um atraso artificial para termos certeza que o valor lido é verdadeiro e não um ruido. A abordagem escolhida foi de *debounce* fisico, por deixar o código mais limpo e se necessário altera-lo, só precisamos trocar o componente.

    <img src="./imgs/debaunce.jpeg" alt="debaunce" width="250"/>

    Esse circuito gera um *debounce* de 10ms. Que se enquandra em uma quantidade aceitavel de tempo, não cendo percepitivel o atraso ao usuário.

- **Display de 7 segmentos**

    Para indicar os valores no display de 7 segmentos foi utilizado um conversor de serial para paralelo, neste caso o 74HC545 foi ecolido.

    ```C
        ...
        for(i = 0; i < 8; i++){
            DATA = (bits & (1<<i)) ? 1 : 0;
            ...
        }
        ...
    ```

    <img src="./imgs/74hc545.jpeg" alt="74hc545" width="250"/>