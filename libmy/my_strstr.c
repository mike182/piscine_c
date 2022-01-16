#include <unistd.h>

#include "my.h"

char *my_strstr(char *str, char *to_find) {
    char *parse = to_find;

    while (*str) {
        if (*str == *parse)
            str++, parse++;
        else {
            str = str - (parse - to_find) + 1;
            parse = to_find;
        }
        if (*parse == '\0') {
            str = str - (parse - to_find);
            return str;
        }
    }
    return NULL;
}

