/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:15:17 by yussen            #+#    #+#             */
/*   Updated: 2025/06/28 10:35:11 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static unsigned long long	base(unsigned long long n)
{
	unsigned long long	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n != 0)
	{
		n = n / 16;
		res++;
	}
	return (res);
}

int	ifx(unsigned long long lowerhexadecimal)
{
	char	*temp;
	int		i;
	char	*res;
	int		return_v;

	res = "0123456789abcdef";
	i = base(lowerhexadecimal);
	return_v = base(lowerhexadecimal);
	temp = malloc(base(lowerhexadecimal) + 1);
	if (!temp)
		return (0);
	temp[i] = '\0';
	if (lowerhexadecimal == 0)
	{
		temp[i - 1] = '0';
		return_v = 1;
	}
	while (lowerhexadecimal)
	{
		temp[i-- - 1] = res[lowerhexadecimal % 16];
		lowerhexadecimal /= 16;
	}
	ifs(temp);
	free(temp);
	return (return_v);
}
