#include <unistd.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_print_hexa(char c)
{
	char *base;
	base = "0123456789abcdef";
	char tab[2];

	tab[0] = base[c / 16];
	tab[1] = base[c % 16];
	ft_putchar('\\');
	ft_putchar(tab[0]);
	ft_putchar(tab[1]);
}

int	ft_is_printable(char c)
{
	
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_printable(str[i])  == 0)
			ft_print_hexa(str[i]);
		else 
			ft_putchar(str[i]);
		i++;
	}	
}
