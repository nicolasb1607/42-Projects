#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char str[] = "ADHK";
	int x;

	x = ft_str_is_uppercase(str);
	printf("%d", x);
	return(0);
}

