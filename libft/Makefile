CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = libft.a
SRCS = ./ft_atoi.c \
	./ft_bzero.c \
	./ft_calloc.c \
	./ft_isalnum.c \
	./ft_isalpha.c \
	./ft_isascii.c \
	./ft_isdigit.c \
	./ft_isprint.c \
	./ft_memchr.c \
	./ft_memcmp.c \
	./ft_memcpy.c \
	./ft_memset.c \
	./ft_strchr.c \
	./ft_strdup.c \
	./ft_strlcat.c \
	./ft_strlcpy.c \
	./ft_strlen.c \
	./ft_strncmp.c \
	./ft_strnstr.c \
	./ft_strrchr.c \
	./ft_tolower.c \
	./ft_toupper.c \
	./ft_substr.c \
	./ft_strjoin.c
INCLUDES = libft.h
OBJS = ${SRCS:.c=.o}

all : $(EXEC)

$(EXEC) : $(OBJS)
		ar rcs $(EXEC) $(OBJS)

.o : .c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

clean :
	rm *.o

fclean : clean
	rm $(EXEC)

re : fclean all

.PHONY : clean fclean re