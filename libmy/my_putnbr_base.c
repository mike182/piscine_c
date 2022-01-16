#include "my.h"

#define ABS(x) (((x) < 0) ? -(x) : (x))

int my_putnbr_base(int nbr, char *base) {
    int ibase = my_strlen(base);

    if (nbr < 0)
        my_putchar('-');
    if (ABS(nbr) / ibase != 0)
        my_putnbr_base(ABS(nbr) / ibase, base);
    my_putchar(base[ABS(nbr) % ibase]);
    return nbr;
}
