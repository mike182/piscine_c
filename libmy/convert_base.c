#include <stdlib.h>
#include "my.h"

char *convert_base(char *nbr, char *base_from, char *base_to) {
    char *s;
    int n = 0;
    int i = 0;
    int ibase = my_strlen(base_to);

    n = my_getnbr_base(nbr, base_from);
    s = malloc(32 * sizeof(*s));
    if (s == NULL)
        return NULL;
    my_memset(s, 0, 32);
    while (ABS(n) / ibase != 0) {
        s[i] = base_to[ABS(n) % ibase];
        n = ABS(n) / ibase;
        i++;
    }
    s[i] = base_to[ABS(n) % ibase];
    if (*nbr == '-')
        s[i + 1] = '-';
    my_revstr(s);
    return s;
}
