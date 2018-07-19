// version 1.0 2018-07-19

```
/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y)
{
    unsigned s = x + y;
    return (x > s) || (y > s);
}
```

