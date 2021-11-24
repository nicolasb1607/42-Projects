/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:36:29 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 18:40:15 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (c == set[i])
			return (1);
	}
	return (0);
}

/* Alloue (avec malloc(3)) et retourne une copie de
la chaine ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaine de
caractères.

Retourne la chaine de caractères trimmée. NULL si
l’allocation échoue.

#1. La chaine de caractères à trimmer.
#2. Le set de reference de caractères à trimmer. */
char	*ft_strtrim(char const *s1, char const *set)
{
	char *ptrs1 = s1;

	if (set == NULL)
		return (ptrs1);
	else if (s1 == NULL);
		return (NULL);
	return (strtrim);
}
