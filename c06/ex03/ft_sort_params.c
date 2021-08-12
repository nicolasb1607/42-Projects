#include <unistd.h>
void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++; 
	}
}

int	ft_strcmp(char *str1,char *str2)
{
	unsigned int	i;

	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return (str1[i] - str2[i]);

}
int	main(int argc, char *argv[])
{
	char tmp;

	while(argv[argc])

	return (0);
}
