// version 1.0 2018-07-19
#include <stdio.h>
#include <inttypes.h>

/* Determine whether arguments can be multiplied without overflow */
int tmul_ok(int x, int y)
{
    int p = x*y;
    /* Either x is zero, or dividing p by x gives y */
    return !x || p/x == y;
}

int main()
{
    int x, y, m;

    x = 1;
    y = -1;
    m = x*y;
    printf("%d * %d = %d, %s\n", x, y, m, tmul_ok(x, y) ? "ok" : "overflow");

    x = INT32_MAX;
    y = INT32_MAX;
    m = x*y;
    printf("%d * %d = %d, %s\n", x, y, m, tmul_ok(x, y) ? "ok" : "overflow");

    return 0;
}
