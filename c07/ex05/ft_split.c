#include <stdlib.h>

int	ft_strlen(char *str)
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

	nb_word = 0;
	i = 0;
	if (ft_charset(str[i]) == 0)
		{
			nb_word++;
			i++;
		}
	while (str[i])
	{		
		if (ft_charset(str[i], charset) == 0 && ft_charset(str[i - 1], charset) == 1)
		{
			nb_word++; 
			i++;
		}
	}
	return (nb_word);
}

int ft_getlenword(char *str)
{
	int	len; 

	len = 0; 
	while (ft_charset(str[len]) == 0)
		i++;
	return(len);
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
		

		i++;
	}


}


int main(int argc, char *argv[])
{	
	ft_split(char *str, char *charset);
	return(0);
}
