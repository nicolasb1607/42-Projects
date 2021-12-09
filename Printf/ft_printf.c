/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:11:05 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/09 10:51:26 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int i;
	int printed;
	va_list ap;

	i = 0;
	printed = 0;
	va_start(ap, str);
	if (ft_strchr(str, '%'))
	{
		while (str[i])
		{	
			if (str[i] == '%' && str[i + 1] == 'c' && ++i)
				ft_putchar((int)va_arg(ap, int), &printed);
			else if (str[i] == '%' && str[i + 1] == 's' && ++i)
				ft_putstr((char *)va_arg(ap, char *), &printed);
			// Gestion du %p (imprime l'argument de pointeur void * en hexadecimal)
			else if (str[i] == '%' && str[i + 1] == 'p' && ++i)

			//Gestion du %d (imprime un nombre decimal en base 10)
			else if (str[i] == '%' && str[i + 1] == 'd' && ++i)
				ft_putnbr((int) va_arg(wap, int), &printed);
			// Gestion du %i (imprime un entier en base 10)
			else if (str[i] == '%' && str[i + 1] == 'i' && ++i)
				ft_putnbr((int) va_arg(ap, int), &printed);
			// Gestion du %u (imprime un nombre decimal non signe en base 10)
			else if (str[i] == '%' && str[i + 1 ] == 'u' && ++i)
				ft_putnbru((unsigned int) va_arg(ap, unsigned int), &printed);
			// Gestion du %x (imprime un nombre en hexadecimal base 16)
			else if (str[i] == '%' && str[i + 1] == 'x' && ++i)
				ft_putnbr_hexa((int) va_arg(ap, int), &printed);
			// Gestion du %X (imprime un nombre en MASJUCULE hexadecimal base 16)
			else if (str[i] == '%' && str[i + 1] == 'X' && ++i)
				ft_putnbr_hexa_maj((int) va_arg(ap, int), &printed);
			else if (str[i] == '%' && str[i + 1] == '%' && ++i)
				ft_putchar('%', &printed);
			else
			{
				write(1, &str[i], 1);
				printed++;
			}
			i++;
		}
	}
	else
		ft_putstr((char *)str, &printed);
	va_end(ap);

	return (printed);
}