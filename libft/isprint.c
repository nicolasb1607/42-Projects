#include "include/libft.h"

int ft_print(int c)
{
    if (c >= 32 && c <= 126)
        return(1);    
    return (0); 
}