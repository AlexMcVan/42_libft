NAME =	Libft.a
CC =	gcc

CFLAGS =	-Wall -Wextra -Werror

SRC =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c


OBJS =	${SRC:.c=.o}

OBJS_BONUS =	${BONUS:.c=.o}

all:	${NAME}

$(NAME):	${OBJS}
	@ar rc ${NAME} ${OBJS}
	@ranlib ${NAME}
	@echo "\n PROUT PROUT CACA PROUT \n"

bonus:	${OBJS} ${OBJS_BONUS}
	@ar rc ${NAME} ${OBJS} ${OBJS_BONUS}
	@ranlib ${NAME}

.c.o:	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


clean:
	rm -f ${OBJS} ${OBJS_BONUS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY :	all clean fclean re
