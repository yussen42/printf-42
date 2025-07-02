/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 02:30:17 by yussen            #+#    #+#             */
/*   Updated: 2025/07/03 02:30:18 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		return_v;

	i = 0;
	return_v = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			i += 2;
			return_v += ifc('%');
		}
		else
		{		
			if (format[i] == '%' && (format[i + 1] != '%'))
				return_v += whats_format(&args, (char)format[i += 1]);
			else
				return_v += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (return_v);
}
