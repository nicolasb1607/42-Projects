SRCS= ./main.c \
	./ft_cat.c

EXEC= ft_cat
OBJS= ${SRCS:.c=.o}

all : ${EXEC}

${EXEC} : ${OBJS}

${OBJS} : ${SRCS}
	gcc -Wall -Wextra -Werror $< -o ${EXEC} 

clean :
	rm -f ${OBJS}

fclean : clean 
	rm -f ${EXEC}

re : fclean all

.PHONY : clean fclean re
