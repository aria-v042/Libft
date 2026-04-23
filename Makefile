# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 21:45:22 by frodrig2          #+#    #+#              #
#    Updated: 2026/04/23 17:37:15 by frodrig2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFlAGS = -Wall -Wextra -Werror
SRCS = $(shell find . -name 'ft_*.c')
OBJS = $(SRCS:.c=.o)
TEST_C = test.c
T_OUT = runtests

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFlAGS) -c $(SRCS) -o $(OBJS)

test: all
	$(CC) $(CFLAGS) $(TNAME) $(NAME) -o $(TOUT)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

tclean: fclean
	rm -f $(TOUT)

re: fclean all
