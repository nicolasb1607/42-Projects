#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1 ;
	}	
	if (nb >= 10)
	{
		ft_putnbr(nb / 10 );
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}	

int	ft_double(int tab)
{
	int	dble;

	dble = tab * 2;
	return (dble);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*tab_res;
	int	i;

	i = 0;
	tab_res = malloc(sizeof(int) * length);
	while (i < length)
	{
		tab_res[i] = f(tab[i]);
		i++;
	}
	return (tab_res);
}

/*int main()
{
	int tab[5] = {0,1,2,3,4};
	int *tab_res;
	int length = 5;

	tab_res = ft_map(tab, length, &ft_double);
	for(int i = 0 ; i < length ; i++)
		ft_putnbr(tab_res[i]); 
	return (0);
}*/
