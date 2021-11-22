/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:32:49 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/04 10:02:10 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/*Supprime et libère la mémoire de l’élément passé en
paramètre, et de tous les élements qui suivent, à
l’aide de del et de free(3)
Enfin, le pointeur initial doit être mis à NULL.

#1. L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction permettant de
supprimer le contenu d’un élément.*/
void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;

	while (*lst != NULL)
	{
		current = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(current, del); 
	}
}
