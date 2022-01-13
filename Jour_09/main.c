#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

#ifdef IS_BIG_ENDIAN // Ex 05
#pragma clang diagnostic ignored "-Wunused-parameter"
#endif

int main(int argc, char *argv[]) {

#ifdef MY_PARAM_TO_TAB // Ex 03
    t_stock_par *p;

    p = my_param_to_tab(argc, argv);

    // show & free
    for (int i = 0; p[i].str ; i++) {
        printf("size=%d\n", p[i].size_param);
        printf("str=%s\n", p[i].str);
        printf("copy=%s\n", p[i].copy);
        for (int j = 0; p[i].tab[j]; j++) {
            printf("tab=%s\n", p[i].tab[j]);
            free(p[i].tab[j]);
        }
        free(p[i].tab);
        free(p[i].copy);
        printf("\n");
    }
    free(p);
#endif

#ifdef MY_SHOW_TAB // Ex 04
    t_stock_par *p;

    p = my_param_to_tab(argc, argv);
    my_show_tab(p);

    // free
    for (int i = 0; p[i].str ; i++) {
        for (int j = 0; p[i].tab[j]; j++)
            free(p[i].tab[j]);
        free(p[i].tab);
        free(p[i].copy);
    }
    free(p);
#endif

#ifdef IS_BIG_ENDIAN // Ex 05
    // 0x01234567
    // |01|23|45|57| Big Endian
    // |67|45|23|01| Little Endian
    printf("%d", is_big_endian());
#endif

    return 0;
}
