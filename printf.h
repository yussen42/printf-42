/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yussen <yussen@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 02:28:35 by yussen            #+#    #+#             */
/*   Updated: 2025/06/30 10:07:02 by yussen           ###   ########.fr       */
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
int					ifp(size_t pointer);
int					ifx(unsigned int lowerhexadecimal);
int					ifx_up(unsigned int upperhexadecimal);
unsigned long long	base(unsigned long long n);
int					ft_base(int n);

#endif