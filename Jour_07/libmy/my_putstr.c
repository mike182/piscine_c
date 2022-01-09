#include "my.h"

int my_putstr(char *str) {
    while (*str != '\0')
        my_putchar(*str++);
    return 0;
}
