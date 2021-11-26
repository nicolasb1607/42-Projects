/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:39:16 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/26 15:59:09 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue (avec malloc(3)) et retourne une chaine de
caractères issue de la chaine ’s’.
Cette nouvelle chaine commence à l’index ’start’ et
a pour taille maximale ’len’.

nouvelle chaine de caractere. NULL si
l’allocation échoue.

#1. La chaine de laquelle extraire la nouvelle
chaine
#2. L’index de début de la nouvelle chaine dans la
chaine ’s’.
#3. La taille maximale de la nouvelle chaine. */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	if ((int)len > ft_strlen(&s[start]) - 1)
	{
		substr = malloc((ft_strlen(&s[start]) + 1) * sizeof(char));
		if (!substr)
			return (NULL);
	}
	else
	{
		substr = malloc((len + 1) * sizeof(char));
		if (!substr)
			return (NULL);
	}
	while (i < (int)len && s[start])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
