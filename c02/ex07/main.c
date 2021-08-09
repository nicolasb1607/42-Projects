#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str[] = "agjrjd";
	char *x;

	x = ft_strupcase(str);
	printf("%s", x);
	return(0);
}

