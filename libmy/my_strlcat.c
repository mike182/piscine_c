#include "my.h"

int my_strlcat(char *dest, char *src, int size) {
    char *dest_ptr = dest;
    char *src_ptr = src;
    int n = size;

    while (n-- > 0 && *dest_ptr != '\0')
        dest_ptr++;
    n = size - (dest_ptr - dest);
    if (n == 0)
        return (dest_ptr - dest) + my_strlen(src);
    while (n > 1 && *src_ptr != '\0') {
        *dest_ptr++ = *src++;
        n--;
    }
    *dest_ptr = '\0';
    return my_strlen(dest) + (src_ptr - src);
}
