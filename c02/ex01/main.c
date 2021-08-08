#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	unsigned long	n = 10;
	char		src[] = "salut";
	char 			dest[10];
	char 			*ptrcpy;
	char 			*res_strncpy;

	res_strncpy =  strncpy(dest, src , n);
	printf("%s\n", res_strncpy);
	
	ptrcpy = ft_strncpy(dest, src, n);
	printf("%s", ptrcpy);
	return (0);
}

