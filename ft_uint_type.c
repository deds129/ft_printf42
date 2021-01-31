#include "includes/ft_printf.h"

static int		ft_num_len(long n)
{
	size_t			len;
	int				f_neg;

	f_neg = 0;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		f_neg++;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_create_num(char *str_num, long num, int len, int f_neg)
{
	if (num != 0)
		str_num = malloc(sizeof(char) * (len + 1));
	else
		return (str_num = ft_strdup("0"));
	if (!str_num)
		return (0);
	if (num < 0)
	{
		f_neg++;
		num *= -1;
	}
	str_num[len] = '\0';
	while (--len)
	{
		str_num[len] = (num % 10) + '0';
		num /= 10;
	}
	if (f_neg == 1)
		str_num[0] = '-';
	else
		str_num[0] = (num % 10) + '0';
	return (str_num);
}

char			*ft_u_itoa(unsigned int num)
{
	int			len;
	long		n;
	int			f_neg;
	char		*ret;

	ret = '\0';
	n = num;
	len = ft_num_len(n);
	f_neg = 0;
	if (!(ret = ft_create_num(ret, n, len, f_neg)))
		return (0);
	return (ret);
}

int				ft_uint_type(unsigned int uint, t_flags f)
{
	int		ret;
	char	*str_num;

	ret = 0;
	uint = (unsigned int)(4294967295 + 1 + uint);
	if (uint == 0 && f.dot == 0)
	{
		ret += ft_flag_handler(f.width, 0, 0);
		return (ret);
	}
	str_num = ft_u_itoa(uint);
	ret += ft_put_int(str_num, uint, f);
	free(str_num);
	return (ret);
}
