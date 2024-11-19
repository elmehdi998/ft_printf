/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:40:11 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/19 11:57:46 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_writel( int nb)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = write(1, &hex[nb % 16], 1);
	return (count);
}

int	ft_putnbrhexl(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			count = write(1, "-80000000", 9);
			return (count);
		}
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 16)
		count += ft_putnbrhexl(nb / 16);
	count += ft_writel(nb);
	return (count);
}
