#include <stdio.h>

char    *ft_strcapitalize(char *str);

int main(void)
{

    char str[] = "salut, comMent vas tU ? 42mots quarante-DeUx; cinquante+et+un";
    char *x;

    x = ft_strcapitalize(str);
    printf("%s", x);
    return (0);
}
