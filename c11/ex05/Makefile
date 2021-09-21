CC= gcc 
CFLAGS= -Wall -Wextra -Werror
EXEC= do-op
SRCS= ./main.c ./ft_operator.c ft_atoi.c ft_putnbr.c
INCLUDES= ft.h
OBJS= ${SRCS:.c=.o}

all : ${EXEC}

.o : .c
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDES)

${EXEC} : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm -f ${OBJS}

fclean : clean
	rm -f ${EXEC}

re : fclean all

mrproper : all clean

.PHONY : clean fclean re
