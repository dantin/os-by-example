// version 1.0 2018-07-20

Proof:

For 1.

`x = 0` is always right.

For 2.

Suppose `p` is the multiply result of `x` and `y`.

```
p = x *<t> y

let

q = p / x

x * y = p + t * pow(2, w)

and

p = x * q + r, |r| < |x|

x * y = p + t * pow(2, w)
      = x * q + r + t * pow(2, w)
```

if `q == y`, then `r = 0, t = 0`

