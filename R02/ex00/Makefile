# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tonted <tonted@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/27 14:57:43 by tblanco           #+#    #+#              #
#    Updated: 2021/02/27 20:46:06 by tonted           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

SRC		= $(wildcard ./srcs/*.c)
OBJS	= $(SRC:.c=.o)
RM		= rm -f

NAME	= rush-02

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o ${NAME} $(CFLAGS) $(OBJS) && ./$(NAME)

clean:
			RM srcs/*.o

fclean:		clean
			RM $(NAME)

re:			fclean all