// version 1.0 2018-07-18
#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++) {
        printf(" %.2X", start[i]);
    }
    printf("\n");
}

void show_char(char x)
{
    show_bytes((byte_pointer) &x, sizeof(char));
}

int main()
{
    char bytes[] = {0xC3, 0x75, 0x87, 0x66};

    int size = sizeof(bytes) / sizeof(char);
    for (int i = 0; i < size; i++) {
        printf("------------------\n");

        char b = bytes[i];
        unsigned char u = (unsigned char) bytes[i];

        show_char(b);
        show_char(b<<3);
        show_char(u>>2);
        show_char(b>>2);
    }

    return 0;
}
