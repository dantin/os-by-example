// version 1.0 2018-07-20
#include <stdio.h>
#include <inttypes.h>

int tmul_ok(int32_t x, int32_t y)
{
    int64_t p = (int64_t) x * y;

    return p == (int32_t) p;
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
