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

    return 0;
}
