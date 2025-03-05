/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:31:26 by sarabermude       #+#    #+#             */
/*   Updated: 2025/03/04 00:19:20 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft___my_srcs.h"

int	ft_putnbr_hmax(unsigned int X)
{
	if (X >= 16)
	{
		ft_putnbr_hmax(X / 10);
		write(1, &"0123456789ABCDF"[X % 16], 1);
	}
	return (0);
}
