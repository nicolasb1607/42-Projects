#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	unsigned int n = 0;
	char s1[] = "Bonjour";
	char s2[] = "Bonsoir";
	int x;
	
	printf("%s", "Programme de base : ");
	printf("%d\n", strncmp(s1, s2, n));
	
	;
	x  = ft_strncmp(s1, s2, n);
	printf("%s", "Mon proramme : ");
	printf("%d", x);;
	return (0);
}

