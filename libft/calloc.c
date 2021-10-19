#include "include/libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    int *ptr;
  
    if (nmemb == 0)
        return(NULL);
    ptr = malloc(nmemb * sizeof(size));
    if (!ptr)
        return (NULL);
    while (nmemb-- > 0)
        *ptr++ = 0;
    return (ptr);
}