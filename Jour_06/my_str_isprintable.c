#include "my.h"

int is_printable(char c) {
    return (c >= 32 && c != 127) ? 1 : 0;
}

int my_str_isprintable(char *str) {
    while (*str) {
        if (!is_printable(*str))
            return 0;
        str++;
    }
    return 1;
}
