#include "my.h"

int my_strnlen(char *str, int n) {
    char *save = str;

    while (n-- > 0 && *str != '\0')
        str++;
    return str - save;
}
