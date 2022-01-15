#include <stdlib.h>
#include "my.h"

int my_put_elem_in_sort_list(t_list **begin, void *data, int (*cmp)()) {
    t_list *node;

    node = malloc(sizeof(t_list));
    if (node == NULL)
        return 0;
    node->data = data;
    node->next = *begin;
    *begin = node;
    my_sort_list(begin, cmp);
    return 0;
}
