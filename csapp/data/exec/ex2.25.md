// version 1.0 2018-07-19

```
/* WARNING: This is buggy code */
float sum_elements(float a[], unsigned length)
{
    int i;
    float result = 0;

    for (i = 0; i <= length-1; i++)
        result += a[i];

    return result;
}
```

if `length = 0`, `length - 1 = 0xFFFFFFFF`, ant `a[i]` will access invalid address.

How to fix.


```
float sum_elements(float a[], int length)
{
    int i;
    float result = 0;

    for (i = 0; i <= length-1; i++)
        result += a[i];

    return result;
}
```

