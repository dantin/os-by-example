// version 1.0 2018-07-19

#### A

w | fun1(w) | fun2(w)
---|---|---
0x00000076 | 0x00000076 | 0x00000076
0x87654321 | 0x00000021 | 0x00000021
0x000000C9 | 0x000000C9 | 0xFFFFFFC9
0xEDCBA987 | 0x00000087 | 0xFFFFFF87

#### B

```
int fun1(unsigned word)
{
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int) word << 24) >> 24;
}
```

The bit operation in fun1 is based on unsigned int, whereas the counterpart in fun2 is based on signed int.

