#include "my.h"

int is_lower(char c) {
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

int my_str_islower(char *str) {
    while (*str) {
        if (!is_lower(*str))
            return 0;
        str++;
    }
    return 1;
}
