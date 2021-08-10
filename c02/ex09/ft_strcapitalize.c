/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:14:23 by nburat-d          #+#    #+#             */
/*   Updated: 2021/08/10 09:14:28 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_lowercase(char c)
{
	if (c <= 'z' && c > 'a')
		return (1);
	return (0);
}

int	ft_is_alphanumeric(char c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;
	int	y;

	if (ft_is_lowercase(str[0]))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		x = ft_is_alphanumeric(str[i - 1]);
		y = ft_is_lowercase(str[i]);
		if (x == 0 && y == 1)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
