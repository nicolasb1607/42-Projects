int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	nb_item; 
	int	i; 

	i= 0; 
	nb_item = 0; 
	while (i < length)
	{
		if (f(tab[i]))
			nb_item++;
		i++;
	}
	return(nb_item);
}
