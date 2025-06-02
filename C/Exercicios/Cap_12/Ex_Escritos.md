2. Suppose that high, low, and middle are all pointer variables of the same type, and that low and high point to elements of an array. Why is the following statement illegal, and how could it be fixed?
```C 
    middle = (low + high)/ 2; 
```
R:
```C

```

4. Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to use the pointer variable top_ptr instead of the integer variable top.
R:
```C

```

6. Rewrite the following function to use pointer arithmetic instead of array subscripting. (In other words, eliminate the variable i and all uses of the [] operator.) Make as few changes as possible.
R:
```C

```

13. Section 8.2 had a program fragment in which two nested for loops initialized the array ident for use as an identity matrix. Rewrite this code, using a single pointer to step through the array one element at a time. Hint: Since we won’t be using row and col index variables, it won’t be easy to tell where to store 1. Instead, we can use the fact that the first element of the array should be 1, the next N elements should be 0, the next element should be 1, and so forth. Use a variable to keep track of how many consecutive 0s have been stored; when the count reaches N, it’s time to store 1.
R:
```C

```

15. Write a loop that prints all temperature readings stored in row i of the temperatures array (see Exercise 14). Use a pointer to visit each element of the row.
R:
```C

```