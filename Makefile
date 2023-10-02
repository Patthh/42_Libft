NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

INCLUDE = includes

CC = cc

CFLAG = -Wall -Wextra -Werror

LIBC = ar rc

AR = ar

LIBR = ranlib

RM = rm -f

OBJECT = ${SRCS:.c=.o}
BOBJECT = ${BSRCS:.c=.o}

.c.o:
	${CC} ${CFLAG} -c $< -o ${<:.c=.o} -I ${INCLUDE} 

${NAME}: ${OBJECT}
	${LIBC} ${NAME} ${OBJECT}
	@echo "=== created ${NAME} sucessfully ==="
	${LIBR} ${NAME}

all: ${NAME}

bonus: ${OBJECT} ${BOBJECT}
	${AR} -r ${NAME}
	@echo "=== bonus created ==="

clean: 
	${RM} ${OBJECT} ${BOBJECT}
	@echo "== EVERY .o  GONE =="

fclean: clean
	${RM} ${NAME}
	@echo "=== ${NAME} GONE ==="

re: fclean all

.PHONY: all, clean, fclean, re, bonus
