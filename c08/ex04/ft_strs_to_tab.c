#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return(len);
}

char *ft_strdup(char *str)
{
	char *dup;
	int len;
	int	i;

	i = 0;
	len = 0;
	len = ft_strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}		
	dup[i] = '\0';
	return (dup);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *ptr_to_tab;

	i = 0;
	ptr_to_tab = malloc((ac +1) * sizeof(t_stock_str));
	if (!ptr_to_tab)
		return (NULL);
	while (av[i])
	{
		ptr_to_tab[i].size = ft_strlen(av[i]);
		ptr_to_tab[i].str = av[i];
		ptr_to_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr_to_tab[i].str = 0;
	return (ptr_to_tab);
}
