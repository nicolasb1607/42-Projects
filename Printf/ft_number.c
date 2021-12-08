/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:29:18 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/08 19:04:29 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void    ft_putnbr(int nbr, int *printed)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
		*printed = *printed + 1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, printed);
		nbr = nbr % 10;
	}
	if (nbr <= 9)
	{
		nbr = nbr + '0';
		write(1, &nbr, 1);
		*printed = *printed + 1;
		return ;
	}
}

void    ft_putnbru(unsigned int nbr, int *printed)
{   

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, printed);
		nbr = nbr % 10;
	}
	if (nbr <= 9)
	{
		write(1, &nbr, 1);
		*printed = *printed + 1;
	}
	return ; 
}



