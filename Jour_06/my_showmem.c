#include "my.h"

#define BASE 16
#define ADDR_SIZE 8
#define LINE_SIZE 16

int is_printable(char c) {
    return (c >= 32 && c != 127) ? 1 : 0;
}

void show_addr(int needle) {
    unsigned int n = 0x10000000;

    while (n > (unsigned int)needle) {
        my_putchar('0');
        n >>= 4;
    }
    if (needle)
        my_putnbr_base(needle, "0123456789abcdef");
    return ;
}

void show_content(char *str, int needle, int size) {
    int tmp = 0;
    int i = 0;

    while (i < LINE_SIZE) {
        if (i % 4 == 0)
            my_putchar(' ');
        if (needle + i < size) {
            tmp = *str & 0x000000ff;
            if (tmp < BASE)
                my_putchar('0');
            my_putnbr_base(tmp, "0123456789abcdef");
        }
        else
            my_putstr("  ");
        str++;
        i++;
    }
    return ;
}

void show_printable(char *str, int needle, int size) {
    int i = 0;

    while (i < LINE_SIZE) {
        if (i + needle < size) {
            if (is_printable(*str))
                my_putchar(*str);
            else
                my_putchar('.');
        }
        else
            my_putchar(' ');
        str++;
        i++;
    }
    return ;
}

int my_showmem(char *str, int size) {
    int i = 0;

    while (i < size) {
        show_addr(i);
        my_putstr(": ");
        show_content(str, i, size);
        my_putstr("  ");
        show_printable(str, i, size);
        my_putstr("\n");
        i += LINE_SIZE;
        str += LINE_SIZE;
    }
    return 0;
}
