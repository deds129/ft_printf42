#include "../includes/ft_printf.h"

// cspdiuxX%
int ft_processor(int i,t_flags flag,va_list args)
{
	int value;

	if (flag.type == 'c')
		value = ft_char_type(args,flag);
	else if (flag.type == 's')
		value = ft_string_type(args,flag);

	return value;
}
