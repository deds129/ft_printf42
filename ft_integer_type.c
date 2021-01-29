#include "includes/ft_printf.h"
//[−2 147 483 648, +2 147 483 647]
int	ft_iflag(int width, int num, int zero)
{
	int count;

	count = 0;
	if(num < 0)
	{
		width--;
	}
	while (width >= 0)
	{
		if (zero == 1)
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		width--;
		count++;
	}
	return (count);
}

int ft_digitlen(int num)
{
	int len;

	len = 0;
	if(num == 0)
		return 1;
	if (num < 0)
		len++;
	while (num)
	{
		num/=10;
		len++;
	}
	return (len);
}

//печатает число без 0 и возвращает длину числа с учетом знака минус
int	ft_newputnbr(int n)
{
	//кейс с крайним значением int нужно ли переводить в long?
	unsigned int	n1;

	n1 = 0;
	if (n < 0)
		n1 = n * -1;
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
	int dlen;

	ret_value = 0;
	dlen = ft_digitlen(i);

	//case 0
	if (i == 0 && f.dot == 0)
	{
		ret_value += ft_flag_handler(f.width, 0, 0);
		return  ret_value;
	}
	//кода не нужно добивать нулями
	else if (f.width && (f.dot <= dlen || f.dot <= -1))
	{
		if (f.minus == 0 && f.zero == 0)
		{
			ft_flag_handler(f.width - dlen,0,0);
			ft_putnbr_fd(i,1);
			ret_value += f.width;
		}
		else if (f.minus)
		{
			ft_putnbr_fd(i,1);
			ret_value += ft_iflag(f.width - dlen,i,0) + dlen;
		}
	}
	return  ret_value;
}