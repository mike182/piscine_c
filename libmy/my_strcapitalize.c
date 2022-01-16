#include "my.h"

char *my_strcapitalize(char *str) {
    int flag = 0;
    int i = 0;

    while (str[i]) {
        if (!is_alpha(str[i]))
            flag = -1;
        if (is_lower(str[i]) && flag == 0)
                str[i] -= 'a' - 'A';
        i++;
        flag++;
    }
    return str;
}
