#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char str[] = "";
	int x;

	x = ft_str_is_alpha(str);
	printf("%d", x);
	return(0);
}

