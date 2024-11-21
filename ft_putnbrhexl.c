/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:40:11 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/21 13:51:23 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_writel(unsigned int nb)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = write(1, &hex[nb % 16], 1);
	return (count);
}

int	ft_putnbrhexl(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_putnbrhexl(nb / 16);
	count += ft_writel(nb);
	return (count);
}
