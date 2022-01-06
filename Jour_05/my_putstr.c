#include "my.h"

int my_putstr(char *str) {
    while (*str)
        my_putchar(*str++);
    return 0;
}
