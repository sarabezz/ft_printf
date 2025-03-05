/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:16:55 by sarabermude       #+#    #+#             */
/*   Updated: 2025/03/04 00:19:38 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft___my_srcs.h"

void	ft_putnbr_hex(unsigned long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_putnbr_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	ft_putptr(void *p)
{
	unsigned long	ptr;

	ptr = (unsigned long)p;
	write(1, "0x", 2);
	ft_putnbr_hex(ptr);
	return (1);
}
