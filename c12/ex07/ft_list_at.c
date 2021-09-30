#include "ft_list.h"

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    int     pos;

    pos = 0;
    while (pos != nbr || begin_list->next != NULL)
    {
            begin_list = begin_list->next;
            pos++;
    }
    return (begin_list);
}