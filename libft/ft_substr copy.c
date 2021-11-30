/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:39:16 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/30 14:35:38 by nburat-d         ###   ########.fr       */
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
	int		sublen;		

	i = 1;
	if (!s)
		return (NULL);
	while (++i <= start && s[i])
		s++;
	sublen = ft_strlen(s);
	while ()
	{
		/* code */
	}
	
	
	return (substr);
}
