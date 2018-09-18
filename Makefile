NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_memset.c ft_putchar.c ft_putnbr_base.c ft_putstr.c ft_strlen.c ft_memalloc.c \
	  ft_strdup.c

OBJ = ft_atoi.o ft_bzero.o ft_memset.o ft_putchar.o ft_putnbr_base.o ft_putstr.o ft_strlen.o ft_memalloc.o \
	  ft_strdup.o

B_PRINTF = b_printf/b_printf.c b_printf/specifiers1.c b_printf/specifiers2.c

B_PRINTF_OBJ = b_printf.o specifiers1.o specifiers2.o

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(SRC) $(B_PRINTF) -I $(NAME)
	@ar rcs $(NAME) $(OBJ) $(B_PRINTF_OBJ)

clean:
	@rm -rf $(OBJ) $(B_PRINTF_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
