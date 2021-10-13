#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *ptrdest = (char *)dest;
    char *ptrsrc = (char *)src;
    int i;

    i = 0;
    while (n > 0 && ptrsrc[i])
    {
        ptrdest[i] = ptrsrc[i];
        i++;
        n--;
    }
    return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
    char *src = "helloyarar";
    char dest[7];

    (char *)memmove(dest, src, 7);
    printf("%s\n", dest);
    return 0;
} */