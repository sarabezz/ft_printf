/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft___my_srcs.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarabermudez <sarabermudez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:41:12 by sarabermude       #+#    #+#             */
/*   Updated: 2025/03/04 00:22:03 by sarabermude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT___MY_SRCS_H
# define FT___MY_SRCS_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_putpointer(void *p);
int	ft_putnbr(int d);
int	ft_putfloat(double i);
int	ft_putunbr(unsigned int u);
int	ft_putnbr_hmin(unsigned int x);
int	ft_putnbr_hmax(unsigned int X);
int	ft_putpercent(void);

#endif
