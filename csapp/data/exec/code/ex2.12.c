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

int a(int x)
{
    return x & 0xFF;
}

int b(int x)
{
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
}

int c(int x)
{
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
}

int main()
{
    int x = 0x87654321;

    show_int(x);
    show_int(a(x));
    show_int(b(x));
    show_int(c(x));

    return 0;
}
