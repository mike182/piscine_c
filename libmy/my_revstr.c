#include "my.h"

char *my_revstr(char *str) {
    int len = my_strlen(str);
    int i = 0;

    while (i < len / 2) {
        my_swapc(&str[i], &str[len - i - 1]);
        i++;
    }
    return str;
}
