#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	unsigned int nb = 15;
	char s1[25] = "Bon";
	char s2[5] = "jour";

//	printf("%s\n", "Programme de base : ");
//	printf("%s\n", strncat(s1, s2, nb));
	printf("%s\n", "Mon programme : ");
	printf("%s", ft_strncat(s1, s2, nb));
	return (0);
}
