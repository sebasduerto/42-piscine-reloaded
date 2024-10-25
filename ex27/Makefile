# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/21 11:45:34 by sduerto-          #+#    #+#              #
#    Updated: 2024/09/21 12:31:29 by sduerto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ft_display_file.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra -Iinclude

all: ${NAME}

${NAME}: ${OBJS}
	cc	-o	${NAME}	${SRCS}	-Iinclude	${FLAGS}

clean:
	rm	-f	${OBJS}

fclean: clean
	rm	-f	${NAME}

re: all fclean

.PHONY: all clean fclean re
