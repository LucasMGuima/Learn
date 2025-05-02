1) We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the number of elements in an array. The expression sizeof(a) / sizeof(t), where t is the type of a’s elements, would also work, but it’s considered an inferior technique. Why?

> R: O problema é que na expressão *sizeof(a)/sizeof(t)* alguém lendo o código precisa identificar onde *a* foi declarado para veirifcar que ele sejá do tipo *t*.

2) The Q&A section shows how to use a letter as an array subscript. Describe how to use a digit (in character form) as a subscript.

> R: Para fazer uma *subscript* usando um digito *a*, utilizamos de *array[d-'0']*, assumindo que o os digitos tem códigos consecutivos no grupo de caracteres usado.

7) Using the shortcuts described in Section 8.2, shrink the initializer for the segments array (Exercise 6) as much as you can.

```C 
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1},
                                {0, 1, 1},
                                {1, 1, 0, 1, 1, 0, 1},
                                {1, 1, 1, 1, 0, 0, 1},
                                {0, 1, 1, 0, 0, 1, 1},
                                {1, 0, 1, 1, 0, 1, 1},
                                {1, 0, 1, 1, 1, 1, 1},
                                {1, 1, 1},
                                {1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 0, 1, 1}};
```