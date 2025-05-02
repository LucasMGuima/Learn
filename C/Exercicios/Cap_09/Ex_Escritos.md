2) Write a function check(x, y, n) that returns 1 if both x and y fall between 0 and n – 1, inclusive. The function should return 0 otherwise. Assume that x, y, and n are all of type int.

R:
```C
    int check(int x, int y, int n){
        return ((x => 0 && x < n) && (y => 0 && y < n));
    }
```

4) Write a function day_of_year(month, day, year) that returns the day of the year (an integer between 1 and 366) specified by the three arguments.

R:
```C
    int day_of_year(int month, int day, int year){
        int dias_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int count_day = 0;

        for(int i = 1; i < month; i++){
            count_day += dias_mes[i-1];
        }

        // Contabiliza por anos bissestos, assumindo que são divisivei por 4
        if(year % 4 == 0 &* month > 2){
            count_day++;
        }

        return count_day + day;
    }
```

6) Write a function digit(n, k) that returns the kth digit (from the right) in n (a positive integer). For example, digit(829, 1) returns 9, digit(829, 2) returns 2, and digit(829, 3) returns 8. If k is greater than the number of digits in n, have the function return 0.

R:
```C
    int digit(int n, int k){
        for(int i = 1; i < k; i++){
            n /= 10;
        }

        return n % 10;
    }
```

8) Which of the following would be valid prototypes for a function that returns nothing and has one double parameter?
(a) void f(double x);
(b) void f(double);
(c) void f(x);
(d) f(double x);

> R: Tanto a opção *a* quanto a *b*, podemos passar um nome para a variavel no prototipo ou não.

10) Write functions that return the following values. (Assume that a and n are parameters, where a is an array of int values and n is the length of the array.)
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.

R:
```C
    int large_value(int * a, int n){
        int max = a[0];
        for(int i = 1; i < n; i++){
            if(max < a[i]) max = a[i];
        }
        return max;
    }

    float avg(int * a, int n){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        return sum/n;
    }

    int positive(int * a, int n){
        int qtd_pos = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > 0) qtd_pos += 1;
        }
        return qtd_pos;
    }
```

15) The following (rather confusing) function finds the median of three numbers. Rewrite the function so that it has just one return statement.
```C
double median(double x, double y, double z) {
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z) return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
```

R:
```C
    double median(double x, double y, double z){
        double med = 0;
        if(x <= y){
            if (y <= z) med = y;
            else if (x <= z) med = z;
            else med = x;
        }else{
            if (z <= y) med = y;
            else if (x <= z) med = x;
            else med = z;
        }

        return med;
    }
```

17) Rewrite the fact function so that it’s no longer recursive.
R:
```C
    
```

19) Consider the following “mystery” function:
```C
void pb(int n){
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
```
Trace the execution of the function by hand. Then write a program that calls the function, passing it a number entered by the user. What does the function do?

> R: 