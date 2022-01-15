#include <stdlib.h>
#include "my.h"

void *my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)()) {
    t_list *node;

    node = begin;
    while (node != NULL) {
        if ((*cmp)(node->data, data_ref) == 0)
            return node->data;
        node = node->next;
    }
    return NULL;
}
