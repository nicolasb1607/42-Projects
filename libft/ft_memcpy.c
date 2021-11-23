/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:28 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/23 13:10:18 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void 	*ft_memcpy(void *dest, const void *restrict src, size_t n)
{
	char *ptrdest;
	char *ptrsrc;
	int i;

	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	i = 0;
	while (n-- > 0)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}
