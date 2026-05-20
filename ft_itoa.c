/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 03:44:18 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/20 03:45:43 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	count;
	long	big;

	count = 0;
	if (n == 0)
		return (++count);
	big = (long) n;
	if (big < 0)
	{
		count++;
		big *= -1;
	}
	while (big > 0)
	{
		count++;
		big /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*aoti;
	long	big;
	size_t	len;

	big = (long) n;
	len = ft_numlen(n);
	aoti = (char *)malloc(sizeof(char) * (len + 1));
	if (!aoti)
		return (NULL);
	aoti[len--] = '\0';
	if (big == 0)
		return (*aoti = '0', aoti);
	if (big < 0)
	{
		*aoti = '-';
		big *= -1;
	}
	while (big > 0)
	{
		aoti[len--] = '0' + (big % 10);
		big /= 10;
	}
	return (aoti);
}
//
//#include <stdio.h>
//
//int	main(void)
//{
//	char	*str;
//
//	str = ft_itoa(-10004);
//	printf("str = %s\n", str);
//	return (0);
//}
