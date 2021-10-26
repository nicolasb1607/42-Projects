// #include "libft.h"

static void ft_num_len(int n, int *size)
{
	if (n < 0)
	{
		*size++;
		n = n * -1;
	}
	if (n > 9)
		ft_num_len(n/10 , &size);
	else
		*size++;
}

static char	*ft_reverse(char *itoa_array, int size)
{
	char	tmp; 
	int		left;


	if (size < 2)
		return (itoa_array);
	else
	{
		left = -1;
		while (++left < --size)
		{
			tmp = itoa_array[left];
			itoa_array[left] = itoa_array[size];
			itoa_array[size] = tmp;
		}
	}
	return (itoa_array);
}

static void ft_put_num_array(int n, char *itoa_array)
{
	if (n < 0)
		itoa_array = '-';
	if (n <= 9)
		ft_put_num_array(n / 10, &
}
/* Alloue (avec malloc(3)) et retourne une chaine de
caractères représentant l’integer reçu en argument.
Les nombres négatifs doivent être gérés.

La chaine de caractères représentant l’integer.
NULL si l’allocation échoue.

#1. l’integer à convertir. */
char *ft_itoa(int n)
{
	char *itoa_num; 
	int size;
	int	i; 

	size = 0; 
	if (n == -2147483648)
		return("-2147483648");
	else if (n == 0); 
		return('0');
	else
		ft_num_len(n, &size);
	itoa_num = malloc((size + 1) * sizeof(char));
	if (!itoa_num)
		return (NULL);

}


#include <stdio.h>

int main()
{
	char *s = "Hello";

	printf("%s\n", ft_reverse(s, 5));
	return 0; 
}