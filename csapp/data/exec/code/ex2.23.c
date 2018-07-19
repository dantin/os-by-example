// version 1.0 2018-07-19
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

int fun1(unsigned word)
{
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int) word << 24) >> 24;
}

int main()
{
    unsigned a[] = {0x00000076, 0x87654321, 0x000000C9, 0xEDCBA987};

    int len = sizeof(a) / sizeof(unsigned);
    for (int i = 0; i < len; i++) {
        printf("-----------------\n");
        unsigned w = a[i];

        int w1 = fun1(w);
        show_bytes((byte_pointer) &w1, sizeof(int));
        int w2 = fun2(w);
        show_bytes((byte_pointer) &w2, sizeof(int));
    }

    return 0;
}
