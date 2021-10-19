#include "include/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while ((s1[i] == s2[i]) && n - 1 > 0 && (s1[i] || s2[i]))
    {
        i++;
        n--;
    }
    return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int main()
{
    char *s1 = "hellozhhgger";
    char *s2 = "hell";

    printf("value : %d\n", strncmp(s1, s2, 12));
    return (0);
}
*/