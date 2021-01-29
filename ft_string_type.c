/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:32:55 by hanisha           #+#    #+#             */
/*   Updated: 2021/01/21 16:32:57 by hanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		ft_minus_handle(int ret_value, char *str, t_flags flags)
{
	if (flags.dot < 0)
	{
		ret_value += ft_dot_out(str, ft_strlen(str));
		ret_value += ft_flag_handler(flags.width - ft_strlen(str) + 1, 1, 0);
	}
	else
	{
		ret_value += ft_dot_out(str, flags.dot);
		ret_value += ft_flag_handler(flags.width - flags.dot + 1, 1, 0);
	}
	return (ret_value);
}

int		ft_dot_out(char *str, int dot)
{
	int i;

	i = 0;
	while (str[i] && i < dot)
		ft_putchar_fd(str[i++], 1);
	return (i);
}

int		ft_string_type(char *str, t_flags flags)
{
	int ret_value;
	int len;

	ret_value = 0;
	if (!str)
		str = "(null)";
	len = (int)ft_strlen(str);
	if (flags.dot >= 0 && flags.dot > len)
		flags.dot = len;
	if (flags.minus == 0)
	{
		if (flags.dot < 0)
		{
			ret_value += ft_flag_handler(flags.width - len + 1, 1, 0);
			ret_value += ft_dot_out(str, len);
		}
		else
		{
			ret_value += ft_flag_handler(flags.width - flags.dot, 0, 0);
			ret_value += ft_dot_out(str, flags.dot);
		}
	}
	else
		ret_value += ft_minus_handle(ret_value, str, flags);
	return (ret_value);
}
