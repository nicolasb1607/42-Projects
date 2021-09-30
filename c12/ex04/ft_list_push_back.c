#include "ft_list.h"

void    ft_list_push_back(t_list **begin_list, void *data)
{
    if (*begin_list == NULL)
        *begin_list =ft_create_elem(data);
    else if ((*begin_list)->next != NULL)
        ft_list_push_back(&(*begin_list)->next, data);
    else
        (*begin_list)->next = ft_create_elem(data);
}