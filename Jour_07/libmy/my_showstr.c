#include "my.h"

int my_showstr(char *str) {
    while (*str) {
        if (is_printable(*str))
            my_putchar(*str);
        else {
            my_putchar('\\');
            if (*str < 10 || (*str >= 10 && *str <= 16))
                my_putchar('0');
            my_putnbr_base(*str, "0123456789abcdef");
        }
        str++;
    }
    return 0;
}
