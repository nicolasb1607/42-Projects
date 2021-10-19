CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = libft.a
SRCS = ./atoi.c \
	./bzero.c \
	./calloc.c \
	./isalnum.c \
	./isalpha.c \
	./isascii.c \
	./isdigit.c \
	./isprint.c \
	./memchr.c \
	./memcmp.c \
	./memcpy.c \
	./memset.c \
	./strchr.c \
	./strdup.c \
	./strlcat.c \
	./strlcpy.c \
	./strlen.c \
	./strncmp.c \
	./strnstr.c \
	./strrchr.c \
	./tolower.c \
	./toupper.c
INCLUDES = libft.h
OBJS = ${SRCS:.c=.o}

all : $(EXEC)

$(EXEC) : $(OBJS)
		ar rcs $(EXEC) $(OBJS)

.o : .c
	$(CC) $(CFLAGS) -c $(SRCS) -o $@ -I $(INCLUDES)

clean :
	rm *.o

fclean : clean
	rm $(EXEC)

re : fclean all

.PHONY : clean fclean re