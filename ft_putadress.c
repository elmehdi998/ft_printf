/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:47:26 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/20 11:10:42 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_writea(unsigned long nb)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = write(1, &hex[nb % 16], 1);
	return (count);
}

static int	ft_tohex(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_tohex(nb / 16);
	count += ft_writea(nb);
	return (count);
}

int	ft_putadress(void *adress)
{
	int	count;

	count = 0;
	if (!adress)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_tohex((unsigned long)adress);
	return (count);
}
