
#include "includes/ft_printf.h"

int set_minus(t_flags *flag,int i)
{
	flag -> minus = 1;
	flag -> zero = 0;
	return (++i);
}

int set_zero(t_flags *flag,int i)
{
	flag -> zero = 1;
	return (++i);
}

int		set_dot(const char *form, t_flags *flag, int i, va_list args)
{
	i++;
	flag->dot = 0;
	if (form[i] == '*')
	{
		flag->dot = va_arg(args, int);
		i++;
	}
	else
		while (ft_isdigit(form[i]))
			flag->dot = (flag->dot * 10) + (form[i++] - '0');
	return (i);
}

int		set_star(t_flags *flag, int i, va_list ap)
{
	flag->star = 1;
	flag->width = va_arg(ap, int);
	if (flag->width < 0)
	{
		flag->minus = 1;
		flag->zero = 0;
		flag->width *= -1;
	}
	return (i + 1);
}

int		set_width(const char c, t_flags *flag, int i)
{
	if (flag->star)
		flag->width= 0;
	flag->width = (flag->width * 10) + (c - '0');
	return (i + 1);
}