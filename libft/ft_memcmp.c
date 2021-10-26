/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:24 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 18:26:15 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;
	int				pos;

	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	pos = 0;
	while (ptrs1[pos] == ptrs2[pos] && n - 1 > 0 && (ptrs1 || ptrs2))
	{
		pos++;
		n--;
	}
	return (ptrs1[pos] - ptrs2[pos]);
}
