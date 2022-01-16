#include "my.h"

void my_swapc(char *a, char *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return;
}
