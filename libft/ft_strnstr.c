/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:39:05 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 18:50:51 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strnstr(const char *to_search, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find == NULL || len == 0)
		return ((char *)to_search);
	while (to_search[i] != '\0')
	{
		j = 0;
		while (to_search[i + j] == to_find[j])
		{
			if (j == len - 1)
				return ((char *)&to_search[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
