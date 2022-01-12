#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

int main(void) {

#ifdef MY_STRDUP // Ex 01
    char *str;

    str = my_strdup("This is OG bro!");
    printf("%s", str);
    free(str);
#endif

#ifdef CONVERT_BASE // Ex 02
    char *str1;
    char *str2;

    str1 = convert_base("1000", "0123456789abcdef", "0123456789");
    str2 = convert_base("-1000", "0123456789abcdef", "0123456789");
    printf("%s\n", str1);
    printf("%s", str2);
    free(str1);
    free(str2);
#endif

#ifdef SUM_PARAMS // Ex 03
    // main in sum_params.c
#endif

#ifdef MY_STR_TO_WORDTAB // Ex 04
    char **s;

    s = my_str_to_wordtab("alors tu va bien? 123fag");
    for (int i = 0; s[i] ; i++) {
        my_putstr(s[i]);
        my_putstr("\n");
        free(s[i]);
    }
    free(s);
#endif

#ifdef MY_SHOW_WORDTAB // Ex 05
    char **s;

    s = my_str_to_wordtab("alors tu va bien? 123fag");
    my_show_wordtab(s);

    for (int i = 0; s[i]; i++)
        free(s[i]);
    free(s);
#endif

    return 0;
}
