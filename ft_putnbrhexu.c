/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:57:52 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/19 11:58:16 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_writeu( int nb)
{
	char	*hex;
	int		count;

	hex = "0123456789ABCDEF";
	count = write(1, &hex[nb % 16], 1);
	return (count);
}

int	ft_putnbrhexu(int nb)
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
		count += ft_putnbrhexu(nb / 16);
	count += ft_writeu(nb);
	return (count);
}
#include<stdio.h>
int main()
{
	int nb = 6666;
	printf("%d", ft_putnbrhexu(nb));
}