/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:15:17 by yussen            #+#    #+#             */
/*   Updated: 2025/06/30 10:05:21 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ifx(unsigned int lowerhexadecimal)
{
	char	*temp;
	int		i;
	char	*res;
	int		return_v;

	res = "0123456789abcdef";
	if (lowerhexadecimal == 0)
		return (ifs("0"));
	i = base(lowerhexadecimal);
	return_v = base(lowerhexadecimal);
	temp = malloc(base(lowerhexadecimal) + 1);
	if (!temp)
		return (0);
	temp[i] = '\0';
	while (lowerhexadecimal)
	{
		temp[i-- - 1] = res[lowerhexadecimal % 16];
		lowerhexadecimal /= 16;
	}
	ifs(temp);
	free(temp);
	return (return_v);
}
