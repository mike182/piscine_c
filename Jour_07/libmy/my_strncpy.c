#include "my.h"

char *my_strncpy(char *dest, char *src, int n) {
    int slen = my_strnlen(src, n);

    if (slen < n) {
        my_memcpy(dest, src, slen);
        my_memset(dest + slen, 0, n - slen);
    }
    else
        my_memcpy(dest, src, n);
    return dest;
}
