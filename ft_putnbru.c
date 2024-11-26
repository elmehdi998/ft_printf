/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:12:49 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/20 16:34:10 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int nb)
{
	int		count;
	char	c;

	count = 0;
	if (nb > 9)
		count += ft_putnbru(nb / 10);
	c = nb % 10 + 48;
	count += write(1, &c, 1);
	return (count);
}
