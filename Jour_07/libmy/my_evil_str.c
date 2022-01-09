#include "my.h"

void AddSwap(char *a, char *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

char *my_evil_str(char *str) {
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        AddSwap(&str[i], &str[j]);
        i++;
        j--;
    }
    return str;
}
