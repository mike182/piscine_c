#include <stdlib.h>
#include "my.h"

int my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)()) {
    t_list *prev = NULL;
    t_list *node = *begin;

    while (node != NULL && ((*cmp)(node->data, data_ref) == 0)) {
        (*begin) = node->next;
        free(node);
        node = *begin;
    }
    while (node != NULL) {
        while (node != NULL && ((*cmp)(node->data, data_ref) != 0)) {
            prev = node;
            node = node->next;
        }
        if (node == NULL)
            return 0;
        prev->next = node->next;
        free(node);
        node = prev->next;
    }
    return 0;
}
