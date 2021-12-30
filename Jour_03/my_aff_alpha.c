#include "my.h"

int my_aff_alpha() {
    char c = 'a';

    while (c <= 'z')
        my_putchar(c++);
    return 0;
}
