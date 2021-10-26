/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:32 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 18:37:03 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;
	int		i;

	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	i = 0;
	while (n > 0 && ptrsrc[i])
	{
		ptrdest[i] = ptrsrc[i];
		i++;
		n--;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
    char *src = "helloyarar";
    char dest[7];

    (char *)memmove(dest, src, 7);
    printf("%s\n", dest);
    return 0;
} */