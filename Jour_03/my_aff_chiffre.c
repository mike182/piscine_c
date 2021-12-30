#include "my.h"

int my_aff_chiffre() {
    char c = '0';

    while (c <= '9')
        my_putchar(c++);
    return 0;
}
