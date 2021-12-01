#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

#	define BUFFER_SIZE 10

char    *get_next_line(int fd);
int     ft_strlen(char *str);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_strchr(char *s, int c);

#endif 
