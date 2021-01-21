#include "includes/ft_printf.h"

//выводит в консоль пробелы или 0 нули в зависимости от перерданных флагов
//возвращает количество выведенных символов
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


