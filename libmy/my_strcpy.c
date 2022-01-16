#include "my.h"

char *my_strcpy(char *dest, char *src) {
    return my_memcpy(dest, src, my_strlen(src) + 1);
}
