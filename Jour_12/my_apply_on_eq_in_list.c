#include <stdlib.h>
#include "my.h"

int my_apply_on_eq_in_list(t_list *begin, int (*f)(), void *data_ref, int (*cmp)()) {
    t_list *node;

    node = begin;
    while (node != NULL) {
        if ((*cmp)(node->data, data_ref) == 0)
            (*f)(node->data);
        node = node->next;
    }
    return 0;
}
