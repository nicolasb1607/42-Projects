int ft_strncmp(char *s1, char *s2,  unsigned int n)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
		i++;
	x = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (x);
}
