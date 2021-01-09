# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hanisha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/09 12:27:45 by hanisha           #+#    #+#              #
#    Updated: 2021/01/09 12:27:49 by hanisha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS =
OBJS = $(SRCS:.c=.o)

INC = libft.h
CC      = gcc
AR      = ar rc
RANL    = ranlib
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I ${INC} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS} ${INC}
			${AR} ${NAME} ${OBJS}
			${RANL} ${NAME}

all:		${NAME}

bonus:		${OBJS} ${O_BONUS}
			${AR} ${NAME} ${O_BONUS}
			${RANL} ${NAME}

clean:
			${RM} ${OBJS} ${O_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
.PHONY:		all clean fclean re bonus
