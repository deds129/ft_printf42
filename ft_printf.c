/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:13:16 by hanisha           #+#    #+#             */
/*   Updated: 2021/01/09 13:13:18 by hanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

int result; // возвращаемое значение

//выводим посимвольно
void	ft_putchar(char c)
{
	write(1, &c, 1);
	result++;
}

int ft_printf(const char *s_format, ...)
{
	va_list ap; //инициализиуем лист параметров
	int i; //cчетчик для строки

	i = 0;
	result = 0;
	va_start(ap,s_format);
	while (s_format[i] != '\0')
	{
		if (s_format[i] == '%' && s_format[i + 1] != '\0' )
		{

		}
		else
			ft_putchar(s_format[i]);
		i++;

	}
	va_end(ap);
	return (result);
}