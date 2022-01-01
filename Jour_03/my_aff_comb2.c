#include "my.h"

int my_aff_comb2() {
    int a = 0;
    int b = 0;

    while (a <= 98) {
        while (b <= 99) {
            if (a != b) {
                my_putchar(a / 10 + '0');
                my_putchar(a % 10 + '0');
                my_putchar(' ');
                my_putchar(b / 10 + '0');
                my_putchar(b % 10 + '0');
                if (a == 98 && b == 99) {
                }
                else {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
            b++;
        }
        b = a + 1;
        a++;
    }
    return 0;
}
