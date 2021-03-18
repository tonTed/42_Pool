# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tonted <tonted@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 20:36:57 by tonted            #+#    #+#              #
#    Updated: 2021/03/03 20:05:22 by tonted           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= 	gcc
CFLAGS	= 	-Wall -Wextra -Werror

NAME	= 	ft_display_file

SRC		= 	$(wildcard ./src/*.c) $(wildcard ./main.c)
OBJS	= 	$(SRC:.c=.o)

RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all