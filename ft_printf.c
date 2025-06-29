/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 02:30:17 by yussen            #+#    #+#             */
/*   Updated: 2025/06/28 10:35:25 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		return_v;

	i = 0;
	return_v = 0;
	va_start(args, format);
	while (i <= ft_strlen(format))
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			ifc('%');
			i += 2;
			return_v++;
		}
		if (format[i] == '%' && format[i + 1] != '%')
			return_v += whatsformat(&args, (char)format[++i]);
		else
			return_v += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (return_v -1);
}
