/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:39:09 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:41:59 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pos;

	i = 0;
	pos = NULL;
	while (s[i])
	{
		if (s[i] == c)
			pos = (char *)&s[i];
		i++;
	}
	return (pos);
}

/*
#include <stdio.h>

int main()
{
	char *s = "hello salut les amis de la sorbonne";
	char c = 'l';

	printf("l'adresse de la derniere %c occurence est : %s\n", c, ft_strrchr(s, c));
	return (0);
} */