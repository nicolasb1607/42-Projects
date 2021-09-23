#include "includes/ft.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_divide(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero\n");
	else
		ft_putnbr(a / b);
}

void	ft_subtract(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_modulo(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
		ft_putnbr(a % b);
}

void	ft_multiply(int a, int b)
{
	ft_putnbr(a * b);
}
