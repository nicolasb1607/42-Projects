/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:11:05 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/10 16:35:29 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(const char *str, int *i, int *printed, va_list ap)
{
	int	init;

	init = 0;
	if (str[*i] == '%' && (str[*i + 1] == 'd' || str[*i + 1] == 'i' 
		|| str[*i + 1] == 'x' || str[*i + 1] == 'X' || str[*i + 1] == 'p'))
	{
		if (str[*i] == '%' && str[*i + 1] == 'd' && *++i)
			ft_putnbr(va_arg(ap, int), printed);
		else if (str[*i] == '%' && str[*i + 1]  == 'i' && *++i)
			ft_putnbr(va_arg(ap, int), printed);
		else if (str[*i] == '%' && str[*i + 1] == 'u' && *++i)
			ft_putnbru(va_arg(ap, unsigned int), printed);
		else if (str[*i] == '%' && str[*i + 1] == 'x' && *++i)
			ft_putnbr_hexa(va_arg(ap, unsigned int), printed);
		else if (str[*i] == '%' && str[*i + 1] == 'X' && *++i)
			ft_putnbr_hexa_maj(va_arg(ap, unsigned int), printed);
		else if (str[*i] == '%' && str[*i + 1] == 'p' && *++i)
		{
			ft_pointer((unsigned long int) va_arg(ap, void *), printed, &init);
			init = 0;
		}
		return (1);
	}
	return (0);
}

int	ft_print_char_str(const char *str, int *i, int *printed, va_list ap)
{
	if (str[*i] == '%' && (str[*i + 1] == 'c' || str[*i + 1] == 's' 
		|| str[*i + 1] == '%'))
	{
		if (str[*i] == '%' && str[*i + 1] == 'c' && *++i)
			ft_putchar(va_arg(ap, int), printed);
		else if (str[*i] == '%' && str[*i + 1] == 's' && *++i)
			ft_putstr(va_arg(ap, char *), printed);
		else if (str[*i] == '%' && str[*i + 1] == '%' && *++i)
			ft_putchar('%', printed);
		return (1);
	}
	else
	{
		ft_putchar(str[*i], printed);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			printed;
	va_list		ap;

	i = 0;
	printed = 0;
	va_start(ap, str);
	if (ft_strchr(str, '%'))
	{
		while (str[i])
		{
			if (!ft_print_number(str, &i,&printed, ap))
				ft_print_char_str(str, &i, &printed, ap);
			i++;
		}
	}
	else
		ft_putstr((char *)str, &printed);
	va_end(ap);
	return (printed);
}
