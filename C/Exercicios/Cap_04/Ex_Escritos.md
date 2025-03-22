1) Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.

    (A) i = 5; j = 3;
    
    ```printf("%d %d", i / j, i % j);```

    > R: 1 6

    (B) i = 2; j = 3;

    ```printf("%d", (i + 10) % j);```

    > R: 0

    (C) i = 7; j = 8; k = 9;
    
    ```printf("%d", (i + 10) % k / j);```

    > R: A soma ```i + 10``` dara 17, assim ficando com ```17 % 9 / 8```, agora 
    > temos um problema de precedencia, como a operção ```%```e ```/``` tem o
    > o valor de precedencia 3, como mostrado na tabela 4.2, o valor valor final 
    > pode ser ```8 / 8 = 1``` ou ```17 % 1 = 0```, depende de qual das duas operações
    > sera avalida primeiro.

    (D) i = 1; j = 2; k = 3;

    ```printf("%d", (i + 5) % (j + 2) / k);```

    > R: Após realizar as somas, ficaremos com a expreção ```6 % 4 / 3```,
    > caimos novamente em operações com a mesma precedencia, logo o valor final
    > pode ser, ```5 / 3 = 1``` ou ```6 % 1 = 0```

2) If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify
your answer.
    > R: Em C89, os valores não seriam igual, supondo que i = 9 e j = 7, a operação ```(-i)/j```
    > pode resultar em, -1 ou -2, dependendo da imprementação, e estamos truncando e
    > arredondando apra cima ou para baixo. Já no C99, ambas as operações devem dar o mesmo
    > valor.

3) What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)

    (a) 8 / 5
    
    > R: 1

    (b) -8 / 5
    
    > R: -1 ou -2

    (c) 8 / -5

    > R: -1 ou -2
    
    (d) -8 / -5

    > R: 1 ou 2

4) Repeat Exercise 3 for C99.

    > Em C99, (a) e (d) resultão em 1 e (b) e (c) em -1.

5) What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)

    (a) 8 % 5

    > R: 3

    (b) -8 % 5
    
    > R: -3
    
    (c) 8 % -5
    
    > R: -3
    
    (d) -8 % -5

    > R: 3

6) Repeat Exercise 5 for C99.

    > R: Em C99, (a) e (d) resultão em 3, e (b) e (c) resultão em -3.

7) The algorithm for computing the UPC check digit ends with the following steps:

    Subtract 1 from the total.
    
    Compute the remainder when the adjusted total is divided by 10.
    
    Subtract the remainder from 9.
    
    It’s tempting to try to simplify the algorithm by using these steps instead: 
    
    Compute the remainder when the total is divided by 10.

    Subtract the remainder from 10.
    
    Why doesn’t this technique work?

    > R: Porque na tequinica a cima, pela ordem do operação removemos 1 do total, antes
    > de fazermos a operção ```%```, logo o resultado sera diferente se fizermos a
    > operação com o total para depois retirarmos 10, a subtração de 9 e 1 neste caso
    > não podem ser integradas em uma única subtração.

8) Would the upc.c program still work if the expression 9 - ((total - 1) % 10) were
replaced by (10 - (total % 10)) % 10?

    > R: Supondo que o valor de total é 4, a primeira expreção, resulta no valor 5,
    > já a segunda nos dara o valor 6, logo não são equivalentes, e a substituição
    > não é válida.

9) Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.

    (a)   
    ```C
        i = 7; j = 8;
        i *= j + 1;  
        printf("%d %d", i, j);
    ```

    > R: 63 8

    (b)  
    ```C
        i = j = k = 1; 
        i += j += k;  
        printf("%d %d %d", i, j, k);
    ```
    
    > R: 3 2 1

    (c)  
    ```C
        i = 1; j = 2; k = 3; 
        i -= j -= k;  
        printf("%d %d %d", i, j, k);
    ```
    
    > R: 2 -1 3

    (d)   
    ```C
        i = 2; j = 1; k = 0;
        i *= j *= k;  
        printf("%d %d %d", i, j, k);
    ```

    > R: 0 0 0

10) Show the output produced by each of the following program fragments. Assume that i and
j are int variables.

    (a) 
    ```C
        i = 6;
        j = i += i;
        printf("%d %d", i, j);
    ```
    
    > R: 12 12
    
    (b) 
    ```C
        i = 5;
        j = (i -= 2) + 1;
        printf("%d %d", i, j);
    ```

    > R: 3 4

    (c) 
    ```C
        i = 7;
        j = 6 + (i = 2.5);
        printf("%d %d", i, j);
    ```

    > R: 2 8

    (d) 
    ```C
        i = 2; j = 8;
        j = (i = 6) + (j = 3);
        printf("%d %d", i, j);
    ```

    > R: 6 9

11) Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.

    (a) 
    ```C
        i = 1;
        printf("%d ", i++ - 1);
        printf("%d", i);
    ```

    > R: 0 2

    (b)
    ```C 
        i = 10; j = 5;
        printf("%d ", i++ - ++j);
        printf("%d %d", i, j);
    ```

    > R: 4 11 6

    (c)
    ```C 
        i = 7; j = 8;
        printf("%d ", i++ - --j);
        printf("%d %d", i, j);
    ```

    > R: 0 8 7

    (d)
    ```C 
        i = 3; j = 4; k = 5;
        printf("%d ", i++ - j++ + --k);
        printf("%d %d %d", i, j, k);
    ```

    > R: 0 4 5 4

