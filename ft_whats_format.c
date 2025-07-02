/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whats_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:54:27 by yussen            #+#    #+#             */
/*   Updated: 2025/07/03 02:30:48 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	whats_format(va_list *args, char c)
{
	int	i;

	i = 0;
	if (c == 'd' || c == 'i')
		i += ifd(va_arg(*args, int));
	else if (c == 'c')
		i += ifc(va_arg(*args, int));
	else if (c == 's')
		i += ifs(va_arg(*args, char *));
	else if (c == 'u')
		i += ifu(va_arg(*args, unsigned int));
	else if (c == 'p')
		i += ifp(va_arg(*args, size_t));
	else if (c == 'x')
		i += ifx(va_arg(*args, unsigned int));
	else if (c == 'X')
		i += ifx_up(va_arg(*args, unsigned int));
	return (i);
}
