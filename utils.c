/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:24:09 by yussen            #+#    #+#             */
/*   Updated: 2025/06/29 18:27:43 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

unsigned long long	base(unsigned long long n)
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

int	ft_base(int n)
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