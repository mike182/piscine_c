#include "my.h"

int my_swap(int *a, int *b) {
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
    return 0;
}
