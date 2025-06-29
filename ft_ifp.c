/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:35:56 by yussen            #+#    #+#             */
/*   Updated: 2025/06/29 18:24:24 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	print_pointer(char *res, char *temp, unsigned long long pointer)
{
	int		i;
	int		return_v;

	i = base(pointer);
	return_v = base(pointer);
	temp[i] = '\0';
	ifs("0x");
	while (pointer)
	{
		temp[-1 + (i--)] = res[pointer % 16];
		pointer /= 16;
	}
	ifs(temp);
	free (temp);
	return (return_v + 2);
}

int	ifp(unsigned long long pointer)
{
	char	*temp;
	char	*res;

	res = "0123456789abcdef";
	if (pointer == '\0')
		return (ifs("(nil)"));
	temp = malloc(base(pointer));
	if (!temp)
		return (0);
	return (print_pointer(res, temp, pointer));
}
