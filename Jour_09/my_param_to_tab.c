#include <stdlib.h>
#include "my.h"

struct s_stock_par *my_param_to_tab(int ac, char **av) {
    t_stock_par *p;
    int i = 0;

    p = malloc((ac + 1) * sizeof * p);
    my_memset(p, 0, (ac + 1) * sizeof *p);
    if (p == NULL)
        return NULL;
    while (i < ac) {
        p[i].size_param = my_strlen(av[i]);
        p[i].str = av[i];
        p[i].copy = my_strdup(av[i]);
        p[i].tab = my_str_to_wordtab(av[i]);
        i++;
    }
    p[i].str = 0;
    return p;
}
