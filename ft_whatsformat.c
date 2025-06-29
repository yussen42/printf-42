/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whatsformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:54:27 by yussen            #+#    #+#             */
/*   Updated: 2025/06/28 17:55:01 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	whatsformat(va_list *args, char c)
{
	int	i;

	i = 0;
	if (c == 'd' || c == 'i')
		i += ifd(va_arg(*args, int));
	if (c == 'c')
		i += ifc(va_arg(*args, int));
	if (c == 's')
		i += ifs(va_arg(*args, char *));
	if (c == 'u')
		i += ifu(va_arg(*args, unsigned int));
	if (c == 'p')
		i += ifp(va_arg(*args, unsigned long long));
	if (c == 'x')
		i += ifx(va_arg(*args, unsigned long long));
	if (c == 'X')
		i += ifx_up(va_arg(*args, unsigned long long));
	return (i);
}
