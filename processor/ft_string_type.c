#include "../includes/ft_printf.h"

int ft_string_type(t_flags flag, va_list args)
{
	int ret_value;

	ret_value = flag.width;
	if (flag.minus)
		ft_putstr_fd();
	ret_value = ft_flag_handler(flag.width,flag.minus,flag.zero);
	if (!flag.minus)

	return (++ret_value);
}