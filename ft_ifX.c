/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:05:13 by yussen            #+#    #+#             */
/*   Updated: 2025/06/30 10:05:13 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ifx_up(unsigned int upperhexadecimal)
{
	char	*temp;
	int		i;
	char	*res;
	int		return_v;

	res = "0123456789ABCDEF";
	if (upperhexadecimal == 0)
		return (ifs("0"));
	i = base(upperhexadecimal);
	return_v = base(upperhexadecimal);
	temp = malloc(base(upperhexadecimal) + 1);
	if (!temp)
		return (0);
	temp[i] = '\0';
	while (upperhexadecimal)
	{
		temp[i-- - 1] = res[upperhexadecimal % 16];
		upperhexadecimal /= 16;
	}
	ifs(temp);
	free(temp);
	return (return_v);
}
