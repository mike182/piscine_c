#include "my.h"

int my_is_prime(int nb) {
    int n = 2;

    if (nb == 0 || nb == 1)
        return 0;
    while (n < nb) {
        if (nb % n == 0)
            return 0;
        n++;
    }
    return 1;
}
