CC= gcc
CFLAGS= -Wall -Wextra -Werror
EXEC=libft.a
SRCS= ./srcs/ft_putchar.c \
	./srcs/ft_swap.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strlen.c \
	./srcs/ft_strcmp.c
INCLUDES=includes/ft.h
OBJS= ${SRCS:.c=.o}


all	:	${EXEC}

${EXEC} : ${OBJS}
		ar rcs ${EXEC} ${OBJS} 

${OBJS}: ${SRCS} 
		$(CC) $(CFLAGS) -c $< -o $@ -I ${INCLUDES}

clean : 
	rm -f $(OBJS)

fclean : clean 
	rm -f $(EXEC)

re : fclean all

