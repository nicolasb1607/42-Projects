#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[]= "bonjour, ca va ?";
	char dest[17];
	char *ptr;

	ptr = ft_strcpy(dest, src);
	printf("%s", ptr);
	return (0); 
}
