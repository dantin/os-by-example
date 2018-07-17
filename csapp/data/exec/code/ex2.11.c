// version 1.0 2018-07-17
#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt-1;
            first < last;
            first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

void print_array(int a[], int len)
{
    int i;
    for (i = 0; i < len; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    int len = sizeof(a) / sizeof(int);
    print_array(a, len);
    reverse_array(a, len);
    print_array(a, len);

    return 0;
}
