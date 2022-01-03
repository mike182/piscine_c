#include "my.h"

int my_getnbr(char *str) {
    int n = 0;
    int sign = 1;

    while (*str == '+' || *str == '-')
        if (*str++ == '-')
            sign = -sign;
    while (*str >= '0' && *str <= '9') {
        if ((n * 10 + *str - '0') / 10 != n)
            return 0;
        n = n * 10 + *str - '0';
        str++;
    }
    return n * sign;
}
