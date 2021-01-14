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

#include "../includes/ft_printf.h"

int ft_perc_type(t_flags flags)
{
	int ret_value;

	ret_value = flags.width;
	if (!(flags.dot > -1 || flags.minus || flags.zero || flags.width || flags.star))
	{
		ft_putchar_fd('%', 1);
		return (++ret_value);
	}
	if (flags.minus && flags.width)
		ft_putchar_fd('%',1);
	ret_value = ft_flag_handler(flags.width,flags.minus,flags.zero);
	if (!flags.minus && flags.width)
		ft_putchar_fd('%',1);
	return (++ret_value);
}

