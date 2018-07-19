// version 1.0 2018-07-19
#include <stdio.h>
#include <inttypes.h>

/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y)
{
    int s = x + y;
    return !((x > 0 && y > 0 && s <= 0) ||
        (x < 0 && y < 0 && s >= 0));
}

int main()
{
    int x, y, s;

    /*negetive overflow*/
    x = INT32_MIN + 1;
    y = INT32_MIN + 1;
    s = x + y;
    printf("%d + %d = %d, %s\n", x, y, s, tadd_ok(x, y) ? "ok" : "overflow");

    /*case 2*/
    x = -1;
    y = -1;
    s = x + y;
    printf("%d + %d = %d, %s\n", x, y, s, tadd_ok(x, y) ? "ok" : "overflow");

    /*case 3*/
    x = 1;
    y = 1;
    s = x + y;
    printf("%d + %d = %d, %s\n", x, y, s, tadd_ok(x, y) ? "ok" : "overflow");

    /*positive overflow*/
    x = INT32_MAX - 1;
    y = INT32_MAX - 1;
    s = x + y;
    printf("%d + %d = %d, %s\n", x, y, s, tadd_ok(x, y) ? "ok" : "overflow");

    return 0;
}
