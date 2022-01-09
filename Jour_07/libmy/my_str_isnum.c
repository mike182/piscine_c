#include "my.h"

int my_str_isnum(char *str) {
    while (*str) {
        if (!is_num(*str))
            return 0;
        str++;
    }
    return 1;
}
