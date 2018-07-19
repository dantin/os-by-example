// version 1.0 2018-07-19

```
/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y)
{
    int s = x + y;
    return !((x > 0 && y > 0 && s <= 0) ||
        (x < 0 && y < 0 && s >= 0));
}
```

