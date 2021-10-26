/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:39 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 18:41:19 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	pos;

	pos = 0;
	while (s[pos] != c && s[pos])
		pos++;
	if (s[pos] == c)
		return ((char *) &s[pos]);
	else
		return (NULL);
}

/*
#include <stdio.h>

int main()
{
	char *s = "hello";
	char c = 'o';

	printf("l'adresse de la premiere %c occurence est : %s\n", c, ft_strchr(s, c));
	return (0);
}*/
