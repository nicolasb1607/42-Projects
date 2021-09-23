#include "includes/ft.h"

int	ft_is_operator(char *str)
{
	if (*str == '+' || *str == '-' || *str == '*' || *str == '/' || *str == '%')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	void	(*p[5])(int, int);
	char	*op;

	op = av[2];
	p[0] = &ft_add;
	p[1] = &ft_subtract;
	p[2] = &ft_multiply;
	p[3] = &ft_divide;
	p[4] = &ft_modulo;
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	if (ac != 4)
		return (0);
	else if (ft_is_operator(op) == 0)
		ft_putnbr(0);
	else if (ac == 4)
	{
		if (ft_strlen(op) == 1 && op[0] == '+')
			p[0](a, b);
		else if (ft_strlen(op) == 1 && op[0] == '-')
			p[1](a, b);
		else if (ft_strlen(op) == 1 && op[0] == '*')
			p[2](a, b);
		else if (ft_strlen(op) == 1 && op[0] == '/')
			p[3](a, b);
		else if (ft_strlen(op) == 1 && op[0] == '%')
			p[4](a, b);
	}
	else
		ft_putnbr(0);
	return (0);
}
