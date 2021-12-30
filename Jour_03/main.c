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

#ifdef MY_IS_NEG // Ex 04
    my_isneg(-1);
    my_isneg(0);
    my_isneg(1);
#endif

    return 0;
}
