#include "my.h"

char *my_strupcase(char *str) {
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 'a' - 'A';
        i++;
    }
    return str;
}
