/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:14:55 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/26 09:17:46 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*ptrn_int;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	ptrn_int = (int *) malloc((len - 1) * sizeof(int));
	if (!ptrn_int)
		return (NULL);
	while (i < len)
	{
		ptrn_int[i] = min;
		i++;
		min++;
	}
	return (ptrn_int);
}
