// version 1.0 2018-07-19

#### A

Error happens when `strlen(s) < strlen(t)`.

#### B

unsignd is always above 0.

#### C

cast to int.

```
int strlonger(char *s, char *t)
{
    return (int) strlen(s) - (int) strlen(t) > 0;
}
```

