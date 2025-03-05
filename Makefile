CC = gcc
CW = -Wall -Wextra -Werror
SRC = ft_printf.c __my_srcs/ft_putchar.c __my_srcs/ft_putstr.c __my_srcs/ft_putpointer.c __my_srcs/ft_putnbr.c __my_srcs/ft_putfloat.c __my_srcs/ft_putunbr.c __my_srcs/ft_putnbr_hmin.c __my_srcs/ft_putnbr_hmax.c __my_srcs/ft_putpercent.c
OBJ = $(SRC:.c=.o)
NAME = __my_srcs/libftprintf.a

all: $(NAME)

$(NAME): ft_printf.o $(OBJ)
	@ar rcs $(NAME) ft_printf.o $(OBJ)
	@echo "$(NAME) creado con éxito"

ft_printf.o: ft_printf.c
	@$(CC) $(CW) -c ft_printf.c -o ft_printf.o

__my_srcs/%.o: __my_srcs/%.c
	@$(CC) $(CW) -c $< -o $@

clean:
	@rm -f __my_srcs/*.o
	@echo "Archivos .o eliminados"

fclean: clean
	@rm -f $(NAME) ft_printf.o
	@echo "$(NAME) eliminado"

re: fclean all

.PHONY: all clean fclean re
