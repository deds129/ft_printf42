#include "../includes/ft_printf.h"

int ft_char_type(va_list arg,t_flags flag)
{
	int ret_value;

	ret_value = flag.width;
	if (flag.minus)
		ft_putchar_fd(va_arg(arg,int),1);
	ret_value = ft_flag_handler(flag.width,flag.minus,flag.zero);
	if (!flag.minus)
		ft_putchar_fd(va_arg(arg,int),1);
	return (++ret_value);
}

