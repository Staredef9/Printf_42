# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsalvett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 12:29:23 by fsalvett          #+#    #+#              #
#    Updated: 2022/11/17 12:29:25 by fsalvett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_cases_handlers.c ft_printf.c ft_utils.c ft_cases_handlers_2.c

OBJS = ${SRCS:.c=.o}

CC = gcc
AR = ar
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

all: libft ${NAME}

${NAME}: ${OBJS}
	${AR} -rcs ${NAME} ${OBJS}
	
clean: libftclean
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all

libft: 
	cd libft && ${MAKE} all

libftclean: 
	cd libft && ${MAKE} clean
.PHONY: all clean fclean re .c.o. libft
.SUFFIXES: .c .o
