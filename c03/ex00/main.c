#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "Bonj";
	char s2[] = "Bon";
	int x;

	x  = ft_strcmp(s1, s2);
	printf("%d", x);
	printf("%d \n", strcmp(s1, s2));
	return (0);
}

