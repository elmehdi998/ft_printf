/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:38:55 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/21 14:59:07 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_fill(va_list args, char f)
{
	int	count;

	count = 0;
	if (f == 'c')
		count += ft_putchar(va_arg(args, int));
	if (f == 's')
		count += ft_putstr(va_arg(args, char *));
	if (f == 'p')
		count += ft_putadress(va_arg(args, void *));
	if (f == 'd' || f == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (f == 'u')
		count += ft_putnbru(va_arg(args, unsigned int));
	if (f == 'x')
		count += ft_putnbrhexl(va_arg(args, int));
	if (f == 'X')
		count += ft_putnbrhexu(va_arg(args, int));
	if (f == '%')
	{
		ft_putper();
		count++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			count += ft_fill(args, format[i]);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
