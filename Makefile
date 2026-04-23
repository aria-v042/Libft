# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 21:45:22 by frodrig2          #+#    #+#              #
#    Updated: 2026/04/23 17:50:18 by frodrig2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFlAGS = -Wall -Wextra -Werror
SRCS_DIR = .
SRCS = $(shell find $(SRCS_DIR) -name 'ft_*.c')
OBJS_DIR = .
OBJS = $(SRCS:.c=.o)
TEST_C = test.c
T_OUT = runtests

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFlAGS) -c $< -o $@

test: all
	$(CC) $(CFLAGS) $(TEST_C) $(NAME) -o $(T_OUT)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

tclean: fclean
	rm -f $(T_OUT)

re: fclean all
