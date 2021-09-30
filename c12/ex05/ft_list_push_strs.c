#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *e;

    e = ft_create_elem(data);
    if (*begin_list == NULL)
        *begin_list = e;
    else
    {
        e->next = *begin_list;
        *begin_list = e;
    }
}

t_list *ft_list_push_strs(int size, char **strs)
{
    t_list **begin_list;
    int i;

    begin_list = NULL;
    i = 0;
    if (size <= 1)
        return (begin_list);
    if (size > 1)
    {
        while (i < size)
        {
            ft_list_push_front(begin_list, strs[i]);
            i++;
        }
    }
    return (begin_list);
}