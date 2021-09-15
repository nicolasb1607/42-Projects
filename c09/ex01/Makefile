# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nburat-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 11:37:50 by nburat-d          #+#    #+#              #
#    Updated: 2021/08/26 11:38:25 by nburat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC= gcc
CFLAGS= -Wall -Wextra -Werror
EXEC=libft.a
SRCS= ./srcs/ft_putchar.c \
	./srcs/ft_swap.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strlen.c \
	./srcs/ft_strcmp.c
INCLUDES=ft.h
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

.PHONY : clean fclean re
