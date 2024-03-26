NAME = push_swap
CC = cc
OBJS = $(SRCS:.c=.o)
CFLAGS = -Werror -Wextra -Wall -g
RM = rm -rf
SRCS =	check_inputs.c free.c ft_lib.c ft_split.c \
		non_radix.c parse.c push_swap.c push.c \
		radix.c reverse_rotate.c rotate.c \
		sortarray.c swap.c

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)


re: fclean all

.PHONY: all clean fclean re
