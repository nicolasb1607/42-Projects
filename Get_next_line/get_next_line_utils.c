/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:49:44 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/03 20:56:19 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	if (!s || s[0] == '\0')
		return (0);	
	while (s[len])
		len++;
	return (len);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}


char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (s[i])
	{
		if (s1[i] == (unsigned char) c)
			return (&s1[i]);
		i++;
	}
	if (s1[i] == (unsigned char) c)
		return (&s1[i]);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		catlen;
	char	*strcat;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1)
	{
		s1 = malloc (1 * sizeof(char));
		s1[0] ='\0';
	}
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

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dup;

	len = ft_strlen(s);
	i = 0;
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}