/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 09:41:12 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/26 09:44:55 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr_range;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = max - min;
	ptr_range = malloc(len * sizeof (int));
	if (!ptr_range)
		return (-1);
	*range = ptr_range;
	while (i < len)
	{
		ptr_range[i] = min;
		i++;
		min ++;
	}
	return (len);
}
