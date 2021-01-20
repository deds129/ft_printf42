#include "includes/ft_printf.h"

int ft_flag_handler(int width, int minus, int zero)
{
	int count;
	count = 0;
	while (width - minus > 0)
	{
		if (zero == 1)
			ft_putchar_fd('0',1);
		else
			ft_putchar_fd(' ',1);
		width--;
		count++;
	}
	return (count);
}


int ft_dot_out(char *str,int dot)
{
	int i;

	i = 0;
	while (str[i] && i < dot)
		ft_putchar_fd(str[i++],1);
	return (i);
}

