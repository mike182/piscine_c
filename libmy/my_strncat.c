#include "my.h"

char *my_strncat(char *dest, char *src, int nb) {
    int dlen = my_strlen(dest);
    int slen = my_strlen(src);

    if (slen < nb)
        my_strcpy(dest + dlen, src);
    else {
        my_strncpy(dest + dlen, src, nb);
        dest[dlen + nb] = '\0';
    }
    return dest;
}
