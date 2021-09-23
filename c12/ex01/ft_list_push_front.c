#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
	{
		t_list *head;

		*head = ft_create_elem(data);
		if (*begin_list == NULL)
			*begin_list = head;
		else
		{
			head->next = *begin_list;
			*begin_list = head;
		}
}