/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: een-nasi <een-nasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:38:55 by een-nasi          #+#    #+#             */
/*   Updated: 2024/11/19 14:55:11 by een-nasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprinf.h"



static int ft_fill(va_list args , char s)
{
	int count ; 
	count =0;
	if(str[i]=='c')
	 		count += ft_putchar(va_arg(args,int));
	if(str[i]=='s')
			count += ft_putstr(va_arg(args,char *));
	if(str[i]=='p')
			count += ft_putper(va_arg(args,void *));
	if(str[i]=='d' || str[i]=='i')
			count += ft_putnbr(va_arg(args,int));
	if(str[i]=='u')
			count += ft_putnbru(va_arg(args,unsigned int ));
	if(str[i]=='x')
			count += ft_putnbrhexl(va_arg(args,int));
	if(str[i]=='X')
			count += ft_putnbrhexu(va_arg(args,int));
	if(str[i]=='%')
	{
		ft_putper();
		count++;
	}	
	return count;
	
}

int ft_printf(const char *str, ...)
{
	int i;
	int count;
	va_list args;
	i=0;
	count =0;
	va_start(args,str);
	while(str[i])
	{
		if(str[i]== '%' && str[i+1] != '\0')
		{
			i++;
			count += ft_fill(args,str[i]);	
		}
		else
			count += write(1,&str[i],1);
		i++;
	}
	va_end(args);
	return count;
	
}
