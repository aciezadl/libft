CC = cc
CFLAGS = -Wall -Werror -Wextra -I.
SRC = ft_bzero.c ft_putnbr_fd.c ft_split.c ft_striteri.c ft_putendl_fd.c ft_putstr_fd.c \
    ft_putchar_fd.c ft_strmapi.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_itoa.c \
    ft_calloc.c ft_strdup.c  ft_atoi.c  ft_isalpha.c  ft_isdigit.c  ft_memchr.c  \
    ft_memcpy.c   ft_memset.c  ft_strlcat.c  ft_strlen.c   ft_strnstr.c  ft_tolower.c \
    ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memcmp.c  ft_memmove.c  ft_strchr.c  \
    ft_strlcpy.c  ft_strncmp.c  ft_strrchr.c  ft_toupper.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	ft_lstiter.c ft_lstmap.c
NAME = libft.a
OBJETS = $(SRC:.c=.o)
OBJETS_BONUS = $(BONUS:.c=.o)

all: printf/printf.a $(NAME)

printf/printf.a:
	make -C printf

$(NAME): $(OBJETS)
	ar rc $(NAME) $(OBJETS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJETS) $(OBJETS_BONUS)
	make -C printf clean

fclean: clean
	rm -f $(NAME)
	make -C printf fclean

re: fclean all

bonus: $(OBJETS) $(OBJETS_BONUS)
	ar rcs $(NAME) $(OBJETS) $(OBJETS_BONUS)

.PHONY: all clean fclean re bonus 

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS)
	cc -nostartfiles -shared -o libft.so $(OBJETS) $(OBJETS_BONUS)