/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:32:22 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/20 16:32:39 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putper(void);
int	ft_putadress(void *adress);
int	ft_putnbru(unsigned int nb);
int	ft_putnbrhexl(unsigned int nb);
int	ft_putnbrhexu(unsigned int nb);
int	ft_putnbr(int nb);

#endif