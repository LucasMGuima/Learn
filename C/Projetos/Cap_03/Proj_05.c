#include <stdio.h>

/*
    Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
    displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
    and diagonals:
    Enter the numbers from 1 to 16 in any order:
    16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

    16  3  2 13
     5 10 11  8
     9  6  7 12
     4 15 14  1
    Row sums: 34 34 34 34
    Column sums: 34 34 34 34
    Diagonal sums: 34 34
    If the row, column, and diagonal sums are all the same (as they are in this example), the
    numbers are said to form a magic square. The magic square shown here appears in a 1514
    engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the
    last row give the date of the engraving.)
*/

int main(void){
    int r1c1, r1c2, r1c3, r1c4,
        r2c1, r2c2, r2c3, r2c4,
        r3c1, r3c2, r3c3, r3c4,
        r4c1, r4c2, r4c3, r4c4;

    int sumR1, sumR2, sumR3, sumR4;
    int sumC1, sumC2, sumC3, sumC4;
    int diag1, diag2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
        &r1c1, &r1c2, &r1c3, &r1c4,
        &r2c1, &r2c2, &r2c3, &r2c4,
        &r3c1, &r3c2, &r3c3, &r3c4,
        &r4c1, &r4c2, &r4c3, &r4c4);

    // Calcula as somas
    sumR1 = r1c1 + r1c2 + r1c3 + r1c4;
    sumR2 = r2c1 + r2c2 + r2c3 + r2c4;
    sumR3 = r3c1 + r3c2 + r3c3 + r3c4;
    sumR4 = r4c1 + r4c2 + r4c3 + r4c4;

    sumC1 = r1c1 + r2c1 + r3c1 + r4c1;
    sumC2 = r1c2 + r2c2 + r3c2 + r4c2;
    sumC3 = r1c3 + r2c3 + r3c3 + r4c3;
    sumC4 = r1c4 + r2c4 + r3c4 + r4c4;

    diag1 = r1c1 + r2c2 + r3c3 + r4c4;
    diag2 = r1c4 + r2c3 + r3c2 + r4c1;

    // Saida
    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n",
        r1c1, r1c2, r1c3, r1c4, r2c1, r2c2, r2c3, r2c4, r3c1, r3c2, r3c3, r3c4, r4c1, r4c2, r4c3, r4c4);

    printf("Row sum: %d %d %d %d\n", sumR1, sumR2, sumR3, sumR4);
    printf("Column sum: %d %d %d %d\n", sumC1, sumC2, sumC3, sumC4);
    printf("Diagonal sum: %d %d\n", diag1, diag2);

    return 0;
}