#include <stdlib.h>
#include "my.h"

int my_sort_list(t_list **begin, int (*cmp)()) {
    t_list *node;
    char *tmp;
    int loop = 0;

    do {
        loop = 0;
        node = *begin;
        while (node != NULL && node->next != NULL) {
            if ((*cmp)(node->data, node->next->data) > 0) {
                tmp = node->data;
                node->data = node->next->data;
                node->next->data = tmp;
                loop = 1;
            }
            node = node->next;
        }
    } while (loop);
    return 0;
}
