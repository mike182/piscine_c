#include "my.h"

int is_big_endian(void) {
    unsigned int i = 0x01234567;

    return ((char *) &i)[0] == 0x01;
}
