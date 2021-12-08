#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *s, int c);
void	ft_putchar(char c, int *printed);
void	ft_putstr(char *str, int *printed);
void    ft_putnbr(int nbr, int *printed);
void    ft_putnbru(unsigned int nbr, int *printed);

#endif