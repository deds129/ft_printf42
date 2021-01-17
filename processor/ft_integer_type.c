#include "../includes/ft_printf.h"
//[−2 147 483 648, +2 147 483 647]
//длина указанного целого числа с учетом -
int ft_digitlen(int num)
{
	int len = 0;
	while (num)
	{
		num/=10;
		len++;
	}
	//для нуля
	if (num < 0)
		len++;
	return (len);
}

void	ft_newputnbr(int n)
{
	unsigned int	n1;

	n1 = 0;
	if (n < 0)
	{
		//ft_putchar_fd('-', fd);
		n1 = n * -1;
	}
	else
		n1 = (unsigned int)n;
	if (n1 >= 10)
		ft_newputnbr(n1 / 10);
	ft_putchar_fd(n1 % 10 + '0', 1);
}



int ft_integer_type(int i, t_flags flags)
{
	int ret_value;
	ret_value = ft_digitlen(i);
	if (flags.dot < 0)
	{
		if(flags.minus == 1)
		{
			if (i < 0)
			{
				ft_putchar_fd('-',1);
				ret_value++;
				ft_newputnbr(i);
				ret_value += ft_flag_handler(flags.width - ft_digitlen(i),flags.minus,flags.zero);
			}
			else
			{
				ft_newputnbr(i);
				ret_value += ft_flag_handler(flags.width - ft_digitlen(i) +1,flags.minus,flags.zero);
			}

		}
		else if (flags.zero == 1)
		{
			if (i < 0)
			{
				ft_putchar_fd('-',1);
				ret_value++;
				ret_value += ft_flag_handler(flags.width - ft_digitlen(i) - 1,flags.minus,flags.zero);
				ft_newputnbr(i);
			}
			else
			{
				ret_value += ft_flag_handler(flags.width - ft_digitlen(i),flags.minus,flags.zero);
				ft_newputnbr(i);
			}
		}
		else
		{
			ret_value += ft_flag_handler(flags.width - ft_digitlen(i) - 1 ,flags.minus,flags.zero) + 1;
			ft_putnbr_fd(i,1);
		}
		return (ret_value);
	}

	//dot?
	//скомпоновать / вынести в отдельные функции
	return (ret_value);
}

