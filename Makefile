# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 21:45:22 by frodrig2          #+#    #+#              #
#    Updated: 2026/04/23 16:49:11 by frodrig2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFlAGS = -Wall -Wextra -Werror

SRCS =	ft_isalpha.c \
		ft_isdigit.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFlAGS) -c $(SRCS) -o $(OBJS)

test: all
	$(CC) $(CFLAGS) test.c $(NAME) -o runtests

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

tclean: fclean
	rm -f runtests

re: fclean all
