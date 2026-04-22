# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frodrig2 <frodrig2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 21:45:22 by frodrig2          #+#    #+#              #
#    Updated: 2026/04/22 18:03:32 by frodrig2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = command cc

CFlAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFlAGS) -c $(SRCS) -o $(OBJS)

test:
	$(CC) $(CFLAGS) *.c -o runtests

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

tclean:
	rm -f runtests

re: fclean all
