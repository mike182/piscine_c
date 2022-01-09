#include "my.h"

int my_swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
    return 0;
}
