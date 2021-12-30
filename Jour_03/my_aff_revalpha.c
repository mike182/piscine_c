#include "my.h"

int my_aff_revalpha() {
    char c = 'z';

    while (c >= 'a')
        my_putchar(c--);
    return 0;
}
