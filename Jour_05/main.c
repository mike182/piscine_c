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

    return 0;
}
