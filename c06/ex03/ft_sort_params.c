#include <unistd.h>
int ft_strlen(char *str)
{
    unsigned int    strlen;

    while(str[strlen])
        strlen++;
    return (strlen);
}



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
	int i;
	int j;
	
	while (i < 


	while(argv[argc])

	return (0);
}
