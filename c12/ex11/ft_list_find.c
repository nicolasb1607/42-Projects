#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{

	t_list *find;

	find = NULL;
	while (begin_list != NULL)
	{
		if (cmp(begin_list->data, data_ref) == 0)
		{
			find = begin_list;
			return (find);
		}
		begin_list = begin_list->next;
	}
	return (find);
}
