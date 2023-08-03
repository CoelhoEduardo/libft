# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecoelho- <ecoelho-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 17:47:45 by ecoelho-          #+#    #+#              #
#    Updated: 2023/07/26 18:31:54 by ecoelho-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=*.c

OBJECTS=$(SRCS:.c=.o)

all: ${NAME}

${NAME}: ${OBJS} 
	cc -Wall -Wextra -Werror -c ${SRCS}
	ar -rc ${NAME} ${OBJECTS}

clean:
	rm -f *.o

fclean:	clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re
