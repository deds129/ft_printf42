/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:33:27 by hanisha           #+#    #+#             */
/*   Updated: 2021/01/21 16:33:29 by hanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_char_type(char c, t_flags flags)
{
	int ret_value;

	ret_value = 0;
	if (flags.minus)
	{
		ft_putchar_fd(c, 1);
		ret_value++;
	}
	ret_value += ft_flag_handler(flags.width, 1, 0);
	if (!flags.minus)
	{
		ft_putchar_fd(c, 1);
		ret_value++;
	}
	return (ret_value);
}
