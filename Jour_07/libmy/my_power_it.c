#include "my.h"

int my_power_it(int nb, int power) {
    int n = 1;

    if (power == 0)
        return 1;
    if (power < 0)
        return 0;
    while (power > 0) {
        n = n * nb;
        power--;
    }
    return n;
 }
