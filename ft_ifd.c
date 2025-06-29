/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:58:25 by yussen            #+#    #+#             */
/*   Updated: 2025/06/28 10:34:54 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_base(int n)
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

int	ifd(int number)
{
	size_t	return_v;
	char	*res;
	size_t	i;

	return_v = ft_base(number);
	i = 0;
	res = ft_itoa(number);
	while (i <= ft_strlen(res))
	{
		write(1, &res[i], 1);
		i++;
	}
	free (res);
	return (return_v);
}
