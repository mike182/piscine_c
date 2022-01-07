#include "my.h"

int is_num(char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int my_str_isnum(char *str) {
    while (*str) {
        if (!is_num(*str))
            return 0;
        str++;
    }
    return 1;
}
