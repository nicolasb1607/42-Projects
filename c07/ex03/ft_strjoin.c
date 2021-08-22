#include <stdlib.h>
#include <stdio.h>

int	ft_getlen(char **str, char *sep, int size)
{
	int	total_len;
	int	i;
	int	j;
	int	len_argc;

	len_argc = 0;
	i = 0;
	total_len = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			total_len++;
			j++;
		}
		i++;
	}
	while (len_argc < size - 1)		
	{	
		j = 0;
		while (sep[j])
		{
			total_len++;
			j++;
		}
		len_argc++;
	}
	return (total_len);
}

void	ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s1[i])
			i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
}	

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strconcat;
	int		i;
	if (size >= 2)
	{
		i = 1;
		strconcat = malloc(ft_getlen(strs, sep, size) * sizeof(char));
		while (i < size)
		{	
			ft_strcat(strconcat,strs[i]);
			if (i < size - 1)
			{
				ft_strcat(strconcat, strs[i]);
			}
			i++;
		}
	
	}
	if (size == 1)
	{
		strconcat = malloc(1 * sizeof(char));
		strconcat[0] = '\0';
	}
	return (strconcat);
}
int main(int argc, char *argv[])
{
	char sep[] = "/?";

	printf("%s\n", ft_strjoin(argc, argv, sep));	
	return (0);
}
