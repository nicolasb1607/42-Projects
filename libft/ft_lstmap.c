/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:37:29 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/04 15:01:43 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/*Itère sur la liste lst et applique la fonction f au
contenu de chaque élément. Crée une nouvelle liste
résultant des applications successives de f. la
fonction del est la pour detruire le contenu d un
element si necessaire

#1. L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction à appliquer.*/
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (lst == NULL || f == NULL)
		return NULL;
	while(lst != NULL)
	{
		
	}
}