#include <stdlib.h>

// SAUF si le caractere de separation est rencontee successivement OU que la chaine commence par un separateur OU termine par un separateur
//
//
//allouer de la memoire pour le nombre de sections 
//
//compter la taille de la section jusqua un premier separateur et alouer la memoire requise a celuis ci
//
//stocker la premiere section 
//
//passer a la section suivante et repeter l operation 

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);

}

int	ft_is_separator(char c, char **charset)
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

int	ft_count(char *str)
{
	int	count_section;
	int	i;

	i = 0;
	count_section = 0;
	while(str[i])
	{
		while (ft_is_separator(str[i]) == 1)
			i++;
		if (ft_is_separator(str[i] == 0))
		{
			while (ft_is_separator(str[i]) == 0)
			i++;
		}
		count_section++;
	}
	return (count_section);
}
char **ft_split(char *str, char *charset)
{
	int	str_len;
	int	charset_len;

	str_len = 0;
	charset_len = 0;
	str_len = ft_strlen(str);
	charset_len = ft_strlen(charset);


}


int main(int argc, char *argv[])
{	
	ft_split(char *str, char *charset);
	return(0);
}
