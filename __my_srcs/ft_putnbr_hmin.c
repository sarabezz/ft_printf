/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:29:54 by sarabermude       #+#    #+#             */
/*   Updated: 2025/03/04 00:19:24 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft___my_srcs.h"

int	ft_putnbr_hmin(unsigned int x)
{
	if (x >= 16)
	{
		ft_putnbr_hmin(x / 10);
		write(1, &"0123456789abcdef"[x % 16], 1);
	}
	return (0);
}
