/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:17:21 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/26 16:17:43 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_divide(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero\n");
	else
		ft_putnbr(a / b);
}

void	ft_subtract(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_modulo(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
		ft_putnbr(a % b);
}

void	ft_multiply(int a, int b)
{
	ft_putnbr(a * b);
}
