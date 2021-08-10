#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char s1[25] = "Bon";
	char s2[5] = "jour";
	
	printf("%s", ft_strcat(s2, s1));
	return (0);
}
