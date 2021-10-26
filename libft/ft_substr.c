/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:39:16 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/25 13:06:06 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

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
	size_t	i;

	i = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (s[i] && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* 
#include <stdio.h>

int main()
{
    char *s = "hello les amis comment ca va ?";
    char *substr;

    substr = ft_substr(s, -5, 50);
    printf("la substr est : %s", substr);
    return 0;
}
*/