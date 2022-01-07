#include "my.h"

int is_upper(char c) {
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int my_str_isupper(char *str) {
    while (*str) {
        if (!is_upper(*str))
            return 0;
        str++;
    }
    return 1;
}
