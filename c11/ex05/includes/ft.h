/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:17:28 by nburat-d          #+#    #+#             */
/*   Updated: 2021/10/26 16:17:46 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>

int	ft_strlen(char *str);
int	ft_is_numeric(char c);
int	ft_is_wht_spc(char c);
int	ft_atoi(char *str);
void	ft_add(int a, int b); 
void	ft_divide(int a, int b); 
void	ft_subtract(int a, int b);
void	ft_modulo(int a, int b); 
void	ft_multiply(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
