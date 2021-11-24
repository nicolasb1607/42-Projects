/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:47 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:41:31 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Alloue (avec malloc(3)) et retourne une nouvelle
chaine, résultat de la concaténation de s1 et s2.

La nouvelle chaine de caractères. NULL si
l’allocation échoue.

#1. La chaine de caractères préfixe.
#2. La chaine de caractères suffixe. */
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		catlen;
	char	*strcat;
	int		i;
	int		j;

	i = -1;
	j = -1;
	catlen = ft_strlen(s1) + ft_strlen(s2);
	strcat = malloc((catlen + 1) * sizeof(char));
	if (!strcat)
		return (NULL);
	while (s1[++i])
		strcat[++j] = s1[i];
	i = -1;
	while (s2[++i])
		strcat[++j] = s2[i];
	strcat[++j] = '\0';
	return (strcat);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 3)
        printf("concatened string : %s\n", ft_strjoin(av[1], av[2]));
    return 0;
}
*/