/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:13:55 by yussen            #+#    #+#             */
/*   Updated: 2025/07/02 19:00:59 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static unsigned int	base_unsigned(unsigned int n)
{
	unsigned int	res;

	res = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

int	ifu(unsigned int unum)
{
	unsigned int	temp;

	temp = unum;
	if (unum > 9)
	{
		ifu(unum / 10);
		ifu(unum % 10);
	}
	else
		ft_putchar(unum + 48);
	return (base_unsigned(temp));
}
