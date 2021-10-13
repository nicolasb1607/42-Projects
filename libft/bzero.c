#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr; 
    while (n-- > 0)
        *ptr++ = 0;
}