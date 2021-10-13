#include "libft.h"

void *ft_memcpy(void *dest, const void *restrict src, size_t n)
{
    char *ptrdest = (char *)dest;
    char *ptrsrc = (char *)src;
    int i;

    i = 0;
    while (n-- > 0)
    {
        ptrdest[i] = ptrsrc[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *src = "helloyarars";
    char dest[8];

    (char *)memcpy(dest, src, 6);
    printf("%s\n", dest);
    return 0;
}