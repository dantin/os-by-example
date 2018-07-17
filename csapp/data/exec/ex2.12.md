// version 1.0 2018-07-17

#### A

```
    return x & 0xFF;
```

#### B

```
    unsigned int u = (unsigned int) x;
    int r = 0;
    int i = 0;
    while (u != 0) {
        int e = u & 0xFF;
        if (i == 0) {
            r |= e << i;
        } else {
            r |= (~e & 0xFF) << i;
        }
        i += 8;
        u >>= 8;
    }

    return r;
```

#### C

```
    unsigned int u = (unsigned int) x;
    int r = 0;
    int i = 0;
    while (u != 0) {
        int e = u & 0xFF;
        if (i == 0) {
            r |= 0xFF;
        } else {
            r |= e << i;
        }
        i += 8;
        u >>= 8;
    }
    return r;
```
