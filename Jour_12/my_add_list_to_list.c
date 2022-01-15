#include <stdlib.h>
#include "my.h"

int my_add_list_to_list(t_list **begin1, t_list *begin2) {
    t_list *node;

    node = *begin1;
    while (node != NULL) {
        if (node->next == NULL) {
            node->next = begin2;
            break;
        }
        node = node->next;
    }
    return 0;
}
