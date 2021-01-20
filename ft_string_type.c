#include "includes/ft_printf.h"
int ft_minus_handle(int ret_value,char *str,t_flags flags)
{
	if (flags.dot < 0)
	{
		ret_value += ft_dot_out(str,ft_strlen(str));
		ret_value += ft_flag_handler(flags.width - ft_strlen(str)+1,1,0);
	}
	else
	{
		ret_value+= ft_dot_out(str,flags.dot);
		ret_value+= ft_flag_handler(flags.width - flags.dot + 1,1,0);
	}
	return (ret_value);
}


int ft_string_type(char *str,t_flags flags)
{
	int ret_value;

	ret_value = 0;
	if (!str)
		str = "(null)";
	if (flags.dot >= 0 && flags.dot > (int)ft_strlen(str))
		flags.dot = (int)ft_strlen(str);
	if (flags.minus == 0)
	{
		if (flags.dot < 0)
		{
			ret_value += ft_flag_handler(flags.width - (int)ft_strlen(str)+1,1,0);
			ret_value += ft_dot_out(str,(int)ft_strlen(str));
		}
		else
		{
			ret_value += ft_flag_handler(flags.width - flags.dot,0,0);
			ret_value += ft_dot_out(str,flags.dot);
		}
	}
	else
		ret_value += ft_minus_handle(ret_value,str,flags);
	return (ret_value);
}