/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:19:47 by sarabermude       #+#    #+#             */
/*   Updated: 2025/03/04 00:22:45 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft___my_srcs.h"

int	ft_putfloat(double d)
{
	ft_putnbr((int)d);
	write(1, ".", 1);
	d = d - (int)d;
	d *= 100;
	ft_putnbr((int)d);
	return (0);
}

