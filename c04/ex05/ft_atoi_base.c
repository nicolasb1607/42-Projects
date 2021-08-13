int	ft_length(char *str)
{
	unsigned int	strlength;

	strlength = 0;
	while (str[strlength])
		strlength++;
	return (strlength);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_wht_spc(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_check_base(char *str)
{
	int i;
	int j;

	i = 0;
	if (ft_length(str) <= 1)
		return (0);
	while(str[i] < ' ' || str[i] > '~' || str[i] == '+' || str[i] == '-' )
	{
		return (0);
		i++;
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != str[i + j] && str[i + j])
			j++;
		if (str[i] == str[i + j])
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	nb_minus;
	int				final_int;

	i = 0;
	nb_minus = 0;
	while (ft_is_wht_spc(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb_minus++;
		i++;
	}
	while (ft_is_numeric(str[i]) == 1)
	{
		final_int = final_int * 10 + str[i] - 48;
		i++;
	}
	if (nb_minus % 2 == 0)
		return (final_int);
	return (final_int * -1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int nb;
	
	nb  = ft_atoi(str);
	if (ft_atoi(str) < 0)
		nb = ft_atoi(str) * -1;
	if (ft_atoi(str) >= 0 )
		nb = ft_atoi(str);
	if (nb > ft_length(base))
	{
		ft_atoi_base(nb / ft_length(base), base);
		nb = nb % ft_length(base);
	}
	if (nb < ft_length(base))
		ft_putchar(base[nb]);
}

int main(void)
{
	char base[] = "0123456789ABCDEF";
	char str[] = "42";

	ft_atoi_base(str, base);
	return (0);
}
