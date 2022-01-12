#include <stdlib.h>
#include "my.h"

char *my_strndup(char *src, int n) {
    char *dest;
    int len = my_strnlen(src, n);

    dest = malloc(len + 1);
    if (dest == NULL)
        return NULL;
    dest[len] = '\0';
    my_strncpy(dest, src, len);
    return dest;
}
