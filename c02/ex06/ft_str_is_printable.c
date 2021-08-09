int ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if ( str[i] < 33  || str[i] > 126 )
		{
			return (0);
		}
	i++;
	}
	return (1);
}
