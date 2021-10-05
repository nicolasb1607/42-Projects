#include "ft_list.h"

void ft_list_remove_if(t_list *begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{

    t_list *previous;
    t_list *current;
    t_list *next;

    previous = NULL;
    current = begin_list;
    while (current->next != NULL)
    {
        next = current->next;
        if (cmp(current->data, data_ref) == 0)
        {
            free_fct(current->data);
            free(current);
            if (previous != NULL)
                previous->next = next;
        }
        previous = current;
        current = next;
    }
}