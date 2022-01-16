#include "my.h"

int my_show_wordtab(char **tab) {
    int i = 0;

    while (tab[i]) {
        my_putstr(tab[i++]);
        my_putstr("\n");
    }
    return 0;
}
