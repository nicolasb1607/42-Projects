#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
    t_list *last;
    t_list *tmp;

    last = NULL;
    if (begin_list != NULL)
    {
        last = begin_list;
        while (last->next != NULL)
        {
            tmp = last->next;
            last = tmp;
        }
 
    }
       return (last);
}