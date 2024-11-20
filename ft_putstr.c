/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:13:09 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/20 11:19:56 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		count += (write(1, &str[i], 1));
		i++;
	}
	return (count);
}
