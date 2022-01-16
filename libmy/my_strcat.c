#include "my.h"

char *my_strcat(char *dest, char *src) {
    my_strcpy(dest + my_strlen(dest), src);
    return dest;
}
