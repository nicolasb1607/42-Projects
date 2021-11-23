#include "include/libft.h"
#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>

int main()
{
    printf("Test of LIBFT\n");

    printf("------------------------------------------\n");
 
    printf("isalpha with 5 : %d \n", isalpha(53));
    printf("isalpha with a : %d \n", isalpha(97));
    printf("ft_isalpha with 5: %d \n", ft_isalpha(53));
    printf("ft_isalpha with a: %d \n ", ft_isalpha(97));
 
    printf("------------------------------------------\n");
 
    printf("isdigit with 5 : %d \n", isdigit(53));
    printf("isdigit with a : %d \n", isdigit(97));
    printf("ft_isdigit with 5 : %d \n", ft_isdigit(53));
    printf("ft_isdigit with a : %d \n", ft_isdigit(53));

    printf("------------------------------------------\n");

    printf("isalnum with ! : %d \n", isalnum('!'));
    printf("isalnum with a : %d \n", isalnum('a'));
    printf("ft_isalnum with ! : %d \n", ft_isalnum('!'));
    printf("ft_isalnum with a : %d \n", ft_isalnum('a'));

    printf("------------------------------------------\n");

    printf("isascii 200 : %d \n", __isascii(200));
    printf("isascii 150 : %d \n", __isascii(90));
    printf("ft_isascci 200 : %d \n", ft_isascii(200));
    printf("ft_isascci 150 : %d \n", ft_isascii(90));

    printf("------------------------------------------\n");

    printf("isprint with nl : %d \n", isprint('\n'));
    printf("isprint with 5 : %d \n", isprint(53));
    printf("ft_isprint with nl : %d \n", ft_isprint('\n'));
    printf("ft_isprint with 5 : %d \n", ft_isprint(53));

    printf("------------------------------------------\n");

    printf("strlen  hello : %d \n", (int) strlen("hello"));
    printf("ft_strlen  hello : %d \n", ft_strlen("hello"));
    
    printf("------------------------------------------\n");

    printf("MEMSET Test, reset hello string to 55555 \n");
    char s3[6] = "hello";
    char s4[6] = "hello";
    printf("memset : %s \n", (char *) memset(s3, '5', 5));
    printf("ft_memset : %s \n",(char *) ft_memset(s4, '5', 5));

    printf("------------------------------------------\n");

    printf("BZERO test avec hello");
    char s5[6] = "hello";
    char s6[6] = "hello";
	bzero(s5, 5);
	ft_bzero(s6, 5);
    printf("bzero : %s \n", s5);  
    printf("ft_zero : %s \n", s6);

    printf("------------------------------------------\n");
    
    printf("Test MEMCPY\n");
    char *src = "helloyarars";
	char dest1[8];
    char dest2[8];
	printf("memcpy  copy 6 : %s \n", (char *) memcpy(dest1, src, 6));
	printf("ft_memcpy copy 6 : %s \n", (char *)memcpy(dest2, src, 6));


    printf("------------------------------------------\n");

	char src2[50] = "Overlapingsucks";
	char src3[50] = "Overlapingsucks";
	char dst1[50];
	char dst2[50] = {0};

	printf("memmove : %s \n", (char *) memmove(dst1, src2, 10));
	printf("ft_memmove : %s \n", (char *) ft_memmove(dst2, src3, 10));

    printf("------------------------------------------\n");

	char str1[50] = "I copy that string"
	char str2[50];

	printf("strlcpy : %d", strlcpy(str2, str1, 15));
	printf("ft_strlcpy : %d", ft_strlcpy(str2, str1, 15));
	
    printf("------------------------------------------\n");

	char str3[50] = "I concatanate ";
	char str4[50] = "those strings";

	printf("strlcat : %s \n", strlcat(str3, str4));
	printf("strlcat : %s \n", strlcat(str3, str4));

    printf("------------------------------------------\n");

	printf("toupper a: %c", toupper('a'));
	printf("ft_toupper a : %c", ft_toupper('a'));

    printf("------------------------------------------\n");

	printf("tolower A : %c \n", tolower('A'));
	printf("ft_tolower A : %c \n", ft_tolower('A'));
	
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    return (0);
}