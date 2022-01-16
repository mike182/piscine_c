#include "my.h"

int my_factorielle_it(int nb) {
    int n = 1;

    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    while (nb > 1)
        n *= nb--;
    return n;
}
