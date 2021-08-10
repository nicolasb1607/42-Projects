char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	p;
	unsigned int	k;


	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		p = i;
		while (str[p] == to_find[k])
		{
			p++;
			k++;
			if (to_find[k] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
