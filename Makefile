NAME=libft.a

SRCS=Part_I/ft_isalpha.c Part_I/ft_isdigit.c Part_I/ft_isalnum.c Part_I/ft_isascii.c Part_I/ft_isprint.c \
    Part_I/ft_strlen.c Part_I/ft_memset.c Part_I/ft_bzero.c Part_I/ft_memcpy.c Part_I/ft_memmove.c \
    Part_I/ft_strlcpy.c Part_I/ft_strlcat.c Part_I/ft_toupper.c Part_I/ft_tolower.c Part_I/ft_strchr.c \
    Part_I/ft_strrchr.c Part_I/ft_strncmp.c Part_I/ft_memchr.c Part_I/ft_memcmp.c Part_I/ft_strnstr.c \
    Part_I/ft_atoi.c Part_I/ft_calloc.c Part_I/ft_strdup.c Part_II/ft_substr.c Part_II/ft_strjoin.c Part_II/ft_strtrim.c Part_II/ft_split.c \
    Part_II/ft_itoa.c Part_II/ft_strmapi.c Part_II/ft_striteri.c Part_II/ft_putchar_fd.c Part_II/ft_putstr_fd.c \
    Part_II/ft_putendl_fd.c Part_II/ft_putnbr_fd.c gnl/ft_get_next_line.c\

OBJ=$(SRCS:.c=.o)

BONUS=Lists/ft_lstnew.c Lists/ft_lstadd_front.c Lists/ft_lstsize.c \
	Lists/ft_lstlast.c Lists/ft_lstadd_back.c Lists/ft_lstdelone.c \
	Lists/ft_lstclear.c Lists/ft_lstiter.c Lists/ft_lstmap.c \

BONUS_OBJ=$(BONUS:.c=.o)

CC=cc

CFLAGS=-Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}

bonus: $(BONUS_OBJ)

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@
	ar -rcs ${NAME} $@

clean:
	rm -f ${OBJ} ${BONUS_OBJ}

fclean:	clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus
