/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:32:35 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/19 14:14:41 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	square;

	square = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (square * square <= nb && square <= 46340)
	{
		if (square * square == nb)
			return (square);
		square++;
	}
	return (0);
}

int main(void)
{
	printf("%d", ft_sqrt(2147395600));
	return (0);
}
