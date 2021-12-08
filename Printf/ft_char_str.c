/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:11:06 by nburat-d          #+#    #+#             */
/*   Updated: 2021/12/08 13:35:48 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putchar(char c, int *printed)
{
    write(1, &c, 1);
    *printed = *printed + 1;
}

void    ft_putstr(char *str, int *printed)
{
    int i;

    i = -1;
    while (str[++i])
    {
        write(1, &str[i], 1);
        *printed = *printed + 1;
    }
}