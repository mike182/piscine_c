#include "my.h"

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
