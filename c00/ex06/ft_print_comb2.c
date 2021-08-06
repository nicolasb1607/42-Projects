/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:00:41 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/05 16:26:55 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{	
	int	set1;
	int	set2;

	set2 = 0;
	while (set2 <= 98)
	{
		set1 = set2 + 1;
		while (set1 <= 99)
		{
			ft_putchar(set2 / 10 + '0');
			ft_putchar(set2 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(set1 / 10 + '0');
			ft_putchar(set1 % 10 + '0');
			set1 = set1 + 1;
			if (set2 != 98)
				write(1, ", ", 2);
		}
		set2++;
	}	
}
