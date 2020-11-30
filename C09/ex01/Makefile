# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aliens <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/30 11:18:14 by aliens            #+#    #+#              #
#    Updated: 2020/10/01 10:26:17 by aliens           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= $(addprefix srcs/, ${SRCS:.c=.o})

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

${NAME}:	${OBJS}
			ar -rcs $@ $^

.c.o:
			${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
