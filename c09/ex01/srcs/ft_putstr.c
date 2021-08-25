/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:47:10 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/24 09:47:22 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		pos_char;
	char	c;

	pos_char = 0;
	while (str[pos_char] != 0)
	{
		c = str[pos_char];
		write(1, &c, 1);
		pos_char++;
	}
}
