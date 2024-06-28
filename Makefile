# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rperez-t <rperez-t@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 14:34:39 by rperez-t          #+#    #+#              #
#    Updated: 2023/11/28 18:35:18 by rperez-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#general info
NAME	= libftprintf.a
OS		= $(shell uname)

#compiler form
CC		= cc
FLAGS	= -Wall -Werror -Wextra

#sources 
COMMON_SRCS = ft_helper_processors.c ft_printf.c ft_process_print.c ft_switcher.c
ifeq ($(OS), Linux)
    SRC_FILES = ft_putptr_linux.c $(COMMON_SRCS)
else ifeq ($(OS), Darwin)
    SRC_FILES = ft_putptr_macos.c $(COMMON_SRCS)
else
    $(error Unsupported operating system)
endif

#objects
OBJS	= ${SRC_FILES:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -c ${SRC_FILES} -I ./
	ar rc ${NAME} ${OBJS}

.c.o:
		${CC} ${FLAGS} -I ./ -c $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean