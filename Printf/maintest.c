#include "./ft_printf.h"
#include <stdio.h>

int main()
{
    char c = 'z';
    char *str = "ala c bon";
    int nbr = 456;
    unsigned int nbru = 16;

    printf("-----------TEST WITH NO ARG-------------\n");

    printf("%d\n", printf("IT S WORKING\n"));
    printf("%d\n", ft_printf("IT S WORKING\n"));

    printf("-----------TEST %%C-------------\n");

    printf("%d\n", printf("Yolo %c\n", c));
    printf("%d\n", ft_printf("Yolo %c\n", c));

    printf("-----------TEST %%S-------------\n");

    printf("%d\n", printf("Yolo %s\n", str));
    printf("%d\n", ft_printf("Yolo %s\n", str));

    printf("-----------TEST %%D-------------\n");

    printf("%d\n", printf("Yolo %i\n", nbr));
    printf("%d\n", printf("Yolo %d\n", nbr));
    printf("%d\n", ft_printf("Yolo %d\n", nbr));
    printf("%d\n", ft_printf("Yolo %i\n", nbr));

    printf("-----------TEST %%U-------------\n");

    printf("%d\n", printf("Yolo %u\n", nbru));
    printf("%d\n", ft_printf("Yolo %u\n", nbru));

    printf("-----------TEST %%x-------------\n");

   // printf("%d\n", printf("%x\n", nbr));
   // printf("%d\n", ft_printf("%x\n", nbr));

    printf("-----------TEST %%X-------------\n");

    printf("%d\n", ft_printf("%X\n", nbr));
    printf("%d\n", printf("%X\n", nbr));
    
    return 0;
}