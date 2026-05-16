/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 00:33:50 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/16 01:29:20 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	size_t		ext;

	while (len && *big)
	{
		l = little;
		ext = 0;
		while ((len - ext) && *b == *l)
		{
			b++;
			l++;
			ext++;
		}
		if (!l)
			return ((char *)big);
		big++;
		b = big;
		len--;
	}
	return (NULL);
}
