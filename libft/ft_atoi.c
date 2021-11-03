/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:37:46 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/20 17:49:25 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	i;
	int	neg;

	num = 0;
	i = 0;
	neg = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + nptr[i] - 48;
		i++;
	}
	return (num * neg);
}

/*

#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
        printf("Num apres atoi : %d\n", ft_atoi(av[1]));
    return (0);
}
*/