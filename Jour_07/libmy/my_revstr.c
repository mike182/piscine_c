#include "my.h"

char *my_revstr(char *str) {
    int len = my_strlen(str);
    int i = 0;
    char tmp;

    while (i < len / 2) {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
        i++;
    }
    return str;
}
