/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:11:05 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/10 14:24:01 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_number(const char *str, int *printed, va_list ap, int *init)
{
	while (str[i])
		{
}

void	ft_print_char_str(const char *str, int *printed, va_list ap, int *init)
{
	while (str[i])
		{
			if (str[i] == '%' && str[i + 1] == 'c' && ++i)
				ft_putchar(va_arg(ap, int), printed);
			else if (str[i] == '%' && str[i + 1] == 's' && ++i)
				ft_putstr(va_arg(ap, char *), printed);
			else if (str[i] == '%' && str[i + 1] == 'p' && ++i)
			{
				ft_pointer(va_arg(ap, void *),&printed, init);
				init = 0;
			}
			else if (str[i] == '%' && str[i + 1] == 'd' && ++i)
				ft_putnbr(va_arg(ap, int), printed);
			else if (str[i] == '%' && str[i + 1] == 'i' && ++i)
				ft_putnbr(va_arg(ap, int), printed);
			else if (str[i] == '%' && str[i + 1] == 'u' && ++i)
				ft_putnbru(va_arg(ap, unsigned int), printed);
			else if (str[i] == '%' && str[i + 1] == 'x' && ++i)
				ft_putnbr_hexa(va_arg(ap, unsigned int), printed);
			else if (str[i] == '%' && str[i + 1] == 'X' && ++i)
				ft_putnbr_hexa_maj(va_arg(ap, unsigned int), printed);
			else if (str[i] == '%' && str[i + 1] == '%' && ++i)
				ft_putchar('%', printed);
			else
				ft_putchar(str[i], printed);
			i++;
		}
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			printed;
	static int	init = 0;
	va_list		ap;

	i = 0;
	printed = 0;
	va_start(ap, str);
	if (ft_strchr(str, '%'))
	{
		ft_get_value(str, &printed, ap, &init);
	}
	else
		ft_putstr((char *)str, &printed);
	va_end(ap);
	return (printed);
}
