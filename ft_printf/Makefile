NAME = libftprintf.a

SRCS =	ft_printf.c\
		ft_put_hexadecimal.c\
		ft_putptr.c\
		ft_put_unsigned_int.c \
		ft_put_int_decimal.c

OBJS = $(SRCS:.c=.o)


LIBC = ar rcs

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re