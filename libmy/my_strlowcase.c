#include "my.h"

char *my_strlowcase(char *str) {
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
        i++;
    }
    return str;
}
