/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:46:27 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/28 17:24:32 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/*Ajoute l’élément ’new’ au début de la liste.

#1. L’adresse du pointeur vers le premier élément
de la liste.
#2. L’adresse du pointeur vers l’élément à rajouter
à la liste.*/
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}

/*
#include <stdio.h>

int main()
{
	t_list *n1;
	t_list *n2;
	t_list **startlst;
	t_list *current_node;

	startlst = &n1;
	n1 = ft_lstnew("node 1");
	n1->next = NULL;

	n2 = ft_lstnew("node 2");
	n2->next = NULL;

	ft_lstadd_front(startlst, n2);
	current_node = *startlst;

	while (current_node != NULL)
	{
		printf("%s\n", (char *)current_node->content);
		current_node = current_node->next;
	}

	return 0;
} */