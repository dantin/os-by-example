// version 1.0 2018-07-17
#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m)
{
    return x | m;
}

int bic(int x, int m)
{
    return x & (~m);
}

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y)
{
    int result = bis(x, y);
    return result;
}

/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y)
{
    int result = bis(bic(x, y), bic(y, x));
    return result;
}

/* Compute x&y using only calls to functions bis and bic */
int bool_and(int x, int y)
{
    int result = bic(x, ~y);
    return result;
}

int main()
{
    int x = 130814;
    int y = 850724;

    show_int(x);
    show_int(y);
    show_int(bool_or(x, y));
    show_int(x|y);
    show_int(bool_xor(x, y));
    show_int(x^y);

    return 0;
}
