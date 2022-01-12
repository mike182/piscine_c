#include <stdlib.h>
#include "my.h"

char *my_strdup(char *src) {
    char *dest;

    dest = malloc((my_strlen(src) + 1) * sizeof(*dest));
    if (dest == NULL)
        return NULL;
    my_strcpy(dest, src);
    return dest;
}
