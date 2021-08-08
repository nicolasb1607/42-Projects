int	ft_str_is_alpha(char *str)
{	int x;

	x = 0;
	while(str[x])
	{
		if ((str[x] > 'z'  && str[x] < 'a') || (str[x] > 'Z' && str[x] < 'A'))
		{	
			return(0);
		}
	x++;
	}
	return(1);	
}
