#include "my.h"

int my_aff_combn(int n) {
    char buf[n];
    int i = 0;

    while (i < n) {
        buf[i] = n - i - 1;
        i++;
    }

    while (1) {
        i = n-1;
        while (i >= 0) {
            my_put_nbr(buf[i]);
            i--;
        }
        i = 0;
        if (buf[i]++ < 9) {
            my_putchar(',');
            my_putchar(' ');
            continue;
        }
        while (buf[i] >= 9 - i) {
            i++;
            if (i >= n)
                return 0;
        }
        buf[i]++;
        while (i >= 0) {
            buf[i - 1] = buf[i] + 1;
            i--;
        }
        my_putchar(',');
        my_putchar(' ');
    }
    return 0;
}
