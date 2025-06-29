/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 02:28:35 by yussen            #+#    #+#             */
/*   Updated: 2025/06/28 10:57:54 by yussen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H 

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int					ft_printf(const char *format, ...);
int					whatsformat(va_list *args, char c);
int					ifd(int number);
char				*ft_itoa(int n);
size_t				ft_strlen(const char *str);
int					ifc(int character);
int					ifs(char *str);
int					ifu(unsigned int unum);
int					ifp(unsigned long long pointer);
int					ifx(unsigned long long lowerhexadecimal);
int					ifx_up(unsigned long long upperhexadecimal);
int	ft_calculator(char sign , int c, ...);

#endif