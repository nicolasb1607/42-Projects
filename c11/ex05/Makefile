# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/26 16:17:32 by nburat-d          #+#    #+#              #
#    Updated: 2021/10/26 16:17:47 by nburat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
