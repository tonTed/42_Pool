NAME	= libft.a

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

SRC		= $(wildcard ./srcs/*.c)
HEADS	= $(wildcard ./includes/*.h)
OBJS	= $(SRC:.c=.o) $(HEADS)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

clean:
			RM srcs/*.o

fclean:		clean
			RM $(NAME)

re:			fclean all
