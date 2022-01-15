#include <stdlib.h>
#include "my.h"

int my_apply_on_list(t_list *begin, int (*f)()) {
    t_list *node;

    node = begin;
    while (node != NULL) {
        (*f)(node->data);
        node = node->next;
    }
    return 0;
}
