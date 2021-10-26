/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:37:56 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 18:14:48 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*ptr;

	if (nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(size));
	if (!ptr)
		return (NULL);
	while (nmemb-- > 0)
		*ptr++ = 0;
	return (ptr);
}
