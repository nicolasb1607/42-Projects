#include "include/libft.h"

static int ft_len(const char *s)
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

char *ft_strdup(const char *s)
{
    int len;
    int i;
    char *dup;

    len = ft_len(s);
    i = 0;
    dup = malloc(len * sizeof(char));
    if (!dup)
        return (NULL);
    while (s[i] != '\0')
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}