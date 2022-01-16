#include "my.h"

int my_str_isalpha(char *str) {
    while (*str) {
        if (!is_alpha(*str))
            return 0;
        str++;
    }
    return 1;
}
