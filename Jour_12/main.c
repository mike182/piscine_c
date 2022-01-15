#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

void show_list(t_list *list) {
    t_list *tmp;

    tmp = list;
    while (tmp != NULL) {
        my_putstr(tmp->data);
        my_putstr("\n");
        tmp = tmp->next;
    }
    return;
}

void free_list(t_list *list) {
    t_list *tmp;

    while (list != NULL) {
        tmp = list;
        list = list->next;
        /* free(tmp->data); // node data */
        free(tmp); // node
    }
    free(list);
    return;
}

int dummy(void *data) {
    my_strupcase((char *)data);
    return 0;
}

int main(int ac, char *av[]) {

    // ./bin one two three

#ifdef MY_PARAMS_IN_LIST // Ex 01
    t_list *list;

    list = my_params_in_list(ac, av);
    show_list(list);
    free_list(list);
#endif

#ifdef MY_LIST_SIZE // Ex 02
    t_list *list;

    list = my_params_in_list(ac, av);
    printf("%d", my_list_size(list));
    free_list(list);
#endif

#ifdef MY_REV_LIST // Ex 03
    t_list *list;

    list = my_params_in_list(ac, av);
    my_rev_list(&list);
    show_list(list);
    free_list(list);
#endif

#ifdef MY_APPLY_ON_LIST // Ex 04
    t_list *list;

    list = my_params_in_list(ac, av);
    my_rev_list(&list);
    my_apply_on_list(list, dummy);
    show_list(list);
    free_list(list);
#endif

#ifdef MY_APPLY_ON_EQ_IN_LIST // Ex 05
    t_list *list;

    list = my_params_in_list(ac, av);
    my_rev_list(&list);
    my_apply_on_eq_in_list(list, dummy, "two", strcmp);
    show_list(list);
    free_list(list);
#endif

#ifdef MY_FIND_ELM_EQ_IN_LIST // Ex 06
    t_list *list;

    list = my_params_in_list(ac, av);
    my_rev_list(&list);
    my_putstr(my_find_elm_eq_in_list(list, "two", strcmp));
    free_list(list);
#endif

#ifdef MY_FIND_NODE_EQ_IN_LIST // Ex 07
    t_list *list;

    list = my_params_in_list(ac, av);
    my_rev_list(&list);
    show_list(my_find_node_eq_in_list(list, "two", strcmp));
    free_list(list);
#endif

#ifdef MY_RM_ALL_EQ_FROM_LIST // Ex 08
    t_list *list;

    list = my_params_in_list(ac, av);
    my_rev_list(&list);
    my_rm_all_eq_from_list(&list, "two", strcmp);
    show_list(list);
    free_list(list);
#endif

#ifdef MY_ADD_LIST_TO_LIST // Ex 09
    t_list *list1;
    t_list *list2;

    list1 = my_params_in_list(ac, av);
    list2 = my_params_in_list(ac, av);
    my_rev_list(&list2);
    my_add_list_to_list(&list1, list2);
    show_list(list1);
    free_list(list1);
#endif

#ifdef MY_SORT_LIST // Ex 10
    t_list *list;

    list = my_params_in_list(ac, av);
    my_rev_list(&list);
    my_sort_list(&list, strcmp);
    show_list(list);
    free_list(list);
#endif

#ifdef MY_PUT_ELEM_IN_SORT_LIST // Ex 11
    t_list *list;

    list = my_params_in_list(ac, av);
    my_rev_list(&list);
    my_sort_list(&list, strcmp);
    my_put_elem_in_sort_list(&list, "lol", strcmp);
    show_list(list);
    free_list(list);
#endif

#ifdef MY_ADD_SORT_LIST_TO_SORT_LIST // Ex 12
    t_list *list1;
    t_list *list2;

    list1 = my_params_in_list(ac, av);
    list2 = my_params_in_list(ac, av);
    my_add_sort_list_to_sort_list(&list1, list2, strcmp);
    show_list(list1);
    free_list(list1);
#endif

    return 0;
}
