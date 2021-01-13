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
			i++;
			flags = ft_flag_parse(format,args,&i);
			result += ft_processor(i,flags,args);
			//конвертируем тип

		}
		else
		{
			//printf("just str");
			ft_putchar_fd(format[i++],1);
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
	va_start(ap,format);

	//заполняем в структуру + обычный тект обрабатываем
	//возвращаемое значени: количество выведенных символов
	result = ft_str_validate(format,ap);

	//вывод значений обработка структуры
	//возвращаемое значени: количество выведенных символов

	//вывести в отдельную функцию

	va_end(ap);
	return (result);
}