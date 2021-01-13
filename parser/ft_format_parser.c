/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_parser.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:16:07 by hanisha           #+#    #+#             */
/*   Updated: 2021/01/11 15:16:09 by hanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
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

int		is_type(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
			c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int check_flags(t_flags flags)
{
	return (flags.dot > -1 || flags.minus || flags.zero || flags.width || flags.star);
}

t_flags ft_flag_parse (const char *format, va_list args, int *i)
{
	t_flags flags;
	int j;

	j = *i;
	flags = ft_struct_init();
	while (!is_type(format[j]))
	{
		if (format[j] == '.')
			j = set_dot(format, &flags, j, args);
		if (format[j] == '*')
			j = set_star(&flags, j, args);
		if (format[j] == '-')
			j = set_minus(&flags, j);
		if (format[j] == '0' && !flags.minus && !flags.width) //исключающие
			// друг друга флаги
			j = set_zero(&flags, j);
		if (ft_isdigit(format[j]))
			j = set_width(format[j], &flags, j);
	}
	flags.type = format[j++];
	*i = j;
	printf("-----flags: width: %d | zero %d | minus %d | star %d | dot %d | "
		"type %c",
		flags.width,flags.zero,flags.minus, flags.star, flags.dot, flags.type);
	return (flags);

}