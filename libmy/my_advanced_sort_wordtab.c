#include "my.h"

int my_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *)) {
    int size = 0;
    int i = 1;
    int j = 0;
    char *tmp;

    while (tab[size])
        size++;
    while (i < size) {
        j = 0;
        while (j < size - 1) {
            if (cmp(tab[j], tab[j + 1]) > 0) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
    return 0;
}
