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

#endif
