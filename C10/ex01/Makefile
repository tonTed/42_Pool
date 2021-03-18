# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 10:29:51 by tblanco           #+#    #+#              #
#    Updated: 2021/03/03 10:31:15 by tblanco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= 	gcc
CFLAGS	= 	-Wall -Wextra -Werror

NAME	= 	ft_cat

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