/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:39:16 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/30 16:28:32 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_len_inf(void)
{
	char	*dest;

	dest = malloc(sizeof(char) * 1);
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

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
	size_t	i;
	char	*dest;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	if (ft_strlen(s) < start)
		return (ft_len_inf());
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (i < len && s[start])
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
