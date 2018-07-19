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

int main()
{
    unsigned r = 1U - 2U;

    show_bytes((byte_pointer) &r, sizeof(unsigned));

    return 0;
}
