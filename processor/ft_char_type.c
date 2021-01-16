#include "../includes/ft_printf.h"

int ft_char_type(char c,t_flags flags)
{
	int ret_value;
	ret_value = flags.width;
	if (flags.minus)
		ft_putchar_fd(c,1);
	ret_value = ft_flag_handler(flags.width,flags.minus,flags.zero);
	if (!flags.minus)
		ft_putchar_fd(c,1);
	return (++ret_value);
}

