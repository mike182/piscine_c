#include <stdio.h>
#include "my.h"

int main() {

#ifdef MY_SWAP // Ex 01
    int a = 0;
    int b = 1;

    printf("a = %i, b = %i\n", a, b);
    my_swap(&a, &b);
    printf("a = %i, b = %i\n", a, b);
#endif

#ifdef MY_PUTSTR // Ex 02
    char str1[] = "Who am I ?";

    my_putstr(str1);
#endif

#ifdef MY_STRLEN // Ex 03
    char str2[] = "Who am I ?";

    printf("%i", my_strlen(str2));
#endif

#ifdef MY_EVIL_STR // Ex 03 bis
    char str3[] = "Who am I ?";

    printf("%s", my_evil_str(str3));
#endif

#ifdef MY_GETNBR // Ex 04
    printf("%i\n", my_getnbr("+---+--++---+---+---+-42")); // -42
    printf("%i\n", my_getnbr("42a43")); // 42
    printf("%i\n", my_getnbr("11000000000000000000000042")); // 0
    printf("%i", my_getnbr("-1000000000000000000000042")); // 0
#endif

#ifdef MY_SORT_INT_TAB // Ex 05
    int t[] = {4, 2, 1, -5, 0, 20, 5, 6, -3, -2, 9, 3, -20};
    int tsize = (unsigned int) sizeof(t)/sizeof(int);
    int i = 0;

    while (i < tsize) {
        printf ("%i%s", t[i], (i+1 != tsize) ? ", " : "\n");
        i++;
    }
    my_sort_int_tab(t, tsize);
    i = 0;
    while (i < tsize) {
        printf ("%i%s", t[i], (i+1 != tsize) ? ", " : "\n");
        i++;
    }
#endif

    return 0;
}
