#include "my.h"

int my_factorielle_rec(int nb) {
    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    return nb * my_factorielle_rec(nb - 1);
}
