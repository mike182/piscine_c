#include "my.h"

void xorSwap(int *a, int *b) {
    if (a != b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

void my_sort_int_tab(int *tab, int size) {
    int i = 1;
    int j = 0;

    while (i < size) {
        j = 0;
        while (j < size - 1) {
            if (tab[j] > tab[j+1])
                xorSwap(&tab[j], &tab[j+1]);
            j++;
        }
        i++;
    }
    return;
}
