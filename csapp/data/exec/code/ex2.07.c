// version 1.0 2018-07-17
#include <stdio.h>
#include <string.h>

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
    const char *s = "abcdef";

    show_bytes((byte_pointer) s, strlen(s));

    return 0;
}
