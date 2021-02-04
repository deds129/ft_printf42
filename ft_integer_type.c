/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 18:00:14 by hanisha           #+#    #+#             */
/*   Updated: 2021/01/31 18:00:19 by hanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		ft_dot_handle(char *str, int num, t_flags f, int neg_fl)
{
	int count;

	count = 0;
	if (f.dot >= 0 && num < 0 && num != -2147483648 && neg_fl)
		ft_putchar_fd('-', 1);
	if (f.dot >= 0)
		count += ft_flag_handler(f.dot - 1, ft_strlen(str) - 1, 1);
	count += ft_dot_out(str, ft_strlen(str));
	return (count);
}

int		ft_put_int(char *str, int num, t_flags f, int neg_fl)
{
	int ret_val;

	ret_val = 0;
	if (f.minus == 1)
		ret_val += ft_dot_handle(str, num, f, neg_fl);
	if (f.dot >= 0 && (size_t)f.dot < ft_strlen(str))
		f.dot = ft_strlen(str);
	if (f.dot >= 0)
	{
		f.width -= f.dot;
		ret_val += ft_flag_handler(f.width, 0, 0);
	}
	else
		ret_val += ft_flag_handler(f.width, ft_strlen(str), f.zero);
	if (f.minus == 0)
		ret_val += ft_dot_handle(str, num, f, neg_fl);
	return (ret_val);
}

int		ft_integer_type(int i, t_flags f)
{
	int		ret_value;
	int		num;
	char	*str;

	ret_value = 0;
	num = i;
	if (i == 0 && f.dot == 0)
	{
		ret_value += ft_flag_handler(f.width, 0, 0);
		return (ret_value);
	}
	if (i < 0 && num != -2147483648 && (f.dot >= 0 || f.zero == 1))
	{
		if (f.dot <= -1 && f.zero == 1)
			ft_putchar_fd('-',1);
		i *= -1;
		f.zero = 1;
		f.width--;
		ret_value++;
	}
	str = ft_itoa(i);
	ret_value += ft_put_int(str, num, f, 1);
	free(str);
	return (ret_value);
}
