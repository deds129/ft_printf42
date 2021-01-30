#include "includes/ft_printf.h"

static  int ft_pointer_handle(char *ptr_str, t_flags f)
{
	int ret;

	ret = 0;
	ret += ft_dot_out("0x",2);
	if (f.dot >= 0)
	{
		ret += ft_flag_handler(f.dot, ft_strlen(ptr_str), 1);
		ret += ft_dot_out(ptr_str,f.dot);
	}
	else
		ret += ft_dot_out(ptr_str,ft_strlen(ptr_str));
	return (ret);
}

int ft_pointer_type(unsigned long long u_ptr, t_flags f)
{
	char *ptr_str;
	int ret;

	ret = 0;
	if (u_ptr == 0 && f.dot == 0)
	{
		ret += ft_dot_out("0x",2);
		ret += ft_flag_handler(f.width, 0, 1);
		return (ret);
	}
	ptr_str = ft_itoa_base(u_ptr, 16);
	//
	if ((size_t)f.dot < ft_strlen(ptr_str))
		f.dot = ft_strlen(ptr_str);
	if (f.minus == 1)
		ret += ft_pointer_handle(ptr_str,f);
	ret += ft_flag_handler(f.width,ft_strlen(ptr_str) + 2, 0);
	if (f.minus == 0)
		ret += ft_pointer_handle(ptr_str,f);
	free(ptr_str);
	return (ret);
}

