/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:38:22 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/17 12:12:31 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) <= 1)
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

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_get_pos(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb_minus;
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	nb_minus = 0;
	if (ft_check_base(base) == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-' || str[i] == '+')
			nb_minus++;
		if (ft_is_in_base(str[i], base) == 1)
			nbr = nbr * ft_strlen(base) + ft_get_pos(str[i], base);
		i++;
	}
	if (nb_minus % 2 != 0)
		nbr = nbr * (-1);
	return (nbr);
}
