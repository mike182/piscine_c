#include "my.h"

void *my_memcpy(void *dest, void *src, int len) {
    unsigned char *dest_ptr = (unsigned char *)dest;
    unsigned char *src_ptr = (unsigned char *)src;

    while (len-- > 0)
        *dest_ptr++ = *src_ptr++;
    return dest;
}
