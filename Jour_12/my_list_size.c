#include <stdlib.h>
#include "my.h"

int my_list_size(t_list *begin) {
    t_list *node;
    int n = 0;

    node = begin;
    while (node != NULL) {
        node = node->next;
        n++;
    }
    return n;
}
