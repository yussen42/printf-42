/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:24:09 by yussen            #+#    #+#             */
/*   Updated: 2025/07/03 02:24:48 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

unsigned long long	base_ull(unsigned long long n)
{
	unsigned long long	res;

	res = 0;
	while (n != 0)
	{
		n = n / 16;
		res++;
	}
	return (res);
}

int	base_i(int n)
{
	int	res;

	res = 0;
	if (n <= 0)
	{
		res++;
	}
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}
