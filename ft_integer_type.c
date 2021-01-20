#include "includes/ft_printf.h"
//[−2 147 483 648, +2 147 483 647]


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

//печатает число без 0 и возвращает длину числа с учетом знака минус
int	ft_newputnbr(int n)
{
	//кейс с крайним значением int нужно ли переводить в long?
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
	return (ft_digitlen(n));
}



int ft_integer_type(int i, t_flags f)
{
	int ret_value;
	ret_value = 0;

	//case 0
	if (i == 0 && f.dot == 0)
	{
		ret_value += ft_flag_handler(f.width, 0, 0);
	}



	// !width && !dot case
	if (f.dot < 0 && f.width < 0)
	{
		if (i >= 0)
			ret_value += ft_newputnbr(i);
		else
		{
			ft_putchar_fd('-', 1);
			ret_value += ft_newputnbr(i) + 1;
		}
	}


	//width != 0 && !dot case
	if (f.width >= 0 && f.dot < ft_digitlen(i))
	{
		if (i >= 0)
		{
			// 3 варианта флагов -, 0, ' '
			if (f.minus == 0 && f.zero == 0)
			{
				ret_value += ft_flag_handler(f.width - ft_digitlen(i),0,0);
				ret_value += ft_newputnbr(i);
			}
			else if (f.minus == 1)
			{
				ret_value += ft_newputnbr(i);
				ret_value += ft_flag_handler(f.width - ft_digitlen(i) + 1,1,0);
			}
			else if (f.zero == 1)
			{
				ret_value += ft_flag_handler(f.width - ft_digitlen(i),0,1);
				ret_value += ft_newputnbr(i);
			}
		}
		else
		{
			if (f.minus == 0 && f.zero == 0)
			{
				ret_value += ft_flag_handler(f.width - ft_digitlen(i) - 1,0,0);
				ft_putchar_fd('-', 1);
				ret_value += ft_newputnbr(i) + 1;
			}
			else if (f.minus == 1)
			{
				ft_putchar_fd('-', 1);
				ret_value += ft_newputnbr(i) + 1;
				ret_value += ft_flag_handler(f.width - ft_digitlen(i),1,0);
			}
			else if (f.zero == 1)
			{
				ft_putchar_fd('-', 1);
				ret_value += ft_flag_handler(f.width - ft_digitlen(i) - 1,0,1);
				ret_value += ft_newputnbr(i) + 1;
			}
		}
	}

	if (f.width >= 0 && f.dot > -1)
	{
		if (i >= 0)
		{
			//"%0.15d",423232342 доп нулями
			if (ft_digitlen(i) < f.dot)
			{
				if (f.width <= f.dot)
					f.width = f.dot;
				if (f.width >= f.dot)
				{
					if (f.minus == 1)
					{
						ret_value += ft_flag_handler(f.dot - ft_digitlen(i),0,1);
						ret_value += ft_newputnbr(i);
						ret_value += ft_flag_handler(f.width - f.dot,0,0);
					}
					else
					{
						ret_value += ft_flag_handler(f.width - f.dot,0,0);
						ret_value += ft_flag_handler(f.dot - ft_digitlen(i) - 1,0,1);
						ret_value += ft_newputnbr(i) + 1;
					}
				}
			}
		}
		else
		{
			if (ft_digitlen(i) <= f.dot)
			{
				if (f.width <= f.dot)
					f.width = f.dot;
				if (f.width >= f.dot)
				{
					if (f.minus == 1)
					{
						ft_putchar_fd('-',1);
						ret_value += ft_flag_handler(f.dot - ft_digitlen(i),0,1);
						ret_value += ft_newputnbr(i) + 1;
						ret_value += ft_flag_handler(f.width - f.dot,0,0);
					}
					else
					{
						ret_value += ft_flag_handler(f.width - f.dot - 1,0,0);
						ft_putchar_fd('-',1);
						ret_value += ft_flag_handler(f.dot - ft_digitlen(i),0,1) + 1;
						ret_value += ft_newputnbr(i);
					}
				}
			}
		}
	}
	return (ret_value);
}