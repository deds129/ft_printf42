#include "../includes/ft_printf.h"
int ft_strdotout(char *str,int dot)
{
	int i;

	i = 0;
	while (str[i] && i < dot)
		ft_putchar_fd(str[i++],1);
	return (i);
}



int ft_string_type(char *str,t_flags flags)
{
	int ret_value;

	ret_value = 0;
	if (!str)
		str = "(null)";

	if (flags.dot >= 0 && flags.dot > ft_strlen(str))
		flags.dot = ft_strlen(str);
	if (flags.minus == 0)
	{
		if (flags.dot < 0)
		{
			ret_value += ft_flag_handler(flags.width - ft_strlen(str)+1,1,0);
			ret_value += ft_strdotout(str,ft_strlen(str));
		}
		else
		{
			ret_value += ft_flag_handler(flags.width - flags.dot,0,0);
			ret_value += ft_strdotout(str,flags.dot);
		}
	}
	else
	{
		if (flags.dot < 0)
		{
			//dot
			ret_value += ft_strdotout(str,ft_strlen(str));
			ret_value += ft_flag_handler(flags.width - ft_strlen(str)+1,1,0);

			//!dot
		}
		else
		{
			ret_value+= ft_strdotout(str,flags.dot);
			ret_value+= ft_flag_handler(flags.width - flags.dot + 1,1,0);
		}
	}



	return (ret_value);
}