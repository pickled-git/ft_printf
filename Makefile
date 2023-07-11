NAME	= libftprintf.a
CC		= gcc -Wall -Wextra -Werror
SRCS	= ./src/ft_printf.c ./src/ft_printchar.c \
			./src/ft_printstr.c ./src/ft_printnum.c \
			./src/ft_print_unsigned.c ./src/ft_printhex.c \
			./src/ft_printptr.c
INC     = ./include/
OBJS	= $(SRCS:.c=.o)
RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJS) $(INC)ft_printf.h
			ar rcs $@ $^

%.o: %.c $(INC)ft_printf.h
			$(CC) -I$(INC) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re