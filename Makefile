NAME = libft.a

SRCS = $(wildcard *.c)
#SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_memcpyi.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c

INCLUDE = includes

CC = cc

CFLAG = -Wall -Wextra -Werror

LIBC = ar rc

LIBR = ranlib

RM = rm -f

OBJECT = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAG} -c $< -o ${<:.c=.o} -I ${INCLUDE} 

${NAME}: ${OBJECT}
	${LIBC} ${NAME} ${OBJECT}
	${LIBR} ${NAME}

all: ${NAME}

clean: 
	${RM} ${OBJECT}

fclean: clean
	${RM} ${NAME}

re: fclean all
