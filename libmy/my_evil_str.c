#include "my.h"

char *my_evil_str(char *str) {
    int left = 0;
    int right = my_strlen(str) - 1;

    while (left < right)
        my_swapc(&str[left++], &str[right--]);
    return str;
}
