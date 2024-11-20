/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:38:55 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/20 12:03:21 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_fill(va_list args, char str)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_putchar(va_arg(args, int));
	if (str == 's')
		count += ft_putstr(va_arg(args, char *));
	if (str == 'p')
		count += ft_putadress(va_arg(args, void *));
	if (str == 'd' || str == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (str == 'u')
		count += ft_putnbru(va_arg(args, unsigned int));
	if (str == 'x')
		count += ft_putnbrhexl(va_arg(args, int));
	if (str == 'X')
		count += ft_putnbrhexu(va_arg(args, int));
	if (str == '%')
	{
		ft_putper();
		count++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			count += ft_fill(args, str[i]);
		}
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
