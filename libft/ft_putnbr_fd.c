/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:47:38 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/28 15:34:46 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/* Écrit l’integer ’n’ sur le file descriptor donné.

#1. L’integer à écrire.
#2. Le file descriptor sur lequel écrire. */
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (n % 10 <= 9)
		ft_putchar_fd(n % 10 + 48, fd);
	return ;
}

/*
int main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr_fd(ft_atoi(av[1]), 1);
	return 0; 
} */