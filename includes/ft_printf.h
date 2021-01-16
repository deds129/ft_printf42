/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:20:58 by hanisha           #+#    #+#             */
/*   Updated: 2021/01/09 13:21:06 by hanisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"
//it will manage the following conversions: cspdiuxX%

//it will manage any combination of the following flags: ’-0.*’ and minimum
// field
//width with all conversions
typedef struct s_flags
{
	int type; //или в чары все можно(но у меня из либы все функции в int)
	int width;
	int minus;
	int zero;
	int dot;
	int star;

} t_flags;

int ft_printf(const char *s_format, ...);

int set_minus(t_flags *flag,int i);
int set_zero(t_flags *flag,int i);
int	set_dot(const char *f, t_flags *flag, int i, va_list args);
int	set_star(t_flags *flag, int i, va_list ap);
int	set_width(const char c, t_flags *flag, int i);

t_flags ft_struct_init();
int		is_type(char c);
int check_flags(t_flags flags);
t_flags ft_flag_parse (const char *format, va_list args, int *i);

int ft_processor(int i,t_flags flag,va_list args);

int ft_char_type(char c,t_flags flags);
int ft_string_type(char *str,t_flags flags);
int ft_perc_type(t_flags flags);
int ft_integer_type(int i,t_flags flags);
int ft_pointer_type(unsigned long long ptr, t_flags flags);

int ft_flag_handler(int width, int minus, int zero);

#endif
