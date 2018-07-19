// version 1.0 2018-07-17

#### A

first = last = k+1

#### B

`x`, `y` point to the same position.

That means

```
*y = *x ^ *y; // here *x = *y = 0;
*x = *x ^ *y; // *x = 0;
*y = *x ^ *y; // *y = 0;
```

#### C

```
void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt-1;
            first < last;
            first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}
```

