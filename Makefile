SRCS = ft_printf.c\
	ft_pointer.c\
	ft_putchar.c\
	ft_puthex_lower.c\
	ft_puthex_upper.c\
	ft_putnbr.c\
	ft_putnbr_unsigned.c\
	ft_putstr.c\
	ft_strlen.c

FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
OBJS = $(subst .c,.o,$(SRCS))

all : $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) -c $(SRCS)
	ar -r $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
