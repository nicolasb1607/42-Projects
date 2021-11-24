/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:36:29 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:42:03 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contain_char(char s, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (s == set[i])
			return (1);
	}
	return (0);
}

static int	ft_trim_len(char const *s, char const *set)
{
	int	len;
	int	i;

	i = -1;
	len = 0;
	while (s[++i])
		if (ft_contain_char(s[i], set) == 0)
			len++;
	return (len);
}
/* Alloue (avec malloc(3)) et retourne une copie de
la chaine ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaine de
caractères.

La chaine de caractères trimmée. NULL si
l’allocation échoue.

#1. La chaine de caractères à trimmer.
#2. Le set de reference de caractères à trimmer. */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*strtrim;

	i = -1;
	len = ft_trim_len(s1, set);
	strtrim = malloc((len + 1) * sizeof(char));
	if (!strtrim)
		return (NULL);
	i = -1;
	j = -1;
	while (j < len)
	{
		i++;
		if (ft_contain_char(s1[i], set) == 0)
			strtrim[++j] = s1[i];
	}
	strtrim[j] = '\0';
	return (strtrim);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 3)
        printf("string trimmed : %s", ft_strtrim(av[1], av[2]));
    return (0);
} 
*/