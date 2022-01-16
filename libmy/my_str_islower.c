#include "my.h"

int my_str_islower(char *str) {
    while (*str) {
        if (!is_lower(*str))
            return 0;
        str++;
    }
    return 1;
}
