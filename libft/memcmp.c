#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptrs1 = (unsigned char *)s1;
    unsigned char *ptrs2 = (unsigned char *)s2;
    int pos;

    pos = 0;
    while (ptrs1[pos] == ptrs2[pos] && n - 1 > 0 && (ptrs1 || ptrs2))
    {
        pos++;
        n--;
    }
    return (ptrs1[pos] - ptrs2[pos]);
}