#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char str[] = "nGHtth";
	int x;

	x = ft_str_is_lowercase(str);
	printf("%d", x);
	return(0);
}

