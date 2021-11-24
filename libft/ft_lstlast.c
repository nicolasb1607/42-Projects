/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:27:52 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:40:09 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Renvoie le dernier élément de la liste.

#1. Le début de la liste.*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (current == NULL)
		return (NULL);
	while (current->next != NULL)
		current = current->next;
	return (current);
}

/*
#include <stdio.h>

int main()
{
	t_list *n1;
	t_list *n2;
	t_list *n3;

	n1 = ft_lstnew("node 1");
	n2 = ft_lstnew("node 2");
	n3 = ft_lstnew("node 3");

	n1->next = n2;
	n2->next = n3;

	printf("%s\n", (char*) ft_lstlast(n1)->content);
	return (0);
} */