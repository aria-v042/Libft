/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 23:40:08 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/18 01:16:46 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	ifroma;
	int	sign;

	while (*s == ' ' || (*s > 8 && *s < 14))
	{
		s++;
	}
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	ifroma = 0;
	while (*s >= '0' && *s <= '9')
	{
		ifroma *= 10;
		ifroma += *s - '0';
		s++;
	}
	return (ifroma * sign);
}
