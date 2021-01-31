/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perc_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 15:44:06 by hanisha           #+#    #+#             */
/*   Updated: 2021/01/14 15:44:09 by hanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		ft_perc_type(t_flags flags)
{
	int ret_value;

	ret_value = 0;
	if (!flags.minus && !flags.zero)
	{
		ret_value += ft_flag_handler(flags.width - 1, 0, 0);
		ft_putchar_fd('%', 1);
		return (++ret_value);
	}
	else if (flags.minus == 1)
	{
		ft_putchar_fd('%', 1);
		ret_value += ft_flag_handler(flags.width - 1, 0, 0);
		return (++ret_value);
	}
	else if (flags.zero && flags.minus != 1)
	{
		ret_value += ft_flag_handler(flags.width - 1, 0, 1);
		ft_putchar_fd('%', 1);
		return (++ret_value);
	}
	return (ret_value);
}
