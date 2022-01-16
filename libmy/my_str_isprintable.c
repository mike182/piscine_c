#include "my.h"

int my_str_isprintable(char *str) {
    while (*str) {
        if (!is_printable(*str))
            return 0;
        str++;
    }
    return 1;
}
