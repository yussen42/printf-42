/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 09:31:42 by yussen            #+#    #+#             */
/*   Updated: 2025/06/28 11:18:54 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_calculator(char sign , int c, ...)
{
	va_list	args;
	int	i = 0;
	int	a = 0;
	int	b = 1;
	int	flag = 0;
	
	va_start(args, c);
	while (i < c)
	{
		if (sign == '+')
			a += va_arg(args, int);
		if (sign == '-')
			a -= va_arg(args, int);
		if (sign == '*')
		{
			b *= va_arg(args, int);
			flag++;
		}
		if (sign == '/')
		{
			a = va_arg(args, int);
			a /= va_arg(args, int);
			i++;
		}
		i++;
	}
	va_end(args);
	if (flag)
		return (b);
	else
		return(a);
}
