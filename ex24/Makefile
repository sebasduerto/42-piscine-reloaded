# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 11:10:49 by sduerto-          #+#    #+#              #
#    Updated: 2024/09/21 10:57:04 by sduerto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Werror -Wextra -Iincludes

all: ${NAME}

%.o: %.c
	gcc	${FLAGS}	-c	$<	-o	$@

${NAME}: ${OBJS}
	ar	rcs	${NAME}	${OBJS}

clean:
	rm	-f	${OBJS}

fclean: clean
	rm	-f	${NAME}

re: fclean all

.PHONY: all clean fclean re
