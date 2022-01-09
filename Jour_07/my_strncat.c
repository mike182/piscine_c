#include "my.h"

char *my_strncat(char *dest, char *src, int nb) {
    int dlen = my_strlen(dest);
    int i = 0;

    while (i < nb && src[i] != '\0') {
        dest[dlen + i] = src[i];
        i++;
    }
    dest[dlen + i] = '\0';
    return dest;
}
