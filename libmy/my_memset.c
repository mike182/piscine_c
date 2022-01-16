#include "my.h"

void *my_memset(void *dest, int value, int len) {
    unsigned char *ptr = (unsigned char *)dest;

    while (len-- > 0)
        *ptr++ = value;
    return dest;
}
