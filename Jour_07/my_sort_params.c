#include "my.h"

void sort_arg(char **t, int size) {
    int n = 0;
    int i = 0;

    while (n < size) {
        i = 0;
        while (i < size - 1) {
            if (my_strcmp(t[i], t[i + 1]) > 0)
                my_swap((int *)&t[i], (int *)&t[i + 1]);
            i++;
        }

        n++;
    }
}

int main(int argc, char *argv[]) {
    int i = 0;

    sort_arg(argv, argc);
    while (i < argc) {
        my_putstr(argv[i++]);
        my_putchar('\n');
    }
    return 0;
}
