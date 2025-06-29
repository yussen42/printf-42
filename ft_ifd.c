/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:58:25 by yussen            #+#    #+#             */
/*   Updated: 2025/06/29 18:29:50 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
