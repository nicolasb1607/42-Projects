unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_length;
	unsigned int i;
	src_length = 0;
	
	while (src[src_length])
	{
		src_length++;
	}
	if (size == 0)
		return(src_length);
	else
	{	
		i = 0;
		while (i < size  - 1)
		{	
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return(src_length);
}
