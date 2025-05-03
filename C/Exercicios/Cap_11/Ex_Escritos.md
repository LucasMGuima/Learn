2) If i is an int variable and p and q are pointers to int, which of the following assignments are legal?
(a) p = i;      (d) p = &q;     (g) p = *q;
(b) *p = &i;    (e) p = *&q;    (h) *p = q;
(c) &p = q;     (f) p = q;      (i) *p = *q;

> R: *e*, *f* e *i* são legais.

4) Write the following function:
```void swap(int *p, int *q);```
When passed the addresses of two variables, swap should exchange the values of the variables:
```swap(&i, &j); /* exchanges values of i and j */```

R:
```C
    void swap(int *p, int *q){
        int aux = *p;
        *p = *q;
        *q = aux;
    }
```

6) Write the following function:
```void find_two_largest(int a[], int n, int *largest, int *second_largest);```
When passed an array a of length n, the function will search a for its largest and secondlargest elements, storing them in the variables pointed to by largest and second_largest, respectively.

R:
```C
    void find_two_largest(int a[], int n, int *largest, int *second_largest){
        if(a[0] > a[1]){
            *largest = a[0];
            *second_largest = a[1];
        }else{
            *largest = a[1];
            *second_largest = a[0];
        }

        for(int i = 2; i < n; i++){
            if(a[i] > *largest){
                *second_largest = *largest;
                *largest = a[i];
            }else if(a[i] > *second_largest){
                *second_largest = a[i];
            }
        }
    }
```

