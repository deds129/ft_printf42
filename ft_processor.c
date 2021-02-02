/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deds <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 18:02:07 by deds              #+#    #+#             */
/*   Updated: 2021/01/31 18:02:10 by deds             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_processor(int i, t_flags flags, va_list args)
{
	if (flags.type == 'c')
		i = ft_char_type(va_arg(args, int), flags);
	else if (flags.type == '%')
		i = ft_perc_type(flags);
	else if (flags.type == 's')
		i = ft_string_type(va_arg(args, char *), flags);
	else if (flags.type == 'p')
		i = ft_pointer_type(va_arg(args, unsigned long long), flags);
	else if (flags.type == 'd' || flags.type == 'i')
		i = ft_integer_type(va_arg(args, int), flags);
	else if (flags.type == 'u')
		i = ft_uint_type((unsigned int)va_arg(args, unsigned int), flags);
	else if (flags.type == 'x')
		i = ft_hexint_type(va_arg(args, unsigned int), 0, flags);
	else if (flags.type == 'X')
		i = ft_hexint_type(va_arg(args, unsigned int), 1, flags);
	return (i);
}
