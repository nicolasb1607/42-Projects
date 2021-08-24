CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
EXEC	= libft.a
SRCS	=  src/ft_putchar.c src/ft_swap.c src/ft_putstr.c src/ft_strlen.c src/ft_strcmp.c
INCLUDES = includes/ft.h
OBJS	= ${SRCS:.c=.o}

all	:
			$(CC) -c $(CFLAGS) $(SRCS) -I $(INCLUDES)
			mv ft*.o src/
			ar -rcs $(EXEC) $(OBJS)

clean : 
		rm  $(OBJS)

fclean : clean
		rm $(EXEC)

re : fclean all

