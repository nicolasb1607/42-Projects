int ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{

		if (str[i] <  'a' || str[i] > 'z')
		{
			return (0);
		
		}
	i++;
	}
	return (1);
}
