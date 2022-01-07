#include "my.h"

int is_upper(char c) {
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int is_lower(char c) {
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

int is_alpha(char c) {
    return is_upper(c) || is_lower(c) ? 1 : 0;
}

int my_str_isalpha(char *str) {
    while (*str) {
        if (!is_alpha(*str))
            return 0;
        str++;
    }
    return 1;
}
