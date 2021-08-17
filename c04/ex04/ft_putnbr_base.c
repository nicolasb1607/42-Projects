/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:34:49 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/17 12:11:03 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_length(str) <= 1)
		return (0);
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~' || str[i] == '+' || str[i] == '-' )
			return (0);
		i++;
	}
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[i] != str[j] && str[j])
			j++;
		if (str[i] == str[j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;

	if (ft_check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	if (nbr >= 0 )
		nb = nbr;
	if (nb >= ft_length(base))
	{
		ft_putnbr_base(nb / ft_length(base), base);
		nb = nb % ft_length(base);
	}
	if (nb < ft_length(base))
		ft_putchar(base[nb]);
}
