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

char *my_strcapitalize(char *str) {
    int needle = 0;
    int i = 0;

    while (str[i]) {
        if (!is_alpha(str[i]))
            needle = -1;
        if (is_lower(str[i]) && needle == 0)
                str[i] -= 'a' - 'A';
        i++;
        needle++;
    }
    return str;
}
