#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int 	ft_strcat(int j, char **strs, char *dest, char *sep)
{
	int	i;
	int k; 	
	
	i = 0;
	k = 0;
	while (i < ft_strlen(strs[j]))
	{
		dest[*k] = strd[j][i];
		i++;
		k++;
	}
	return (k);

}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr_strs;
	int		argv_strlen;
	int 	i;
	int 	j;
	int		k;
	int		sep_len;

	i = 0;
	j = 1;
	k = 0;
	argv_strlen = 0; 
	sep_len = 0;
	while (strs[++i])
		argv_strlen = argv_strlen + ft_strlen(strs[i]);
	sep_len = ft_strlen(sep);
	ptr_strs = malloc((argv_strlen + (size - 1) * sep_len) * sizeof (char));
	while (j < size)
	{
		i = 0;	
		while (i < ft_strlen(strs[j]))
		{
			ptr_strs[k] = strs[j][i];
			i++;
			k++;
		}
		i = 0;
		while (i < sep_len && j < size -1)
		{
			ptr_strs[k] = sep[i];
			k++;
			i++;
		}
		j++;
	}
	return (ptr_strs);
}

int main(int argc, char *argv[])
{
	char sep[] = "/";
	char *ptr;

	ptr = ft_strjoin(argc, argv, sep);
	printf("%s", ptr);
	return (0);
}
