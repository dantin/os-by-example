// version 1.0 2018-07-18
#include <stdio.h>

void i2u()
{
    short int       v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);
}

void u2i()
{
    unsigned  u = 4294967295u; /* UMax */
    int      tu = (int) u;
    printf("u = %u, tu = %d\n", u, tu);
}

int main()
{
    i2u();
    u2i();

    return 0;
}
