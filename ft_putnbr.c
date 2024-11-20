/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:12:59 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/20 16:33:46 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		count;
	char	n;

	count = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			count = write(1, "-2147483648", 11);
			return (count);
		}
		nb = -nb;
		count += write(1, "-", 1);
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	n = nb % 10 + 48;
	count += write(1, &n, 1);
	return (count);
}
