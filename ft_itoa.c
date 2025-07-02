/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:22:57 by yussen            #+#    #+#             */
/*   Updated: 2025/07/03 02:27:01 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*fill(int n, char *res, int i)
{
	char	tmp;

	if (n == 0)
	{
		res[i] = '0';
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		if (n == -2147483648)
		{
			res[i--] = '8';
			n = -214748364;
		}
		n *= -1;
	}
	while (n)
	{
		tmp = (n % 10) + '0';
		res[i] = tmp;
		n = n / 10;
		i--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		n_base;
	char	*res;

	n_base = base_i(n);
	res = (char *)malloc(n_base + 1);
	if (!res)
		return (NULL);
	res[n_base] = '\0';
	fill(n, res, n_base - 1);
	return (res);
}
