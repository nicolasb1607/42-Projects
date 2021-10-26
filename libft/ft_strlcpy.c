/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:54 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 18:45:11 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	long unsigned int	i;

	i = 0;
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *) src));
}

/* #include <stdio.h>

int main()
{
    char *src = "salut les amis";
    char dest[6];
    int length;

    length = ft_strlcpy(dest, src, 4);
    printf("%d\n", length);
    printf("%s\n", dest);
    return (0);
} */