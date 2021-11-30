/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:36:29 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/29 16:38:57 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
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
	char	*ptrs1;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_charset(s1[start], set) == 1)
		start++;
	while (is_charset(s1[end - 1], set) == 1)
		end--;
	ptrs1 = malloc((end - start) + 1 * sizeof(char));
	if (!ptrs1)
		return (NULL);
	i = -1;
	while (++i < (end - start))
		ptrs1[i] = s1[start + i];
	ptrs1[i] = '\0';
	return (ptrs1);
}
