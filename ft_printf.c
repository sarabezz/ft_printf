/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:39:29 by sarabermude       #+#    #+#             */
/*   Updated: 2025/03/04 00:23:52 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include "__my_srcs/ft___my_srcs.h"

int	ft_conversions(char fmt, va_list args)
{
	if (fmt == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (fmt == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (fmt == 'p')
		return (ft_putpointer(va_arg(args, void *)));
	if (fmt == 'd')
		return (ft_putnbr(va_arg(args, int)));
	if (fmt == 'i')
		return (ft_putfloat(va_arg(args, double)));
	if (fmt == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	if (fmt == 'x')
		return (ft_putnbr_hmin(va_arg(args, unsigned int)));
	if (fmt == 'X')
		return (ft_putnbr_hmax(va_arg(args, unsigned int)));
	if (fmt == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += ft_conversions(*format, args);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
