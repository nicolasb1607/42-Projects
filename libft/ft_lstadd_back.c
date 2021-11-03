/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:29:40 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/29 10:30:39 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/*Ajoute l’élément new à la fin de la liste.

#1. L’adresse du pointeur vers le premier élément
de la liste.
#2. L’adresse du pointeur vers l’élément à rajouter
à la liste.*/
void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (*alst != NULL && new != NULL)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
}

/*
#include <stdio.h>

int main()
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list **beg;

	n1 = ft_lstnew("node 1");
	n2 = ft_lstnew("node 2");
	n3 = ft_lstnew("node 3");
	beg = &n1;
	n1->next = n2;
	ft_lstadd_back(beg, n3);
	printf("%s\n", (char *) ft_lstlast(*beg)->content);

} */