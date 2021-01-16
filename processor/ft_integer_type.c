#include "../includes/ft_printf.h"



int ft_integer_type(int i,t_flags flags)
{
	int ret_value;

	ret_value = ft_digitlen(i);
	return ret_value;
}

