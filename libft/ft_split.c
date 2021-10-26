/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 09:21:54 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/25 13:11:04 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

static int	ft_num_word(char const *s, char sep)
{
	int	in_word;
	int	i;
	int	num_word;

	i = -1;
	in_word = 0;
	num_word = 0;
	while (s[++i])
	{
		if (in_word == 0 && s[i] != sep)
		{
			in_word = 1;
			num_word++;
		}
		else if (s[i] == sep && in_word == 1)
			in_word = 0;
	}
	return (num_word);
}

static char	*ft_get_string(char const *s, char sep)
{
	int		i;
	int		size;
	char	*to_split;

	i = -1;
	while (s[++i] != sep && s[i])
		size++;
	to_split = malloc((size + 1) * sizeof(char));
	if (!to_split)
		return (NULL);
	i = -1;
	while (s[++i] != sep && s[i])
		to_split[i] = s[i];
	to_split[i] = '\0';
	return (to_split);
}

/*Alloue (avec malloc(3)) et retourne un tableau
de chaines de caracteres obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL.

Le tableau de nouvelles chaines de caractères,
résultant du découpage. NULL si l’allocation
échoue.

#1. La chaine de caractères à découper.
#2. Le caractère délimitant. */
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**to_split;

	i = 0;
	j = -1;
	to_split = malloc((ft_num_word(s, c) + 1) * sizeof(char *));
	if (!to_split)
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			to_split[++j] = ft_get_string(&s[i], c);
		else if (i > 0 && s[i - 1] == c && s[i] != c && s[i + 1] != '\0')
			to_split[++j] = ft_get_string(&s[i], c);
		i++;
	}
	to_split[++j] = NULL;
	return (to_split);
}

/*

#include <stdio.h>

int main(int ac, char **av)
{
	char **split_tab;
	int i;

	i = 0;
	if (ac == 3)
		split_tab = ft_split(av[1], av[2][0]);
	while (i < 2)
	{
		printf("%s\n", split_tab[i]);
		i++;
	}
	return (0);
} */