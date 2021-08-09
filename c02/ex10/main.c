#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	unsigned int size = 8;
	char src[] = "Salut ca va ?";
	char dest[8];
	int x;

	x = ft_strlcpy(dest, src, size);
	printf("%d\n", x);
	printf("%s", dest);
	return (0);
}
