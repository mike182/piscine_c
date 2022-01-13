#include "my.h"

int my_show_tab(struct s_stock_par *par) {
    int i = 0;

    while (par[i].str) {
        my_putstr(par[i].copy);
        my_putstr("\n");
        my_put_nbr(par[i].size_param);
        my_putstr("\n");
        my_show_wordtab(par[i].tab);
        my_putstr("\n");
        i++;
    }
    return 0;
}
