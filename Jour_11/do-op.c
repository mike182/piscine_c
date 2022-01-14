#include <stdlib.h>
#include "my.h"

#define N_OP 5

int op_add(int x, int y) {
    return x + y;
}

int op_min(int x, int y) {
    return x - y;
}

int op_mult(int x, int y) {
    return x * y;
}

int op_div(int x, int y) {
    return x / y;
}

int op_mod(int x, int y) {
    return x % y;
}

int error_check(int ac, char *av[]) {
    char op = 0;
    int denom = 0;

    if (ac != 4) // check arg number
        return EXIT_FAILURE;
    denom = my_getnbr(av[3]);
    op = av[2][0];
    if (denom == 0 && op == '/') { // check div by 0
        my_putstr("Stop : division by zero");
        return EXIT_FAILURE;
    }
    if (denom == 0 && op == '%') { // check div by 0
        my_putstr("Stop : modulo by zero");
        return EXIT_FAILURE;
    }
    if (my_strstr("+-*/%", av[2])) // check op "+-*/%"
        return EXIT_SUCCESS;
    my_putstr("0");
    return EXIT_FAILURE;
}

int main(int argc, char * argv[]) {
    int (*fp[5])(int x, int y) = {op_add, op_min, op_mult, op_div, op_mod};
    int i = 0;

    if (error_check(argc, argv))
        return EXIT_FAILURE;
    while (i < N_OP) {
        if (argv[2][0] == "+-*/%"[i])
            my_put_nbr(fp[i](my_getnbr(argv[1]), my_getnbr(argv[3])));
        i++;
    }
    return EXIT_SUCCESS;
}
