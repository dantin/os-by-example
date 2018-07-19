// version 1.0 2018-07-19

```
y = TMin = -pow(2, w-1)
x = TMax = pow(2, w-1) - 1

x - y = TMax - Tmin
      = pow(2, w-1) - 1 - (-pow(2, w-1))
      = pow(2, w) - 1
      = -1

x - y is overflow.

tadd(x, -y) = tadd(x, y)

x + y is not overflow
```
