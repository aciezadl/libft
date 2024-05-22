CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_strlen.c \
	ft_putstr_fd.c ft_converthl.c ft_converthu.c ft_converthp.c \
	ft_putnbr_fd_un.c 

NAME = libftprintf.a
OBJETS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJETS)
	ar rc $(NAME) $(OBJETS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJETS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
