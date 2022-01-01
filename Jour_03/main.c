#include <stdio.h>
#include "my.h"

int main() {

#ifdef MY_AFF_ALPHA // Ex 01
    my_aff_alpha();
#endif

#ifdef MY_AFF_REVALPHA // Ex 02
    my_aff_revalpha();
#endif

#ifdef MY_AFF_CHIFFRE // Ex 03
    my_aff_chiffre();
#endif

#ifdef MY_ISNEG // Ex 04
    my_isneg(-1);
    printf("\n");
    my_isneg(0);
    printf("\n");
    my_isneg(1);
#endif

#ifdef MY_AFF_COMB // Ex 05
    my_aff_comb();
#endif

#ifdef MY_AFF_COMB2 // Ex 06
    my_aff_comb2();
#endif

#ifdef MY_PUT_NBR // Ex 07
    my_put_nbr(42);
    printf("\n");
    my_put_nbr(0);
    printf("\n");
    my_put_nbr(-42);
    printf("\n");
    my_put_nbr(214783647);
    printf("\n");
    my_put_nbr(-214783648);
#endif

#ifdef MY_AFF_COMBN // Ex 05
    my_aff_combn(1);
    printf("\n");
    my_aff_combn(2);
    printf("\n");
    my_aff_combn(3);
    printf("\n");
    my_aff_combn(7);
    printf("\n");
    my_aff_combn(8);
    printf("\n");
    my_aff_combn(9);
    printf("\n");
    my_aff_combn(10);
#endif

    return 0;
}
