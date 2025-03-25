1) What output does the following program fragment produce?
    ```C
    i = 1;
    while(i <= 128){
        printf("%d ", i);
        i *= 2;
    }
    ```

    > R: 1 2 4 8 16 32 64 128

2) What output does the following program fragment produce?
    ```C
    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while(i > 0);
    ```

    > R: 9384 938 93 9

3) What output does the following for statement produce?
    ```C
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
    ```

    > R: O programa não mostra nada em tela, pos *j* começa como 0 e j > 0 da false.

4) Which one of the following statements is not equivalent to the other two (assuming that the
loop bodies are the same)?

    (a) 
    ```C
        for (i = 0; i < 10; i++) ...
    ```

    (b)
    ```C
        for (i = 0; i < 10; ++i) ...
    ```

    (c)
    ```C
        for (i = 0; i++ < 10; ) ...
    ```

    > R: O **c** é o diferente, visto que, a incrementação ocorrera após a comparacão com 10. Logo
    > se utilizarmos o *i* dentro do for, o valor na primeira interação sera 1, e no **a** e **b** o valor
    > de *i* na pirmeira interação é 0.

5) Which one of the following statements is not equivalent to the other two (assuming that the
loop bodies are the same)?

    (a)
    ```C
        while (i < 10) {...}
    ```

    (b)
    ```C
        for (; i < 10;) {...}
    ```

    (c)
    ```C
        do {...} while (i < 10);
    ```

    > R: O **c** é o loop não equivalente, se *i* for um valor maior que 10, o código dentro do
    > loop irá rodar uma vez, enquanto os loops do **a** e **b** não rodaria nesse caso.

6) Translate the program fragment of Exercise 1 into a single for statement.

    R:
    ```C
        for(i = 1; i <= 128; i *= 2)
            printf("%d ", i);
    ``` 

7) Translate the program fragment of Exercise 2 into a single for statement.

    R:
    ```C
        for(i = 9384; i > 0; i /= 10)
            printf("%d ", i);
    ```

8) What output does the following for statement produce?
    ```C
        for (i = 10; i >= 1; i /= 2)
            printf("%d ", i++);
    ```

    > R: 10 5 3 2 1 1 ...

9) Translate the for statement of Exercise 8 into an equivalent while statement. You will
need one statement in addition to the while loop itself.

    R:
    ```C
        i = 10
        while(i >= 1){
            printf("%d ", i++);
            i /= 2;
        }
    ``` 

10) Show how to replace a continue statement by an equivalent goto statement.

    R:
    ```C
        while(...){         while(...){
            ...                 ...
            continue;           goto loop_end;
            ....                ...
        }                       loop_end: ; // Null statement
                               }
    ``` 

11) What output does the following program fragment produce?
    ```C
        sum = 0;
        for (i = 0; i < 10; i++) {
            if (i % 2)
                continue;
            sum += i;
        }
        printf("%d\n", sum);
    ```

    > R: 5

12) The following “prime-testing” loop appeared in Section 6.4 as an example:
    ```C
        for(d = 2; d < n; d++)
            if(n % d == 0)
                break;
    ```

    This loop isn’t very efficient. It’s not necessary to divide n by all numbers between 2 and
    n – 1 to determine whether it’s prime. In fact, we need only check divisors up to the square
    root of n. Modify the loop to take advantage of this fact. Hint: Don’t try to compute the
    square root of n; instead, compare d * d with n.

    R:
    ```C
        for(d = 2; d * d <= n; d++)
            if(d * d <= n)
                printf("%d é divisivel por %d.\n", d, n);
            else
                printf("%d é primo.\n");
    ```

13) Rewrite the following loop so that its body is empty:
    ```C
        for(n = 0; m > 0; n++)
            m /= 2;
    ```

    R:
    ```C
        for(m = 0; m > 0; m /= 2);
    ```

14) Find the error in the following program fragment and fix it.
    ```C
        if(n % 2 == 0);
            printf("n is even\n");
    ```

    R:
    ```C
        if(n % 2 == 0){
            printf("n is even\n");
        }
    ```  