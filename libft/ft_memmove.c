/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:32 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:40:42 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int is_higher_in_mem(void *dest, const void *src)
{
	long int adddest = (long int) dest;
	long int addsrc = (long int) src;
	
	if (adddest > addsrc)
		return (1);
	return (0);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *ptrdest;
	char *ptrsrc;
	size_t i;

	i = 1;
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	if (is_higher_in_mem(dest, src) == 1)
	{
		while (i <= n)
		{
			ptrdest[n - i] = ptrsrc[n - i];
			i++;
		}
	}
	else if (is_higher_in_mem(dest, src) == 0)
	{
		i = 0;
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (ptrdest);
}
