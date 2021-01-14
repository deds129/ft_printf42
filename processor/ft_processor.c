#include "../includes/ft_printf.h"

// cspdiuxX%
int ft_processor(int i,t_flags flags,va_list args)
{
	int value;

	if (flags.type == 'c')
		value = ft_char_type(args,flags);
	else if (flags.type == '%')
		value = ft_perc_type(flags);
	else if (flags.type == 's')
		value = ft_string_type(args,flags);

	return value;
}
