#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char str[] = "89721";
	int x;

	x = ft_str_is_numeric(str);
	printf("%d", x);
	return(0);
}

