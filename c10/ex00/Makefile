CC= gcc
CFLAGS= -Wall -Wextra -Werror
EXEC= ft_display_file
SRCS= ./ft_putstr.c \
./main.c
INCLUDES=ft.h
OBJS= ${SRCS:.c=.o}

all : ${EXEC}

${EXEC} : ${OBJS}

${OBJS} : ${SRCS}
		${CC} ${CFLAGS} ${SRCS} -o ${EXEC} -I ${INCLUDES}


clean : 
	rm -f ${OBJS}

fclean : clean
	rm -f ${EXEC}

.PHONY : clean fclean
