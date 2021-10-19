#include "include/libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char ptrc = (unsigned char)c;
    unsigned char *ptrs = (unsigned char *)s;
    int pos;

    pos = 0;
    while (ptrs[pos] != ptrc && ptrs[pos] && n - 1 > 0)
    {
        pos++;
        n--;
    }
    if (ptrs[pos] == ptrc)
        return (&ptrs[pos]);
    else
        return (NULL);
}