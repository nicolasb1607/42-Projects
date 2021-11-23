/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:32 by nburat-d          #+#    #+#             */
/*   Updated: 2021/11/23 17:31:07 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *ptrdest;
	char *ptrsrc;
	size_t	i;
	
	i = 1;
	ptrdest = (char *) dest;
	ptrsrc = (char *) src;
	while (i <= n)
	{
		ptrdest[n - i] = ptrsrc[n - i];
		i++; 
	}
	return (ptrdest);
}
