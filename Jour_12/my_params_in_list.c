#include <stdlib.h>
#include "my.h"

t_list *my_params_in_list(int ac, char **av) {
    t_list *list = NULL;
    t_list *tmp = NULL;
    int i = 0;

    while (ac-- > 0) {
        list = malloc(sizeof(t_list));
        if (list == NULL)
            return NULL;
        list->data = av[i++];
        list->next = tmp;
        tmp = list;
    }
    return list;
}
