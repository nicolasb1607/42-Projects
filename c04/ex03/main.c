#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	char str[] = "    ---+-+ab";
	int x;

	x = ft_atoi(str);
	printf("%d\n", x);
	return (0);
}
