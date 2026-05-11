/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 00:06:24 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/11 00:15:36 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen + srclen < size)
	{
		ft_memcpy(dst[dstlen], src, srclen);
		dst[dstlen + strlen] = 0;
	}
	else if (size)
	{
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
		dst[size - 1] = 0;
	}
	return (dstlen + srclen);
}
// dst [y,i,p,\0, ]	--> len = 3, size = 5
// src [i,e,\0]			--> len = 2, size = 3
//
// dst [y,i,p,i,\0] --> len = 4, size = 5
