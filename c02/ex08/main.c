#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[] = "AGFWLJW";
	char *x;

	x = ft_strlowcase(str);
	printf("%s", x);
	return(0);
}

