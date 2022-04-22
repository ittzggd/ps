# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hejang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 01:34:29 by hejang            #+#    #+#              #
#    Updated: 2021/12/17 02:21:05 by hejang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS	=	list.c \
			process_arg.c \
			push.c \
			reverse_rotate.c \
			rotate.c \
			sorting_ba.c \
			sorting_ab.c \
			swap.c \
			main.c
OBJS	= $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3

RM = rm -f

all : $(NAME)

%.o : %.c
		$(CC) $(CFLAG) -c -o $@ $<

$(NAME) : $(OBJS)
		$(MAKE) -C libft
		$(CC) $(CFLAG) $(OBJS) -Llibft	-lft -o $(NAME)	


clean : 
		$(MAKE) -C libft clean
		$(RM) $(RMFLAG) $(OBJS)

fclean : clean
		$(MAKE) -C libft fclean
		$(RM) $(RMFLAG) $(NAME)

re : fclean all

 .PHONY : all clean fclean re
