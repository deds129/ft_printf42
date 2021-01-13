#include "../includes/ft_printf.h"

int ft_flag_handler(int width, int minus, int zero)
{
	int count;

	count = 0;

	width -=1;
	while (width > 0)
	{
		if (zero == 1)
			ft_putchar_fd('0',1);
		else
			ft_putchar_fd(' ',1);
		width--;
		count++;
	}
	return 0;
}

