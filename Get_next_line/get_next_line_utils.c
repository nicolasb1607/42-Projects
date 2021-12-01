/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:49:44 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/01 09:49:57 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	pos;

	pos = 0;
	if (ft_isascii(c) == 0)
		return ((char *) &s[pos]);
	while (s[pos] != c && s[pos])
		pos++;
	if (s[pos] == c)
		return ((char *) &s[pos]);
	else
		return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		catlen;
	char	*strcat;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	catlen = ft_strlen(s1) + ft_strlen(s2);
	strcat = malloc((catlen + 1) * sizeof(char));
	if (!strcat)
		return (NULL);
	if (s1 != NULL)
		while (s1[++i])
			strcat[++j] = s1[i];
	i = -1;
	if (s2 != NULL)
	{
		while (s2[++i] && s2 != NULL)
			strcat[++j] = s2[i];
	}
	strcat[++j] = '\0';
	return (strcat);
}

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}