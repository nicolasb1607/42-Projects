/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:48:59 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/06 11:49:07 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	nbr_char;
	int	pos_char;

	nbr_char = 0;
	pos_char = 0;
	while (str[pos_char] != 0)
	{
		nbr_char++;
		pos_char++;
	}
	return (nbr_char);
}
