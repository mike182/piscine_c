#include "my.h"

void my_sort_int_tab(int *tab, int size) {
    int n = 1;
    int i = 0;

    while (n < size) {
        i = 0;
        while (i < size - 1) {
            if (tab[i] > tab[i + 1])
                my_swap(&tab[i], &tab[i + 1]);
            i++;
        }
        n++;
    }
    return;
}
