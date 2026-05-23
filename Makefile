# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 21:45:22 by frodrig2          #+#    #+#              #
#    Updated: 2026/05/22 02:06:03 by frodrig2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = .
SRCS = $(shell find $(SRCS_DIR) -name 'ft_*.c' ! -name 'ft_lst*.c')
BONUS = $(shell find $(SRCS_DIR) -name 'ft_lst*.c')
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)
TEST = test.c
DEBUG ?= $(or $(filter %.c, $(MAKECMDGOALS)), $(TEST))
T_OUT = runtests
D_OUT = debug

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

ifneq ($(filter %.c, $(MAKECMDGOALS)),)
%.c: ;
endif

test: all
	$(CC) $(CFLAGS) $(TEST) $(NAME) -o $(T_OUT) && $(MAKE) fclean

debug: all
	$(CC) $(CFLAGS) -g $(DEBUG) $(NAME) -o $(D_OUT) && $(MAKE) fclean

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

tclean: fclean
	rm -f $(T_OUT)

dclean: fclean
	rm -f $(D_OUT)

re: fclean all

.PHONY: all clean fclean re test debug tclean dclean
