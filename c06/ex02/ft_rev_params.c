#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_len(char **str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main(int argc, char *argv[])
{
	
	argc = ft_len(argv);
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		write(1 , "\n", 1);
		argc--;
	}
	return (0);
}
