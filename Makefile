# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 21:45:22 by frodrig2          #+#    #+#              #
#    Updated: 2026/05/18 23:11:54 by frodrig2         ###   ########.fr        #
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
GOPEPPER_C = gopepper.c
T_OUT = runtests
DEBUG_C = debug.c
D_OUT = debug

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFlAGS) -c $< -o $@

test: all
	$(CC) $(CFLAGS) $(TEST_C) $(NAME) -o $(T_OUT)

gopepper: all
	$(CC) $(CFLAGS) $(GOPEPPER_C) $(NAME) -o $(T_OUT)

debug: all
	$(CC) $(CFLAGS) -g $(DEBUG_C) $(NAME) -o $(D_OUT) && make clean

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

tclean: fclean
	rm -f $(T_OUT)

dclean: fclean
	rm -f $(D_OUT)

re: fclean all
