/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:50 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 18:44:24 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	long unsigned int	i;
	long unsigned int	j;

	i = 0;
	while (dst[i])
		i++;
	while (src[j] && j < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	if (size < (long unsigned int)ft_strlen((char *)src))
	{
		dst[i] = '\0';
		return (ft_strlen(dst));
	}
	else
		return (size);
}

/*
#include <stdio.h>

int main()
{
	char *src = "amis de la sorbonne";
	char dest[60] = "salut les ";
	int length;

	length = ft_strlcat(dest, src, 30);
	printf("%d\n", length);
	printf("%s\n", dest);
	return (0);
}
*/