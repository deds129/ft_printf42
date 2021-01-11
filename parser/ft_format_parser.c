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

int check_flags(t_flags flags)
{
	return (flags.dot > -1 || flags.minus || flags.zero || flags.width || flags.star);
}

t_flags flag (const char *format, va_list args, int *i)
{
	t_flags flags;
	int j;

	flags = ft_struct_init();

}