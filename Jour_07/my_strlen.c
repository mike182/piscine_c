#include "my.h"

int my_strlen(char *str) {
    char *save = str;

    while (*str != '\0')
        str++;
    return str - save;
}
