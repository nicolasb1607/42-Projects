/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:38:20 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 18:22:56 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ptrc;
	unsigned char	*ptrs;
	int				pos;

	ptrc = (unsigned char)c;
	ptrs = (unsigned char *)s;
	pos = 0;
	while (ptrs[pos] != ptrc && ptrs[pos] && n - 1 > 0)
	{
		pos++;
		n--;
	}
	if (ptrs[pos] == ptrc)
		return (&ptrs[pos]);
	else
		return (NULL);
}
