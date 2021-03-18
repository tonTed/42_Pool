# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tonted <tonted@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 18:37:07 by tonted            #+#    #+#              #
#    Updated: 2021/03/01 21:35:46 by tonted           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror

HEADS	= $(wildcard ./includes/*.h)

SRC		= $(wildcard ./src/*.c) $(wildcard ./main.c)
OBJS	= $(SRC:.c=.o)

SRCL	= $(wildcard ./libs/*.c)
OBJSL	= $(SRCL:.c=.o)

SRCM	= $(wildcard main.c)
OBJSM	= $(SRCM:.c=.o)

RM		= rm -f

NAME	= do-op
NAMEL	= libft.a

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(OBJSM)
			$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean	:	
			RM $(OBJS)

fclean	:	clean
			RM $(NAME)

# $(NAME)	:	lib $(OBJSM)
# 			$(CC) -o $(NAME) $(CFLAGS) $(OBJSM) -L. -lft && ./$(NAME) && RM $(NAME)

# clean	:	
# 			RM $(OBJM) $(OBJSL) $(OBJM) 

# fclean	:	clean
# 			RM $(NAME) $(NAMEL)

re		:	fclean all

lib		:	$(OBJSL)
			ar rc $(NAMEL) $(OBJSL) $(HEADS)