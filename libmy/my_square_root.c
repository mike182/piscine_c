#include "my.h"

int my_square_root(int nb) {
    int root = nb / 2;

    while (root > 0) {
        if (root * root == nb)
            return root;
        root--;
    }
    return 0;
}
