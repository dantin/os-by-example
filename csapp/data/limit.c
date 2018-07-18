// version 1.0 2018-07-18
#include <stdio.h>
// Dash said in <stdint.h> but actually it is in <inttypes.h>
/*#include <stdint.h>*/
#include <inttypes.h>

int main()
{
    printf("wide = %d\n", 8);
    printf("signed,   min = %d, max = %d\n", INT8_MIN, INT8_MAX);
    printf("unsigned, min = %u, max = %u\n", 0U, UINT8_MAX);

    printf("wide = %d\n", 16);
    printf("signed,   min = %d, max = %d\n", INT16_MIN, INT16_MAX);
    printf("unsigned, min = %u, max = %u\n", 0U, UINT16_MAX);

    printf("wide = %d\n", 32);
    printf("signed,   min = %d, max = %d\n", INT32_MIN, INT32_MAX);
    printf("unsigned, min = %u, max = %u\n", 0U, UINT32_MAX);

    printf("wide = %d\n", 64);
    printf("signed,   min = %" PRId64 ", max = %" PRId64 "\n", INT64_MIN, INT64_MAX);
    printf("unsigned, min = %" PRIu64 ", max = %" PRIu64 "\n", 0ULL, UINT64_MAX);

    return 0;
}
