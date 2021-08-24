#include <stdlib.h>

int	ft_strlen_custom(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);

}

int	ft_charset(char c, char **charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
	}
	return (0);
}

int	ft_word_count(char *str, char **charset)
{	
	int	i;
	int	nb_word;
	
	while (ft_charset(str[i]) == 1
}

char **ft_split(char *str, char *charset)
{
	char	**ptr_tab;
	int	i;
	int	ttlen;

	ttlen = ft_getlenword(str);
	
	i = 0;
	ptr_tab = malloc((nb_word + 1) * sizeof (char*))
	if (!ptr_tab)
		return (NULL);
	while (i < nb_word + 1)
	{
		ptr_tab[i] = &str
		i++;
	}
}


int main(int argc, char *argv[])
{	
	ft_split(char *str, char *charset);
	return(0);
}
