#include "libft.h"

char *ft_strnstr(const char *to_search, const char *to_find, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (to_find == NULL || len == 0)
        return ((char *)to_search);
    while (to_search[i] != '\0')
    {
        j = 0;
        while (to_search[i + j] == to_find[j])
        {
            if (j == len - 1)
                return ((char *)&to_search[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}

/* 
#include "stdio.h"

int main()
{
    const char *to_search = "hello 1 hello 2 hello 3";
    const char *to_find = NULL;


    printf("epingle à la premiere occurence de \"%s\" donne : %s", to_find, ft_strnstr(to_search, to_find, 1));
    return (0);
}
*/ 