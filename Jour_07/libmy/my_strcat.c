#include "my.h"

char *my_strcat(char *dest, char *src) {
    char *save = dest;

    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return save;
}
