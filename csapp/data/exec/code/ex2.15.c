// version 1.0 2018-07-18
#include <stdio.h>

int eq(int x, int y)
{
    return !(x ^y);
}

int main()
{
    int x = 41, y = 41;

    printf("%d == %d returns %d\n", x, y, eq(x, y));
    printf("%d == %d returns %d\n", x, y, x == y);
}
