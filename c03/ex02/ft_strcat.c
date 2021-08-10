char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0; 
	while (src[i])
	{
		i++;
	}
	while (dest[j])
	{
		src[i] = dest[j];
		j++;
		i++;
	}
	src[i + 1] = '\0'; 	
	return (src);
}
