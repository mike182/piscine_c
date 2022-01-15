#include <stdlib.h>
#include "my.h"

t_list *my_find_node_eq_in_list(t_list *begin, void *data_ref, int (*cmp)()) {
    t_list *node;

    node = begin;
    while (node != NULL) {
        if ((*cmp)(node->data, data_ref) == 0)
            return node;
        node = node->next;
    }
    return NULL;
}
