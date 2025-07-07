/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 09:31:42 by yussen            #+#    #+#             */
/*   Updated: 2025/07/07 17:17:18 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_calculator(char sign , int c, ...)
{
	va_list	args;
	int	i = 0;
	int	a = 0;
	int x = 1;
	int d = 0;
	int division = 0;
	int	flag = 0;
	va_list *temp;
	
	temp = &args;
	va_start(args, c);
	if (sign == '/')
	{
		division = va_arg(*temp, int);
		i++;
	}
	if (sign == '-')
	{
		d = va_arg(*temp, int);
		i++;
	}
	while (i < c)
	{
		if (sign == '+')
		{
			a += va_arg(*temp, int);
			i++;
		}
		if (sign == '-')
		{
			d -= va_arg(*temp, int);
			flag = 2;
			i++;
		}
		if (sign == '*')
		{
			x *= va_arg(*temp, int);
			i++;
			flag = 3;
		}
		if (sign == '/')
		{
			division /= va_arg(*temp, int);
			i++;
			flag = 4;
		}
	}
	va_end(args);
	if (flag == 2)
		return (d);
	else if(flag == 3)
		return (x);
	else if (flag == 4)
		return (division);
	else
		return(a);
}