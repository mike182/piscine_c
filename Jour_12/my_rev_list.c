#include <stdlib.h>
#include "my.h"

int my_rev_list(t_list **begin) {
    t_list *prev = NULL;
    t_list *next = NULL;
    t_list *current = *begin;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *begin = prev;
    return 0;
}
