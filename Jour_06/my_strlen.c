#include "my.h"

int my_strlen(char *str) {
    int i = 0;

    while (*str++)
        i++;
    return i;
}
