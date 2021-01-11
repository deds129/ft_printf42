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

SRCS = ft_printf.c \

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS =  -Wall -Wextra -Werror

RM 		= rm -rf

.c.o:
	${CC} ${GFLAG} -c $< -o ${<:.c=.o}


all: ${NAME}

${NAME}:    ${OBJS}
	${CC} ${GFLAG} -c ${SRCS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	$(MAKE) clean ./libft
	 ${RM} ${OBJS}

fclean: clean
	$(MAKE) fclean ./libft
	 ${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re