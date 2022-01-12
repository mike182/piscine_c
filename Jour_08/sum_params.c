#include <stdlib.h>
#include "my.h"

char *sum_params(int argc, char **argv) {
    char *s;
    int i = 0;
    int size = 0;

    while (i < argc)
        size += my_strlen(argv[i++]) + 1;
    s = malloc(size * sizeof(*s) + 1);
    if (s == NULL)
        return NULL;
    my_memset(s, 0, (size + 1) * sizeof(*s));
    i = 0;
    while (i < argc) {
        my_strcat(s, argv[i++]);
        if (i < argc)
            my_strcat(s, "\n");
    }
    return s;
}

int main(int argc, char *argv[]) {
    char *s;

    s = sum_params(argc, argv);
    my_putstr(s);
    free(s);
    return 0;
}
