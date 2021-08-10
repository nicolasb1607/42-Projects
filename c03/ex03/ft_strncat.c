char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0; 
	
	if(nb == 0)
		return (dest);
	while (dest[i])
		i++;
	while (j < nb &&  src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (j < nb)
	{
		dest[i + j] = '\0';
		return (dest);
	}
	dest[i + nb] = '\0';	
	return (dest);
}
