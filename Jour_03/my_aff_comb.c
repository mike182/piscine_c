#include "my.h"

int my_aff_comb() {
    int a = '0';
    int b = '0';
    int c = '0';

    while (a <= '7') {
        while (b <= '8') {
            while (c <= '9') {
                if (a != b && b != c && a != c) {
                    my_putchar(a);
                    my_putchar(b);
                    my_putchar(c);
                    if (a == '7' && b == '8' && c == '9') {
                    }
                    else {
                        my_putchar(',');
                        my_putchar(' ');
                    }
                }
                c++;
            }
            c = b + 1;
            b++;
        }
        b = a + 1;
        a++;
    }
    return 0;
}
