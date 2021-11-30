/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:59:52 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/29 15:46:18 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_word(const char *s, char c)
{
	int	nbword;
	int	i;

	i = 0;
	nbword = 0;
	if (i == 0 && s[i] != c)
	{
		nbword++;
		i++;
	}
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			nbword++;
		i++;
	}
	return (nbword);
}

static int	len_word(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static char	*get_word(const char *s, char c, int *pos)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((len_word(&s[*pos], c) + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (s[*pos] != c && s[*pos])
	{
		word[i] = s[*pos];
		i++;
		*pos = *pos + 1;
	}
	word[i] = '\0';
	return (word);
}

char	**null_return(void)
{
	char	**splitted;

	splitted = malloc(1 * sizeof(char *));
	if (!splitted)
		return (NULL);
	splitted[0] = NULL;
	return (splitted);
	return (splitted);
}

/*Alloue (avec malloc(3)) et retourne un tableau
de chaines de caracteres obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL.

Le tableau de nouvelles chaines de caractères,
résultant du découpage. NULL si l’allocation
échoue.

#1. La chaine de caractères à découper.
#2. Le caractère délimitant.*/
char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		nbword;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0 || !s)
		return (null_return());
	nbword = nb_word(s, c);
	splitted = malloc((nbword + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	while (nbword-- > 0)
	{
		while (s[i] == c)
			i++;
		splitted[j] = get_word(s, c, &i);
		j++;
	}
	splitted[j] = NULL;
	return (splitted);
}

/*
int main(int ac, char **av)
{
	char **splittedarray;
	int i;

	i = -1;
	if (ac == 3)
	{

		splittedarray = ft_split(av[1], av[2][0]);
		while (splittedarray[++i])
			printf("%s\n", splittedarray[i]);
	}
	return 0;
}*/