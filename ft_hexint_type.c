/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexint_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 17:46:13 by deds              #+#    #+#             */
/*   Updated: 2021/01/31 17:46:43 by deds             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

char	*ft_to_base(unsigned long long num, int base, int i, char *ret_str)
{
	while (num)
	{
		if ((num % base) < 10)
			ret_str[i - 1] = (num % base) + 48;
		else
			ret_str[i - 1] = (num % base) + 87;
		num /= base;
		i--;
	}
	return (ret_str);
}

char	*ft_itoa_base(unsigned long long num, int base)
{
	char					*ret_str;
	unsigned long long		temp;
	int						i;

	i = 0;
	temp = num;
	if (temp == 0)
		return (ft_strdup("0"));
	while (num != 0)
	{
		num /= base;
		i++;
	}
	if (!(ret_str = malloc((i + 1) * sizeof(char))))
		return (NULL);
	ret_str[i] = '\0';
	ret_str = ft_to_base(temp, base, i, ret_str);
	return (ret_str);
}

char	*ft_str_touppercase(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int		ft_hexint_type(unsigned int uint, int f_upper, t_flags f)
{
	char		*hexint;
	int			ret;

	ret = 0;
	uint = (unsigned int)(4294967295 + 1 + uint);
	if (uint == 0 && f.dot == 0)
	{
		ret += ft_flag_handler(f.width, 0, 0);
		return (ret);
	}
	hexint = ft_itoa_base(uint, 16);
	if (f_upper > 0)
		hexint = ft_str_touppercase(hexint);
	ret += ft_put_int(hexint, uint, f, 0);
	free(hexint);
	return (ret);
}
