#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *pos;

    i = 0;
    pos = NULL;
    while (s[i])
    {
        if (s[i] == c)
            pos = (char *) &s[i];
        i++;
    }
    return (pos);
}

#include <stdio.h>

int main()
{
    char *s = "hello salut les amis de la sorbonne";
    char c = 'l';

    printf("l'adresse de la derniere %c occurence est : %s\n", c, ft_strrchr(s, c));
    return (0);
}