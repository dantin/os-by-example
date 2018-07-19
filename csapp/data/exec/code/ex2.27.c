// version 1.0 2018-07-19
#include <stdio.h>
#include <inttypes.h>

/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y)
{
    unsigned s = x + y;
    return (x > s) || (y > s);
}

int main()
{
    unsigned x = 1U, y = 1U;

    printf("%u + %u, %s\n", x, y, uadd_ok(x, y) ? "overflow" : "ok");

    x = UINT32_MAX - 1;
    y = UINT32_MAX - 1;
    printf("%u + %u, %s\n", x, y, uadd_ok(x, y) ? "overflow" : "ok");

    return 0;
}
