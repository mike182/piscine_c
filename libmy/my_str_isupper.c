#include "my.h"

int my_str_isupper(char *str) {
    while (*str) {
        if (!is_upper(*str))
            return 0;
        str++;
    }
    return 1;
}
