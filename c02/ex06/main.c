#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char str[] = "AD jj K";
	int x;

	x = ft_str_is_printable(str);
	printf("%d", x);
	return(0);
}

