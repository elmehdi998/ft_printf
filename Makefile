
NAME = libftprinf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRC =  ft_printf.c  ft_putadress.c  ft_putchar.c  ft_putnbr.c  ft_putnbrhexl.c  ft_putnbrhexu.c  ft_putnbru.c  ft_putper.c  ft_putstr.c
OBJ = $(SRC:%.c=%.o)
RM = rm -f 
AR = ar rcs 

all : $(NAME)
$(NAME) : $(OBJ)
	$(AR) $@ $^
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re 
