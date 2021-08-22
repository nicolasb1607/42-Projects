#include <stdlib.h>
// parcourir la chaine s1, si le charactere de separation est rencontre alors on incremente une valeur 
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

char **ft_split(char *str, char *charset)
{
	int	str_len;
	int	charset_len;

	str_len = 0;
	charset_len = 0;
	str_len = ft_strlen(str);
	charset_len = ft_strlen(charset);

	while (


}


int main(int argc, char *argv[])
{
	
	
	ft_split(char *str, char *charset);
	return(0);
}
