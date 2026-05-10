/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrig2 <frodrig2@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:31:42 by frodrig2          #+#    #+#             */
/*   Updated: 2026/05/10 22:31:43 by frodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len < dst_size)
	{
		ft_memcpy(dst, src, src_len);
		dst[src_len] = 0;
	}
	else if (dst_size)
	{
		ft_memcpy(dst, src, dst_size - 1);
		dst[dst_size - 1] = 0;
	}
	return (src_len);
}
