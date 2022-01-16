#include "my.h"

int my_find_prime_sup(int nb) {
    int n = nb;

    while (!my_is_prime(n))
        n++;
    return my_is_prime(n) ? n : nb;
}
