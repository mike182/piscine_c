#include "my.h"

int my_strncmp(char *s1, char *s2, int n) {
    char *parse = s1;

    while (*s1 && *s2 && s1 - parse < n) {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return 0;
}
