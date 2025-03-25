1) The following program fragments illustrate the relational and equality operators. Show the
output produced by each, assuming that i, j, and k are int variables.

    (a) 
    ```C
    i = 2; j = 3;
    k = i * j == 6;
    printf("%d", k);
    ```

    > R: 1

    (b) 
    ```C
    i = 5; j = 10; k = 1;
    printf("%d", k > i < j);
    ```

    > R: 1

    (c) 
    ```C
    i = 3; j = 2; k = 1;
    printf("%d", i < j == j < k);
    ```

    > R: 1

    (d) 
    ```C
    i = 3; j = 4; k = 5;
    printf("%d", i % j + i < k);
    ```

    > R: 0

2) The following program fragments illustrate the logical operators. Show the output produced
by each, assuming that i, j, and k are int variables.

    (a)
    ```C
    i = 10; j = 5;
    printf("%d", !i < j);
    ```
    
    > R: 1

    (b)
    ```C
    i = 2; j = 1;
    printf("%d", !!i + !j);
    ```
    
    > R: 1

    (c)
    ```C
    i = 5; j = 0; k = -5;
    printf("%d", i && j || k);
    ```
    
    > R: 1

    (d)
    ```C
    i = 1; j = 2; k = 3;
    printf("%d", i < j || k);
    ```

    > R: 1

3) The following program fragments illustrate the short-circuit behavior of logical expressions.
Show the output produced by each, assuming that i, j, and k are int variables.

    (a)
    ```C
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k);
    ```

    > R: 1 3 4 5

    (b)
    ```C
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);
    ```

    > R: 0 7 8 9

    (c)
    ```C
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d", i, j, k);
    ```
    
    > R: 1 8 8 9
    
    (d)
    ```C
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
    ```

    > R: 1 2 1 1

4) Write a single expression whose value is either –1, 0, or +1, depending on whether i is less
than, equal to, or greater than j, respectively.

    > R:  (i > j) - (i < j)

5) Is the following if statement legal?
    ```C
        if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");
    ```
    If so, what does it do when n is equal to 0?

    > R: O *if* é legal, quando *n* é 0 ele mostra a mensagem *n is between 1 and 10*,
    > pos primeiro verifica se *0 >= 1* resultando em 0 e em seguida ferica se,
    > *0 <= 10* resultando em 1.

6) Is the following if statement legal?
    ```C
        if (n == 1-10)
        printf("n is between 1 and 10\n");
    ```
    If so, what does it do when n is equal to 5?

    > R: O *if* é legal, quando *n* é igual a 5 ele mostrara nada na leta. Pos fara a
    > seguinte verificicação, *5 == 1-10* que vira *5 == -9*, assim o resultado da
    > comaparação sera 0, fazendo o if não executar o print.

7) What does the following statement print if i has the value 17? What does it print if i has the
value –17?
    ```C
        printf("%d\n", i >= 0 ? i : -i);
    ```

    > R: Se i = 17, sera impresso na tela o valor 17, se i = -17 o valor impresso será
    > -(-17) portanto, 17.

8) The following if statement is unnecessarily complicated. Simplify it as much as possible.
(Hint: The entire statement can be replaced by a single assignment.)
    ```C
        if (age >= 13)
            if (age <= 19)
                teenager = true;
            else
                teenager = false;
        else if (age < 13)
            teenager = false;
    ```

    > R: teenager = ((age < 13) && (age >= 19)) ? false : true;

9) Are the following if statements equivalent? If not, why not?
    ```C
        if (score >= 90)      |  if (score < 60)
            printf("A");      |     printf("F");
        else if (score >= 80) |  else if (score < 70)
            printf("B");      |      printf("D");
        else if (score >= 70) |  else if (score < 80)
            printf("C");      |      printf("C");
        else if (score >= 60) |  else if (score < 90)
            printf("D");      |      printf("B");
        else                  |  else
            printf("F");      |      printf("A");
    ```

    > R: Ambos os *if*s são equivalentes, dados um score entre 0 e 100
    > a nota final será a mesma, eles apenas avalião o campo de sore
    > possiveis de manáeirasa inversar.

10) What output does the following program fragment produce? (Assume that i is an integer
variable.)
    ```C
        i = 1;
        switch (i % 3) {
            case 0: printf("zero");
            case 1: printf("one");
            case 2: printf("two");
        }
    ```

    > R: O programa ira impreimier na tela a seguinte saida *onetwo*.

11) The following table shows telephone area codes in the state of Georgia along with the largest
city in each area:
    ```
    Area code   Major city  
        229     Albany  
        404     Atlanta  
        470     Atlanta  
        478     Macon  
        678     Atlanta  
        706     Columbus  
        762     Columbus  
        770     Atlanta  
        912     Savannah 
    ``` 
    Write a switch statement whose controlling expression is the variable area_code. If the
    value of area_code is in the table, the switch statement will print the corresponding
    city name. Otherwise, the switch statement will display the message "Area code not
    recognized". Use the techniques discussed in Section 5.3 to make the switch statement
    as simple as possible.

    R: 
    ```C 
        switch(area_code){
            default:
                printf("Area code not recognized\n");
                break;
            case 229:
                printf("Albany\n");
                break;
            case 404: case 470: case 678: 
            case 770:
                printf("Atlanta\n");
                break;
            case 478:
                printf("Macon\n");
                break;
            case 706: case 762:
                printf("Columbus\n");
                break;
            case 912:
                printf("Savannah\n");
                break;
        }
    ```
