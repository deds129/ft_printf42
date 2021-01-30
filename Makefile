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

NAME	=	libftprintf.a
CC		=	gcc
RM		=	rm -rf
INCL	=	./includes/

SRCS	=	ft_printf.c\
			ft_char_type.c\
			ft_flag_handler.c\
			ft_format_parser.c\
			ft_integer_type.c\
			ft_perc_type.c\
			ft_pointer_type.c\
			ft_processor.c\
			ft_set_flags.c\
			ft_string_type.c\
			ft_uint_type.c\
			ft_hexint_type.c

CFLAGS =  -Wall -Wextra -Werror -I ${INCL} -c

OBJS = $(SRCS:.c=.o)


all: ${NAME}

${NAME}: comp_lib ${OBJS}
	ar rc ${NAME} ${OBJS} ./libft/*.o
	ranlib ${NAME}

comp_lib:
	$(MAKE) -C ./libft/

clean:
	${RM} ${OBJS}
	$(MAKE) clean -C ./libft


fclean: clean
	${RM} ${NAME}
	$(MAKE) fclean -C ./libft


re: fclean all

.PHONY: all clean fclean re







