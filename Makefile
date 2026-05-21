# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    $(MAKE)file                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 21:45:22 by frodrig2          #+#    #+#              #
#    Updated: 2026/05/18 23:11:54 by frodrig2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = .
SRCS = $(shell find $(SRCS_DIR) -name 'ft_*.c')
OBJS_DIR = .
OBJS = $(SRCS:.c=.o)
TEST = test.c
DEBUG ?= $(or $(filter %.c, $(MAKECMDGOALS)), $(TEST))
GOPEPPER = gopepper.c
T_OUT = runtests
D_OUT = debug

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

ifneq ($(filter %.c, $(MAKECMDGOALS)),)
%.c: ;
endif

test: all
	$(CC) $(CFLAGS) $(TEST) $(NAME) -o $(T_OUT) && $(MAKE) fclean

gopepper: all
	$(CC) $(CFLAGS) $(GOPEPPER) $(NAME) -o $(T_OUT) && $(MAKE) fclean

debug: all
	$(CC) $(CFLAGS) -g $(DEBUG) $(NAME) -o $(D_OUT) && $(MAKE) fclean

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

tclean: fclean
	rm -f $(T_OUT)

dclean: fclean
	rm -f $(D_OUT)

re: fclean all

.PHONY: all clean fclean re test gopepper debug tclean dclean
