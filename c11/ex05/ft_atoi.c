/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:17:24 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/26 16:17:45 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_wht_spc(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	nb_minus;
	int				final_int;

	i = 0;
	nb_minus = 0;
	final_int = 0;
	while (ft_is_wht_spc(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb_minus++;
		i++;
	}
	while (ft_is_numeric(str[i]) == 1)
	{
		final_int = final_int * 10 + str[i] - '0';
		i++;
	}
	if (nb_minus % 2 == 0)
		return (final_int);
	return (final_int * -1);
}

