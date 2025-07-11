NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_printf.c \
		ft_ifd.c \
		ft_itoa.c \
		ft_whats_format.c \
		ft_strlen.c \
		ft_ifc.c \
		ft_ifs.c \
		ft_ifu.c \
		ft_ifp.c \
		ft_ifx.c \
		ft_ifX.c \
		ft_utils.c

OBJ = $(SRC:.c=.o)


all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean