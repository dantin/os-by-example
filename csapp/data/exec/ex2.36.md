// version 1.0 2018-07-20

```
int tmul_ok(int32_t x, int32_t y)
{
    int64_t p = (int64_t) x * y;

    return p == (int32_t) p;
}
```
