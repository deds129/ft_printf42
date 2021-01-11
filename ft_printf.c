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

#include "includes/ft_printf.h"

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

t_flags ft_struct_init()
{
	t_flags elem;

	elem.type = 0;
	elem.width = 0;
	elem.minus = 0;
	elem.zero = 0;
	elem.dot = -1;
	elem.star = 0;
	return (elem);
}

int ft_str_validate(const char *format, va_list args)
{
	int i;
	int result;
	t_flags flags;

	result = 0;
	i = 0;

	while(1)
	{
		if(!format[i])
			break;
		else if (format[i] == '%' && format[i + 1] != '\0' )
		{
			/*realisation*/
			//заполняем структуру
			flags =
			//конвертируем тип
		}
		else
		{
			ft_putchar_fd(format[++i],1);
			result++;
		}
	}
	return  (result);
}

int ft_printf(const char *format, ...)
{
	va_list ap; //инициализиуем лист параметров
	int result;
	result = 0;
	//str validate
	result = ft_str_validate(format, ap);
	va_start(ap,format);

	//вывести в отдельную функцию

	va_end(ap);
	return (result);
}