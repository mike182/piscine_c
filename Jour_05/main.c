#include <stdio.h>
#include "my.h"

int main() {

#ifdef MY_FACTORIELLE_IT // Ex 01
    printf("%i\n", my_factorielle_it(0));
    printf("%i\n", my_factorielle_it(1));
    printf("%i\n", my_factorielle_it(2));
    printf("%i", my_factorielle_it(5));
#endif

#ifdef MY_FACTORIELLE_REC  // Ex 02
    printf("%i\n", my_factorielle_rec(0));
    printf("%i\n", my_factorielle_rec(1));
    printf("%i\n", my_factorielle_rec(2));
    printf("%i", my_factorielle_rec(5));
#endif

#ifdef MY_POWER_IT // Ex 03
    printf("%i\n", my_power_it(4, 4));
    printf("%i\n", my_power_it(3, 12));
    printf("%i\n", my_power_it(3, 5));
    printf("%i", my_power_it(23, 4));
#endif

#ifdef MY_POWER_REC // Ex 04
    printf("%i\n", my_power_rec(4, 4));
    printf("%i\n", my_power_rec(3, 12));
    printf("%i\n", my_power_rec(3, 5));
    printf("%i", my_power_rec(23, 4));
#endif

#ifdef MY_8R1 // Ex 05
    my_8r1();
#endif

#ifdef MY_8R2 // Ex 06
    my_8r2();
#endif

#ifdef MY_SQUARE_ROOT // Ex 07
    printf("%i\n", my_square_root(0));
    printf("%i\n", my_square_root(1));
    printf("%i\n", my_square_root(2));
    printf("%i\n", my_square_root(9));
    printf("%i\n", my_square_root(100));
    printf("%i", my_square_root(16000));
#endif

#ifdef MY_IS_PRIME // Ex 08
    printf("%i\n", my_is_prime(0));
    printf("%i\n", my_is_prime(1));
    printf("%i\n", my_is_prime(2));
    printf("%i\n", my_is_prime(3));
    printf("%i\n", my_is_prime(5));
    printf("%i\n", my_is_prime(7));
    printf("%i\n", my_is_prime(8));
    printf("%i\n", my_is_prime(17));
    printf("%i\n", my_is_prime(53));
    printf("%i", my_is_prime(97));
#endif

#ifdef MY_FIND_PRIME_SUP // Ex 09
    printf("%i\n", my_find_prime_sup(1));
    printf("%i\n", my_find_prime_sup(2));
    printf("%i\n", my_find_prime_sup(3));
    printf("%i\n", my_find_prime_sup(5));
    printf("%i\n", my_find_prime_sup(7));
    printf("%i\n", my_find_prime_sup(15));
    printf("%i\n", my_find_prime_sup(24));
    printf("%i\n", my_find_prime_sup(58));
    printf("%i\n", my_find_prime_sup(76));
    printf("%i\n", my_find_prime_sup(83));
    printf("%i\n", my_find_prime_sup(95));
    printf("%i", my_find_prime_sup(43));
#endif

    return 0;
}
