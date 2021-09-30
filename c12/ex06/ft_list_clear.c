#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
  begin_list;
  if (begin_list == NULL)
    return;
  else if (begin_list->next == NULL)
  {
    free_fct(begin_list->data);
    free(begin_list);
  }
  else
    ft_list_clear(begin_list->next, begin_list);
}