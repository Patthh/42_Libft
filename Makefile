NAME = libft.a

SRCS = $(wildcard *.c)
#SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_memcpyi.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c

BSRCS = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c #ft_lstiter.c ft_lstmap.c

INCLUDE = includes

CC = cc

CFLAG = -Wall -Wextra -Werror

LIBC = ar rc

LIBR = ranlib

RM = rm -f

OBJECT = ${SRCS:.c=.o}
BOBJECT = ${BSRCS:.c=.o}

.c.o:
	${CC} ${CFLAG} -c $< -o ${<:.c=.o} -I ${INCLUDE} 

${NAME}: ${OBJECT}
	${LIBC} ${NAME} ${OBJECT}
	@echo "created ${NAME} sucessfully"
	${LIBR} ${NAME}

all: ${NAME}

bonus: ${OBJECT} ${BOBJECT}
	${AR} -r ${NAME}
	@echo "bonus created"

clean: 
	${RM} ${OBJECT}
	@echo "ALL GONE(except .a file)"

fclean: clean
	${RM} ${NAME}
	@echo "${NAME} GONE"

re: fclean all

.PHONY: all, clean, fclean, re, bonus
