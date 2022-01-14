#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

int main(void) {

#ifdef DOOP // Ex 02
    // main in do-op.c
#endif

#ifdef MY_SORT_WORDTAB // Ex 03
    char **s;

    s = my_str_to_wordtab("alors tu va bien? 123fag");
    my_show_wordtab(s);
    printf("---\n");
    my_sort_wordtab(s);
    my_show_wordtab(s);

    for (int i = 0; s[i]; i++)
        free(s[i]);
    free(s);
#endif

#ifdef MY_ADVANCED_SORT_WORDTAB // Ex 04
    char **s;

    s = my_str_to_wordtab("alors tu va bien? 123fag");
    my_show_wordtab(s);
    printf("---\n");
    my_advanced_sort_wordtab(s, my_strcmp);
    my_show_wordtab(s);

    for (int i = 0; s[i]; i++)
        free(s[i]);
    free(s);
#endif

    return 0;
}
