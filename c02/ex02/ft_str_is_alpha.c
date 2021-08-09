int	ft_str_is_alpha(char *str)
{	int x;

	x = 0;
	if (str[0] == '\0')
		return (1);
	while(str[x])
	{
		if ((str[x] < 'A'  && str[x] < 'Z') || (str[x] < 'a' && str[x] < 'z'))
		{	
			return(0);
		}
	x++;
	}
	return(1);	
}
