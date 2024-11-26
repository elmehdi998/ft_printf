/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:57:52 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/20 16:34:05 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_writeu(unsigned int nb)
{
	char	*hex;
	int		count;

	hex = "0123456789ABCDEF";
	count = write(1, &hex[nb % 16], 1);
	return (count);
}

int	ft_putnbrhexu(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_putnbrhexu(nb / 16);
	count += ft_writeu(nb);
	return (count);
}
