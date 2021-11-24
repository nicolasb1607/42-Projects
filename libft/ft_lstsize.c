/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:25:34 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:40:21 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Compte le nombre d’éléments de la liste.

#1. Le début de la liste.*/
int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		size;

	current = lst;
	size = 0;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}

/*
#include <stdio.h>

int main()
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *beg;

	n1 = ft_lstnew("node 1");
	n2 = ft_lstnew("node 2");
	n3 = ft_lstnew("node 3");
	beg = NULL;
	n1->next = n2;
	n2->next = n3;
	printf("%d\n", ft_lstsize(beg));
	return 0;
} */