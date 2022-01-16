#include <stdlib.h>
#include "my.h"

char *my_strdup(char *src) {
    char *dest;
    int len = my_strlen(src);

    dest = malloc(len + 1);
    if (dest == NULL)
        return NULL;
    my_strcpy(dest, src);
    return dest;
}
