#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		//printf("charset : %d\n" , i);
		if (c == charset[i])
		{
			//printf("TEMOIN\n");
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strlen_word(char *str,char *charset, int i)
{
	int	len;

	len = 0;
	while (is_separator(str[i], charset) == 1)
		i++;
	while (str[i] && is_separator(str[i], charset) == 0)
	{
		i++;
		len++;
	}
	return (len);
}

int	ft_word_count(char *str, char *charset)
{	
	int	i;
	int	nb_word;

	nb_word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i], charset) == 0)
		{
			if (is_separator(str[i - 1], charset) == 1 || i == 0)
				nb_word++;
		}
		i++;
	}	
	printf("sortie de boucle\n");	
	return (nb_word);
}


char **ft_split(char *str, char *charset)
{
	char	**ptr_tab;
	int	i;
	int	j;
	int nb_word;
	int k;

	k = 0;
	j = 0;
	i = 0;
	nb_word = ft_word_count(str, charset);
	printf("DELIVRANCE\n");
	ptr_tab = malloc((nb_word + 1) * sizeof (char*));
	if (!ptr_tab)
		return (NULL);
	while (i < nb_word)
	{
		while (is_separator(str[j], charset) == 1)
		{
			j++;
			printf("j = %d\n" , j);
		}
		printf("boucle Main\n");	
		ptr_tab[i] = malloc((ft_strlen_word(str, charset, j) + 1) * sizeof(char));
		len_word = ft_strlen_word(str,charset,j);
		while (k < len_word)
		{
			ptr_tab[i][k] = str[j];
			k++;
		}
 		ptr_tab[i][j] = '\0';
		i++;
	}

 	ptr_tab[i] = NULL;
	return (ptr_tab);
}
/*int main(void)
{	
	int i;
	char **ptr;
	char str[] = "hello jaja";
	char sep[] = " ";

	i = 0;
	ptr = ft_split(str, sep);
	while (ptr[i])
	{
		printf("Main boucle");
		printf("%s", ptr[i]);
		i++;
	}
	return(0);
}*/


int	main(int ac, char **av)
{
	(void) ac;
	int	i;
	char	**split;

	split = ft_split(av[1], av[2]);
	i = 0;
	while (i < ft_word_count(av[1], av[2]) + 1)
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
