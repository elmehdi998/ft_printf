#ifndef LIBFTPRINTF_H
# define LIBFTLIBFTPRINTF_H

#include<stdarg.h>
#include <unistd.h>

int	ft_putchar(char c);
int ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putper(void);
int	ft_putadress(void *adress);
int	ft_putnbru(unsigned int nb);
int	ft_putnbrhexl(unsigned int nb);
int	ft_putnbrhexu(unsigned  int nb);
int	ft_putnbr(int nb);

#endif