int ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	while((unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	x = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (x);
}
