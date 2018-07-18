// version 1.0 2018-07-18

Original Values

```
 x = 0x66 = 0b01100110
 y = 0x39 = 0b00111001
~x = 0x99 = 0b10011001
~y = 0xc6 = 0b11000110
!x = 0x00 = 0b00000000
!y = 0x00 = 0b00000000
```

Bitset Operations

```
 x &  y = 0x20 = 0b00100000
 x |  y = 0x7f = 0b01111111
~x | ~y = 0xdf = 0b11011111
 x & !y = 0x00 = 0b00000000
```

Relatoinal Operations

```
  x &&  y = 0x01
  x ||  y = 0x01
 !x || !y = 0x00
  x && ~y = 0x00
 ```
