#include "my.h"

#define ABS(x) (((x) < 0) ? -(x) : (x))

void my_put_nbr(int n) {
    if (n < 0)
        my_putchar('-');
    if (ABS(n) / 10 != 0)
        my_put_nbr(ABS(n) / 10);
    my_putchar(ABS(n) % 10 + '0');
    return;
}
