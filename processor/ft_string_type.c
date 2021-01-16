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

	ret_value =  0;
	if(!str)
		str = "(null)";

	if (flags.dot >= 0 && flags.dot > ft_strlen(str))
		flags.dot = ft_strlen(str);

}

	return (ret_value);

}
